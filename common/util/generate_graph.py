#!/usr/bin/python

import optparse
import os
import math
import random
import struct
import sys
from operator import itemgetter

#
# Variables
#
graphtypes = ["random", "narrow"]
distributions= ["uniform", "normtight", "normloose", "normtightcenter", "normloosecenter", "lognormal"]
DIST_UNIF = 0
DIST_NORMTIGHT = 1
DIST_NORMLOOSE = 2
DIST_NORMTIGHT_CENTER = 3
DIST_NORMLOOSE_CENTER = 4
DIST_LOGNORM = 5
usedistribution = DIST_UNIF

#
# Handle inputs
#
parser = optparse.OptionParser()
parser.add_option("--nodes", "-n", default=16, help="Number of graph nodes", type="int")
parser.add_option("--edges", "-e", default=105, help="Number of graph edges", type="int")
parser.add_option("--max-degree", "-m", default=-1, help="Maximum edges outgoing from a node", type="int")
parser.add_option("--character", "-c", type="choice", default="random", choices=graphtypes, help="Character of graph: %s" % graphtypes)
parser.add_option("--width", "-w", default=32, help="Width of narrow graphs", type="int")
parser.add_option("--gr-output", "-g", default=False, action='store_true', help="Output a .gr formated file (DIMACS)")
parser.add_option("--gr-old-output", "-o", default=False, action='store_true', help="Output a .gr formated file (OLD DIMACS)")
parser.add_option("--metis-output", "-t", default=False, action='store_true', help="Output a .graph formated file (Metis)")
parser.add_option("--directed", "-d", default=False, action='store_true', help="Make the graph directed")
parser.add_option("--distribution", type="choice", default="uniform", choices=distributions, help="Edge distribution: %s" % distributions)
parser.add_option("--input-graph", default=None, help="Graph to read as input to process or convert")
parser.add_option("--is-weighted", default=False, action='store_true', help="Whether the graph has weighted edges")
parser.add_option("--make-edges-bidirectional", default=False, action='store_true', help="Make input graph edges symmetric")
parser.add_option("--remove-self-loops", default=False, action='store_true', help="Remove edges with same source and destination")
parser.add_option("--get-degree-dist", default=False, action='store_true', help="Print a degree distribution")
(options, args) = parser.parse_args()

if options.nodes <= 1:
    print "ERROR: Must have >1 nodes"
    sys.exit(-1)

if options.edges < options.nodes:
    print "ERROR: This algorithm requires edges >= nodes (%d)!" % options.nodes
    sys.exit(-1)

max_edges = options.nodes * (options.nodes - 1)
if not options.directed:
    max_edges /= 2
if options.edges >= max_edges:
    print "WARN: Setting number of edges to max: %d" % max_edges
    options.edges = max_edges

if options.max_degree > 0:
    minDegree = 2.0 * options.edges / options.nodes
    if options.max_degree < minDegree:
        print "ERROR: Max degree must be greater than 2*edges/nodes (%f)" % minDegree
        sys.exit(-1)
    elif options.max_degree > options.nodes - 1:
        options.max_degree = options.nodes - 1
        print "WARN: Max degree too large. Setting to nodes-1 (%d)" % options.max_degree
else:
    options.max_degree = options.nodes - 1

if "uniform" in options.distribution:
    usedistribution = DIST_UNIF
elif "normtight" in options.distribution:
    usedistribution = DIST_NORMTIGHT
elif "normloose" in options.distribution:
    usedistribution = DIST_NORMLOOSE
elif "normtightcenter" in options.distribution:
    usedistribution = DIST_NORMTIGHT_CENTER
elif "normloosecenter" in options.distribution:
    usedistribution = DIST_NORMLOOSE_CENTER
elif "lognormal" in options.distribution:
    usedistribution = DIST_LOGNORM

