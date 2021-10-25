
FROM ubuntu:14.04

MAINTAINER Jason Lowe-Power <jason@lowepower.com>

# Install all of gem5's dependencies
RUN apt-get update -y && apt-get install -y \
        build-essential \
        python-dev \
        scons \
        swig \
        zlib1g-dev \
        m4 \
        libprotobuf-dev \
        python-protobuf \
        protobuf-compiler \
        libgoogle-perftools-dev
RUN apt-get install --no-install-recommends -y mercurial

# Install dependencies for gem5-gpu (CUDA benchmarks)
RUN apt-get install -y \
            gcc-4.6 \
            g++-4.6 \
            python \
            wget

RUN wget http://developer.download.nvidia.com/compute/cuda/3_2_prod/toolkit/cudatoolkit_3.2.16_linux_64_ubuntu10.04.run
RUN wget http://developer.download.nvidia.com/compute/cuda/3_2_prod/sdk/gpucomputingsdk_3.2.16_linux.run

# Note: May need to make sure return is pressed
RUN bash cudatoolkit_3.2.16_linux_64_ubuntu10.04.run
# Note: must input /usr/local/cuda, then return
RUN bash gpucomputingsdk_3.2.16_linux.run
RUN mv /root/NVIDIA_GPU_Computing_SDK/C /usr/local/cuda

RUN echo " \
    export CUDAHOME=/usr/local/cuda; \
    export PATH=$PATH:/usr/local/cuda/bin; \
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/cuda/lib64:/usr/local/cuda/lib; \
    export LIBRARY_PATH=$LIBRARY_PATH:/usr/local/cuda/C/lib; \
    " >> /root/.bashrc
#RUN source /root/.bashrc

WORKDIR /usr/local/cuda/C/common
RUN make 2> /dev/null

# Also needed, but not at this stage in the build
# WORKDIR /gem5-gpu/benchmarks/common
# RUN make
