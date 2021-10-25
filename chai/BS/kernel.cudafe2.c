# 1 "kernel.cudafe1.gpu"
# 51 "support/common.h"
struct XYZ;
# 49 "support/partitioner.h"
struct Partitioner;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 135 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __clock_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
# 51 "support/common.h"
struct XYZ {
# 52 "support/common.h"
double x;
# 53 "support/common.h"
double y;
# 54 "support/common.h"
double z;};
# 55 "support/common.h"
typedef struct XYZ XYZ;
# 49 "support/partitioner.h"
struct Partitioner {
# 51 "support/partitioner.h"
int n_tasks;
# 52 "support/partitioner.h"
int cut;
# 53 "support/partitioner.h"
int current;
# 62 "support/partitioner.h"
int strategy;
# 64 "support/partitioner.h"
int *worklist;
# 65 "support/partitioner.h"
int *tmp;};
# 71 "support/partitioner.h"
typedef struct Partitioner Partitioner;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "kernel.cudafe2.stub.c"