#
# Node class
#
class Node(object):
    def __init__(self, id):
        self.id = id
        self.outEdges = []
        self.edgeWeights = []
        self.edgeCount = 0

    def addEdge(self, otherNodeId):
        self.outEdges.append(otherNodeId)

    def addWeightedEdge(self, otherNodeId, edgeWeight):
        self.outEdges.append(otherNodeId)
        self.edgeWeights.append(edgeWeight)

    def removeEdge(self, otherNodeId):
        if len(self.edgeWeights) == len(self.outEdges):
            print "ERROR: Don't know how to remove edge with weight"
            sys.exit(-1)
        self.outEdges.remove(otherNodeId)

    def numEdges(self):
        return len(self.outEdges)

    def getEdge(self, index):
        return self.outEdges[index]

    def getEdgeWeight(self, index):
        return self.edgeWeights[index]

    def setEdgeWeight(self, index, weight):
        self.edgeWeights[index] = weight

    def setEdgeCount(self, edges):
        self.edgeCount = edges

    def getEdgeCount(self):
        return self.edgeCount

    def isConnected(self, other_node_id):
        return other_node_id in self.outEdges
#         for edge in self.outEdges:
#             if otherNodeId == edge:
#                 return True
#         return False

    def getEdgeIndex(self, otherNodeId):
        index = 0
        for edge in self.outEdges:
            if otherNodeId == edge:
                return index
            index += 1
        return False

    def sortEdges(self):
        temp_edges = []
        index = 0
        for edge in self.outEdges:
            temp_edges.append([edge, index])
            index += 1
        temp_edges = sorted(temp_edges, key=itemgetter(0))
        new_edges = []
        new_edge_weights = []
        for temp_edge in temp_edges:
            new_edges.append(temp_edge[0])
            new_edge_weights.append(self.edgeWeights[temp_edge[1]])
        self.outEdges = new_edges
        self.edgeWeights = new_edge_weights

    def removeSelfLoops(self):
        num_removed = 0
        if len(self.outEdges) != len(self.edgeWeights):
            print "ERROR: node: %d, edges not correct before: %d != %d" % (self.id, len(self.outEdges), len(self.edgeWeights))
            sys.exit(-1)
        for index in range(len(self.outEdges)):
            dst_idx = index - num_removed
            if self.outEdges[dst_idx] == self.id:
                del self.outEdges[dst_idx]
                del self.edgeWeights[dst_idx]
                num_removed += 1
                self.edgeCount -= 1
        if len(self.outEdges) != len(self.edgeWeights):
            print "ERROR: node: %d, edges not correct after: %d != %d" % (self.id, len(self.outEdges), len(self.edgeWeights))
            sys.exit(-1)
        return num_removed

def getRandom(first_id, last_id):
    global usedistribution
    if first_id == last_id:
        return first_id
    if usedistribution == DIST_UNIF:
        return random.randint(first_id, last_id)
    elif usedistribution == DIST_NORMTIGHT:
        to_return = int(abs(random.normalvariate(0, math.sqrt(last_id - first_id))))
        return first_id + (to_return % (last_id - first_id))
    elif usedistribution == DIST_NORMLOOSE:
        to_return = int(abs(random.normalvariate(0, (last_id - first_id) / 10)))
        return first_id + (to_return % (last_id - first_id))
    elif usedistribution == DIST_NORMTIGHT_CENTER:
        to_return = int(random.normalvariate(0, math.sqrt(last_id - first_id)))
        return first_id + ((last_id - first_id) / 2) + (to_return % ((last_id - first_id) / 2))
    elif usedistribution == DIST_NORMLOOSE_CENTER:
        to_return = int(random.normalvariate(0, (last_id - first_id) / 10))
        return first_id + ((last_id - first_id) / 2) + (to_return % ((last_id - first_id) / 2))
    elif usedistribution == DIST_LOGNORM:
        print "ERROR: INCOMPLETE"
        sys.exit(0)
        return first_id + int(math.log(abs(random.normalvariate(0, (last_id - first_id) / 100))))
    else:
        print "ERROR: Unknown distribution: %u" % usedistribution
        sys.exit(-1)

def getPoissonValue(average_degree):
    to_return = 1
    ell = math.exp(-average_degree)
    multip = random.random()
    while multip > ell:
        to_return += 1
        multip = multip * random.random()
    return to_return

#
# Generate a graph with uniform edge degree
#
def generateRandomGraph(node_list, num_nodes, num_edges, max_degree, directed):
    print "Initially connecting the graph"
    num_edges_added = 0
    for node in range(num_nodes):
        if node_list[node].numEdges() < max_degree:
            conn_node = getRandom(0, num_nodes - 1)
            while conn_node == node or node_list[conn_node].numEdges() >= max_degree or node_list[node].isConnected(conn_node):
                conn_node = getRandom(0, num_nodes - 1)
            node_list[node].addEdge(conn_node)
            if not directed:
                node_list[conn_node].addEdge(node)
            num_edges_added += 1

    # Now for the extra edges we need to add, randomly add them
    num_edges_to_add = num_edges - num_nodes
    last_node = 0
    print "Adding %d more random edges" % num_edges_to_add
    for iter in range(num_edges_to_add):
        start_node = (getRandom(0, num_nodes - 1) + last_node) % num_nodes
        num_attempts = 0
        while node_list[start_node].numEdges() >= max_degree:
            num_attempts += 1
            if num_attempts < num_nodes:
                start_node = getRandom(0, num_nodes - 1)
            elif num_attempts >= 2 * num_nodes + 1:
                print "ERROR: Iterated too many times... trouble finding solution"
                sys.exit(-1)
            else:
                # Fall back to linear search
                start_node = (start_node + 1) % num_nodes
        end_node = (getRandom(0, num_nodes - 1) + start_node) % num_nodes
        num_attempts = 0
        while end_node == start_node or node_list[end_node].numEdges() >= max_degree or node_list[start_node].isConnected(end_node):
            num_attempts += 1
            if num_attempts < num_nodes:
                end_node = (getRandom(0, num_nodes - 1) + start_node) % num_nodes
            elif num_attempts >= 2 * num_nodes + 1:
                print "ERROR: Iterated too many times... trouble finding solution"
                sys.exit(-1)
            else:
                # Fall back to linear search
                end_node = (end_node + 1) % num_nodes

        node_list[start_node].addEdge(end_node)
        if not directed:
            node_list[end_node].addEdge(start_node)
        num_edges_added += 1
            
        if (num_edges_added % 50000 == 0):
            print "  Update at edge #%d" % num_edges_added

        last_node = start_node

#
# Generate a graph with distributed edge degree
#
def generateDegreeDistributedGraph(node_list, num_nodes, num_edges, max_degree, directed):
    print "Initially connecting the graph"
    num_edges_added = 0
    for node in range(num_nodes):
        if node_list[node].numEdges() < max_degree:
            conn_node = getRandom(0, num_nodes - 1)
            while conn_node == node or node_list[conn_node].numEdges() >= max_degree or node_list[node].isConnected(conn_node):
                conn_node = getRandom(0, num_nodes - 1)
            node_list[node].addEdge(conn_node)
            if not directed:
                node_list[conn_node].addEdge(node)
            num_edges_added += 1

    # Generate the edge degree of all the nodes
    average_degree = float(num_edges) / float(num_nodes)
    total_edges = 0
    edge_degrees = []
    for iter in range(num_nodes):
        new_degree = int(random.lognormvariate(math.log(average_degree), math.log(8)))
        total_edges += new_degree
        edge_degrees.append(new_degree)

    # Now randomly add or subtract extra edges to make the total correct
    for iter in range(100):
        print edge_degrees[iter]
    print "len(edge_degrees): %d, total_edges: %d" % (len(edge_degrees), total_edges)
    sys.exit(-1)


#
# Generate a narrow graph that has the given average width as specified by
# the parameter
#

usewidthfactor = 0.75
def generateNarrowGraph(node_list, num_nodes, num_edges, max_degree, avg_width):
    global usewidthfactor
    nodes_left = len(node_list)
    min_width = int(avg_width * usewidthfactor)
    if min_width == 0:
        min_width = 1
    max_width = int(avg_width * (2 - usewidthfactor))
    expected_epochs = num_nodes / avg_width
    edges_left = num_edges
    edges_per_epoch = num_edges / expected_epochs
    min_edges = int(edges_per_epoch * usewidthfactor)
    if min_edges == 0:
        min_edges = 1
    max_edges = int(edges_per_epoch * (2 - usewidthfactor))
    curr_node = 0
    epoch_number = 1

    print "Width range: [%d, %d]" % (min_width, max_width)

    print "Working in epochs..."
    last_epoch_nodes = []
    nodes_this_epoch = getRandom(min_width, max_width)
    print "Starting with %d nodes" % nodes_this_epoch
    for i in range(nodes_this_epoch):
        last_epoch_nodes.append(node_list[curr_node+i])
    curr_node += nodes_this_epoch
    nodes_left -= nodes_this_epoch
    this_epoch_nodes = []
    while nodes_left > 0:
        # Get the nodes to be connected in this epoch
        nodes_this_epoch = getRandom(min_width, max_width)
        if nodes_this_epoch > nodes_left:
            nodes_this_epoch = nodes_left

        if max_edges > (nodes_this_epoch * len(last_epoch_nodes)):
            print "    WARN: Shrinking max_edges (%u) to %u" % (max_edges, (nodes_this_epoch * len(last_epoch_nodes)))
            max_edges = (nodes_this_epoch * len(last_epoch_nodes))

        if max_edges == 0:
            edges_this_epoch = edges_left
        else:
            edges_this_epoch = getRandom(min_edges, max_edges)
        if edges_this_epoch > edges_left:
            edges_this_epoch = edges_left
        edges_per_node = edges_this_epoch / len(last_epoch_nodes)
        if edges_per_node == 0:
            edges_per_node = 1

#        if (epoch_number % 25) == 0:
        print "Epoch: %d, Nodes: %d, Edges: %d" % (epoch_number, nodes_this_epoch, edges_this_epoch)
        for i in range(nodes_this_epoch):
            # print "     curr_node: %d, i: %d" % (curr_node, i)
            this_epoch_nodes.append(node_list[curr_node+i])

        while edges_this_epoch > 0:
            for node in last_epoch_nodes:
                edges_to_add = getRandom(0, edges_per_node)
                # print "  Node: %d, Per node: %d, To add: %d" % (node.id, edges_per_node, edges_to_add)
                for edge_num in range(edges_to_add):
                    conn_node = getRandom(0, len(this_epoch_nodes) - 1)
                    while this_epoch_nodes[conn_node].numEdges() >= max_degree or node.isConnected(this_epoch_nodes[conn_node].id):
                        conn_node = getRandom(0, len(this_epoch_nodes) - 1)
                        # print "     Conn node: %d" % (conn_node)
                    if edges_left > 0:
                        # print "    Connecting %u to %u" % (node.id, conn_node)
                        node.addEdge(this_epoch_nodes[conn_node].id)
                        edges_left -= 1
                        if not options.directed:
                            this_epoch_nodes[conn_node].addEdge(node.id)
                            # edges_left -= 1
                        edges_this_epoch -= 1
                    if edges_this_epoch <= 0 or edges_left <= 0:
                        break
    
                if edges_this_epoch <= 0 or edges_left <= 0:
                    break

        # Handle some random number of nodes in this epoch so that the average
        # width is approximately as given
        nodes_left -= nodes_this_epoch
        if expected_epochs > epoch_number:
            avg_width = nodes_left / (expected_epochs - epoch_number)
        else:
            avg_width = nodes_left
        if expected_epochs > epoch_number:
            min_width = int(avg_width * usewidthfactor)
            if min_width == 0:
                min_width = 1
            max_width = int(avg_width * (2 - usewidthfactor))
        else:
            min_width = max_width = nodes_left
        if expected_epochs > epoch_number:
            edges_per_epoch = edges_left / (expected_epochs - epoch_number)
        else:
            edges_per_epoch = 0
        min_edges = int(edges_per_epoch * usewidthfactor)
        if min_edges == 0:
            min_edges = 1
        max_edges = int(edges_per_epoch * (2 - usewidthfactor))
        curr_node += nodes_this_epoch
        last_epoch_nodes = this_epoch_nodes
        this_epoch_nodes = []
        epoch_number += 1

    if edges_left != 0:
        print "ERROR: Edges left: %d... Ran out of nodes (nodes left: %d)?" % (edges_left, nodes_left)
        sys.exit(0)

def readEdgesInput(options, input_graph, node_list):
    options.directed = True
    options.is_weighted = True

    infile = open(input_graph, 'r')
    first_line = True
    edges_read = 0
    for line in infile:
        line = line.rstrip()
        if first_line:
            tokens = line.split()
            nodes = int(tokens[0])
            edges = int(tokens[1])
            print "Nodes: %d, edges: %d" % (nodes, edges)
            options.nodes = nodes
            options.edges = edges
            # Add nodes to the node_list
            for node in range(nodes):
                nodeList.append(Node(node))
            first_line = False
        else:
            tokens = line.split()
            assert(len(tokens) == 3)
            srcnode = int(tokens[0])
            dstnode = int(tokens[1])
            edgewt = int(tokens[2])
            node_list[srcnode].addWeightedEdge(dstnode, edgewt)
            edges_read += 1

    infile.close()

    assert(edges == edges_read)


def readConnInput(options, input_graph, node_list):
    options.directed = True
    options.is_weighted = False

    infile = open(input_graph, 'r')
    edges_read = 0
    for line in infile:
        line = line.rstrip().lstrip()
        if line.startswith("#"):
            if "Nodes" in line:
                tokens = line.split()
                NEXT_NONE = 0
                NEXT_NODES = 1
                NEXT_EDGES = 2
                next = 0
                nodes = 0
                edges = 0
                for token in tokens:
                    if next == NEXT_NODES:
                        nodes = int(token)
                        next = NEXT_NONE
                    elif next == NEXT_EDGES:
                        edges = int(token)
                        next = NEXT_NONE
                    elif next == NEXT_NONE:
                        if token == "Nodes:":
                            next = NEXT_NODES
                        elif token == "Edges:":
                            next = NEXT_EDGES
                
                print "Nodes: %d, edges: %d" % (nodes, edges)
                options.nodes = nodes
                options.edges = edges
                # Add nodes to the node_list
                for node in range(nodes):
                    nodeList.append(Node(node))
        else:
            tokens = line.split()
            assert(len(tokens) == 2)
            srcnode = int(tokens[0])
            dstnode = int(tokens[1])
            node_list[srcnode].addEdge(dstnode)
            print line
            edges_read += 1

    infile.close()

    assert(edges == edges_read)


def readGROldInput(options, input_graph, node_list):
    options.directed = True
    options.is_weighted = True

    infile = open(input_graph, 'r')
    nodes = 0
    edges = 0
    edges_read = 0
    for line in infile:
        line = line.rstrip().lstrip()
        if line[0] == 'c':
            # print "Comment: %s" % line
            pass

        elif line[0] == 'p':
            tokens = line.split()
            assert(len(tokens) == 4)
            assert(tokens[1] == "sp")
            nodes = int(tokens[2])
            edges = int(tokens[3])
            # print "Config: %d, %d" % (nodes, edges)
            for node in range(nodes):
                nodeList.append(Node(node))

        elif line[0] == 'a':
            assert(edges > 0)
            tokens = line.split()
            assert(len(tokens) == 4)
            srcnode = int(tokens[1]) - 1
            dstnode = int(tokens[2]) - 1
            edgewt = int(tokens[3])
            node_list[srcnode].addWeightedEdge(dstnode, edgewt)
            edges_read += 1

        else:
            print "ERROR: unknown line: %s" % line
            sys.exit(-1)

    infile.close()

    assert(edges == edges_read)


def readGRInput(options, input_graph, node_list):
    options.directed = True
    options.is_weighted = True

    infile = open(input_graph, 'r')

    # Input version and edge size bytes
    version_list = struct.unpack('QQ', infile.read(16))
    assert(len(version_list) == 2)
    version = version_list[0]
    edge_size = version_list[1]
    assert(version == 1) # Don't know how to handle other versions
    assert(edge_size == 4)

    # Input number of nodes and edges
    config_list = struct.unpack('QQ', infile.read(16))
    assert(len(config_list) == 2)
    nodes = config_list[0]
    edges = config_list[1]
    print "Nodes: %d, edges: %d" % (nodes, edges)
    options.nodes = nodes
    options.edges = edges

    file_size = nodes * 8 + edges * 2 * edge_size
    rest_of_file = infile.read(file_size)
    rof_index = 0

    # Create graph nodes and input edge list sizes for each node
    # (quadwords = 64-bits)
    last_edge_index = 0
    for node in range(nodes):
        nodeList.append(Node(node))
        edge_index = struct.unpack('Q', rest_of_file[rof_index:rof_index+8])[0]
        rof_index += 8
        num_edges = edge_index - last_edge_index
        nodeList[node].setEdgeCount(num_edges)
        last_edge_index = edge_index

    # Input edge destinations (unsigned integers = 32-bits)
    edge_destinations = []
    for node in range(nodes):
        for edge in range(nodeList[node].getEdgeCount()):
            edge_dst = struct.unpack('I', rest_of_file[rof_index:rof_index+4])[0]
            rof_index += 4
            edge_destinations.append(edge_dst)

    assert(len(edge_destinations) == edges)
    edge_destinations.reverse()

    # Input edge weights (unsigned integers = 32-bits)
    for node in range(nodes):
        for edge in range(nodeList[node].getEdgeCount()):
            edge_wt = struct.unpack('I', rest_of_file[rof_index:rof_index+4])[0]
            rof_index += 4
            edge_dst = edge_destinations.pop()
            nodeList[node].addWeightedEdge(edge_dst, edge_wt)

    assert(len(edge_destinations) == 0)

    infile.close()


def makeEdgesSymmetric(options, node_list):
    print "Making symmetric..."
    nodes = len(node_list)
    added_edges = 0
    for src in range(nodes):
        nodeList[src].sortEdges()
        for edge in range(nodeList[src].numEdges()):
            dst = nodeList[src].getEdge(edge)
            weight = nodeList[src].getEdgeWeight(edge)
            if not nodeList[dst].isConnected(src):
                nodeList[dst].addWeightedEdge(src, weight)
                # print "adding: %d %d %d" % (src, dst, weight)
                added_edges += 1
            else:
                dst_edge_index = nodeList[dst].getEdgeIndex(src)
                if nodeList[dst].getEdgeWeight(dst_edge_index) != weight:
                    # print "changing edge weight: %d %d %d->%d" % (dst, src, nodeList[dst].getEdgeWeight(dst_edge_index), weight)
                    nodeList[dst].setEdgeWeight(dst_edge_index, weight)
    options.edges += added_edges


def removeSelfLoops(options, node_list):
    print "Removing self loop edges..."
    for node in node_list:
        if node.isConnected(node.id):
            num_removed = node.removeSelfLoops()
            options.edges -= num_removed


def dumpTextOutput(options, node_list):
    out_filename = "graph_%d_%d_%s.txt" % (options.nodes, options.edges, options.distribution)
    print "Printing %s graph to: %s, HERE, NOW XD" % (options.character, out_filename)
    outfile = open(out_filename, "w")

    print >>outfile, "%d %d 0\n" % (options.nodes, options.edges)
    accumulate_edges = 0
    for node in range(options.nodes):
        print >>outfile, "%d %d" % (accumulate_edges, node_list[node].numEdges())
        accumulate_edges += node_list[node].numEdges()

    # Print source node = 0
    print >>outfile, ""

    # Print edge connectivity
    # print >>outfile, options.edges * 2
    for node in node_list:
        for edge in range(node.numEdges()):
            if options.is_weighted:
                print >>outfile, "%d %d" % (node.getEdge(edge), node.getEdgeWeight(edge))
            else:
                print >>outfile, "%d 1" % (node.getEdge(edge))

    outfile.close()


def dumpGROutput(options, node_list):
    out_filename = "graph_%d_%d.gr" % (options.nodes, options.edges)
    directed_str = "undirected"
    if options.directed:
        directed_str = "directed"
    print "Printing %s, %s graph to: %s" % (directed_str, options.character, out_filename)
    outfile = open(out_filename, "w")

    # Output version
    version = 1
    outfile.write(struct.pack('Q', version))

    # Output edge size bytes
    edge_size = 4
    outfile.write(struct.pack('Q', edge_size))

    # Output number of nodes and edges
    outfile.write(struct.pack('Q', options.nodes))
    if options.directed:
        outfile.write(struct.pack('Q', options.edges))
    else:
        outfile.write(struct.pack('Q', 2 * options.edges))

    # Output number of edges from each node
    accumulate_edges = 0
    for node in range(options.nodes):
        accumulate_edges += node_list[node].numEdges()
        outfile.write(struct.pack('Q', accumulate_edges))

    if options.directed:
        if accumulate_edges != options.edges:
            print "ERROR: Number of (directed) actual edges (%u) not equal to desired (%u)" % (accumulate_edges, options.edges)
            sys.exit(-1)
    else:
        if accumulate_edges != 2 * options.edges:
            print "ERROR: Number of (directed) actual edges (%u) not equal to desired (%u)" % (accumulate_edges, 2 * options.edges)
            sys.exit(-1)

    # Output edge destinations (unsigned integers = 32-bits)
    for node in node_list:
        for edge in range(node.numEdges()):
            outfile.write(struct.pack('I', node.getEdge(edge)))

    # Output edge weights (unsigned integers = 32-bits)
    for node in node_list:
        for edge in range(node.numEdges()):
            if options.is_weighted:
                outfile.write(struct.pack('I', node.getEdgeWeight(edge)))
            else:
                outfile.write(struct.pack('I', 1))

    outfile.close()


def dumpGROldOutput(options, node_list):
    assert(options.directed)
    assert(len(node_list) == options.nodes)

    out_filename = "graph_%d_%d_%s.grold" % (options.nodes, options.edges, options.distribution)
    directed_str = "undirected"
    if options.directed:
        directed_str = "directed"
    print "Printing %s, %s graph to: %s" % (directed_str, options.character, out_filename)

    outfile = open(out_filename, "w")

    print >>outfile, "c FILE: %s" % out_filename
    print >>outfile, "c No. of vertices: %d" % options.nodes
    print >>outfile, "c No. of directed edges: %d" % options.edges
    print >>outfile, "c Max. weight: 100"
    print >>outfile, "c Min. weight: 0"
    print >>outfile, "c A directed arc from u to v of weight w"

    if options.directed:
        print >>outfile, "p sp %u %u" % (options.nodes, options.edges)

    accumulate_edges = 0
    for node in node_list:
        for edge in range(node.numEdges()):
            print >>outfile, "a %u %u %u" % (node.id + 1, node.getEdge(edge) + 1, getRandom(0, 100))
            accumulate_edges += 1

    assert(accumulate_edges == options.edges)

    outfile.close()


def dumpMetisOutput(options, node_list):
    assert(not options.directed)
    assert(len(node_list) == options.nodes)

    out_filename = "graph_%d_%d_%s.graph" % (options.nodes, options.edges, options.distribution)
    directed_str = "undirected"
    if options.directed:
        directed_str = "directed"
    print "Printing %s, %s graph to: %s" % (directed_str, options.character, out_filename)

    outfile = open(out_filename, "w")

    print >>outfile, "%% Metis graph with %u nodes and %u undirected edges" % (options.nodes, options.edges)

    print >>outfile, "%u %u" % (options.nodes, options.edges)

    print >>outfile, "%% Each line contains edge adjacencies from the node associated with the line:"

    accumulate_edges = 0
    for node in node_list:
        for edge in range(node.numEdges()):
            print >>outfile, "%u" % (node.getEdge(edge) + 1),
            accumulate_edges += 1
        print >>outfile, ""

    outfile.close()

    if accumulate_edges != 2 * options.edges:
        print "AHHH: %d edges, wanted %d" % (accumulate_edges, 2 * options.edges)
        sys.exit(0)


def printEdgeDegreeDistribution(node_list):
    print "Edge degree distribution:"
    edge_degrees = {}
    max_degree = 0
    for node in node_list:
        num_edges = node.numEdges()
        if num_edges not in edge_degrees.keys():
            edge_degrees[num_edges] = 0
        edge_degrees[num_edges] += 1
        if num_edges > max_degree:
            max_degree = num_edges
    for i in range(max_degree + 1):
        if i not in edge_degrees.keys():
            print "%d\t0" % i
        else:
            print "%d\t%d" % (i, edge_degrees[i])


# The list of nodes (and their edges) to print out
nodeList = []

if options.input_graph is not None:
    #
    # If converting graph types, read the input graph here
    #
    input_graph = options.input_graph
    if not os.path.exists(input_graph):
        print "ERROR: Invalid graph file: %s" % input_graph
        sys.exit(-1)

    print "Read in graph here, and then process it!"
    if input_graph.endswith('gr'):
        # Check if this is a new or old version gr file
        infile = open(input_graph, 'r')
        # Input version and edge size bytes
        version_list = struct.unpack('QQ', infile.read(16))
        assert(len(version_list) == 2)
        infile.close()
        version = version_list[0]
        edge_size = version_list[1]
        if version == 1:
            print "Found gr file... Reading"
            readGRInput(options, input_graph, nodeList)
        elif version > 2^30:
            print "WARNING: Probably found grold file type... trying"
            print "Found grold file... Reading"
            readGROldInput(options, input_graph, nodeList)
        else:
            print "ERROR: Unknown file type. Version: %d" % version
            sys.exit(-1)
    elif input_graph.endswith('grold'):
        print "Found grold file... Reading"
        readGROldInput(options, input_graph, nodeList)
    elif input_graph.endswith('graph'):
        print "Found Metis file... Don't yet know how to read"
        sys.exit(-1)
    elif input_graph.endswith('edges'):
        print "Found edges file... Reading"
        readEdgesInput(options, input_graph, nodeList)
    elif input_graph.endswith('conn'):
        print "Found conn file... Reading"
        readConnInput(options, input_graph, nodeList)
    else:
        print "ERROR: Unknown graph file type: %s" % input_graph
        sys.exit(-1)

    if options.remove_self_loops:
        removeSelfLoops(options, nodeList)
    if options.make_edges_bidirectional:
        makeEdgesSymmetric(options, nodeList)

else:
    #
    # If not converting graphs, generate the graph depending on parameters
    #
    for node in range(options.nodes):
        nodeList.append(Node(node))

    if options.character is "random":
        generateRandomGraph(nodeList, options.nodes, options.edges, options.max_degree, options.directed)
    elif options.character == "narrow":
        generateNarrowGraph(nodeList, options.nodes, options.edges, options.max_degree, options.width)
    else:
        print "ERROR: Unknown graph type: %s" % options.character
        sys.exit(-1)

if options.get_degree_dist:
    assert(options.input_graph is not None)
    printEdgeDegreeDistribution(nodeList)

else:
    #
    # Dump to file
    #
    if not options.gr_output and not options.gr_old_output and not options.metis_output:
        print(1)
        dumpTextOutput(options, nodeList)
    elif options.gr_output:
        print(2)
        dumpGROutput(options, nodeList)
    elif options.gr_old_output:
        print(3)
        dumpGROldOutput(options, nodeList)
    elif options.metis_output:
        print(4)
        dumpMetisOutput(options, nodeList)
