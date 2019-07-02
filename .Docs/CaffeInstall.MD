# Caffe Install

The Caffe installation is to support NVidia DIGIS to work propoly.

Due to OpenBLAS also required for Caffe installation, it needs to be install first.

## Install OpenBLAS

Download OpenBLAS from it's official github site.

`git clone https://github.com/xianyi/OpenBLAS.git`

```bash
root@HOSTNAME:~# git clone https://github.com/xianyi/OpenBLAS.git
Cloning into 'OpenBLAS'...
remote: Enumerating objects: 92, done.
remote: Counting objects: 100% (92/92), done.
remote: Compressing objects: 100% (79/79), done.
remote: Total 37557 (delta 62), reused 17 (delta 13), pack-reused 37465
Receiving objects: 100% (37557/37557), 23.96 MiB | 4.72 MiB/s, done.
Resolving deltas: 100% (29831/29831), done.
Checking connectivity... done.
Checking out files: 100% (9159/9159), done.
```

Install needed compiler for the build.

`~# apt install build-essential cmake gfortran`

Then follow the official instrouction to build and install.

```bash
~# cd OpenBLAS/
~# mkdir build
~# cd build
~# cmake ..
~# make install 
```

## Install Caffe

Download Caffe from it's official github site.

`export CAFFE_ROOT=~/caffe`

`git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT`

```bash
root@HOSTNAME:~# git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT
Cloning into '/root/caffe'...
remote: Enumerating objects: 65269, done.
remote: Total 65269 (delta 0), reused 0 (delta 0), pack-reused 65269
Receiving objects: 100% (65269/65269), 74.38 MiB | 3.52 MiB/s, done.
Resolving deltas: 100% (41261/41261), done.
Checking connectivity... done.
```

Install needed compiler for the build.

```bash
~# apt install -y libprotobuf-dev libleveldb-dev libsnappy-dev libopencv-dev libhdf5-serial-dev protobuf-compiler
~# apt install -y --no-install-recommends libboost-all-dev
~# apt install -y python-dev
~# apt install -y libturbojpeg
~# ln -s /usr/lib/x86_64-linux-gnu/libturbojpeg.so.0.1.0 /usr/lib/x86_64-linux-gnu/libturbojpeg.so
~# apt install -y --no-install-recommends build-essential cmake git gfortran libatlas-base-dev libboost-filesystem-dev libboost-python-dev libboost-system-dev libboost-thread-dev libgflags-dev libgoogle-glog-dev libhdf5-serial-dev libleveldb-dev liblmdb-dev libopencv-dev libsnappy-dev python-all-dev python-dev python-h5py python-matplotlib python-numpy python-opencv python-pil python-pip python-pydot python-scipy python-skimage python-sklearn
```

Pre-Python packages need to be installed.

```bash
~# pip2 install -r $CAFFE_ROOT/python/requirements.txt
~# cat $CAFFE_ROOT/python/requirements.txt | xargs -n1 pip2 install
```

Prepare for Makefile.config cookbook and correspondingly update by the enviorment.

`~# cd $CAFFE_ROOT`

`~# cp Makefile.config.example Makefile.config`

`~# vim Makefile.config`

```bash
## Refer to http://caffe.berkeleyvision.org/installation.html
# Contributions simplifying and improving our build system are welcome!

# cuDNN acceleration switch (uncomment to build with cuDNN).
# cuDNN version 6 or higher is required.
USE_CUDNN := 1

# NCCL acceleration switch (uncomment to build with NCCL)
# See https://github.com/NVIDIA/nccl
USE_NCCL := 1

# Builds tests with 16 bit float support in addition to 32 and 64 bit.
# TEST_FP16 := 1

# uncomment to disable IO dependencies and corresponding data layers
# USE_OPENCV := 0
# USE_LEVELDB := 0
# USE_LMDB := 0

# Uncomment if you're using OpenCV 3
OPENCV_VERSION := 3

# To customize your choice of compiler, uncomment and set the following.
# N.B. the default for Linux is g++ and the default for OSX is clang++
# CUSTOM_CXX := g++

# CUDA directory contains bin/ and lib/ directories that we need.
CUDA_DIR := /usr/local/cuda
# On Ubuntu 14.04, if cuda tools are installed via
# "sudo apt-get install nvidia-cuda-toolkit" then use this instead:
# CUDA_DIR := /usr

# CUDA architecture setting: going with all of them.
CUDA_ARCH :=    -gencode arch=compute_50,code=sm_50 \
                -gencode arch=compute_52,code=sm_52 \
                -gencode arch=compute_60,code=sm_60 \
                -gencode arch=compute_61,code=sm_61 \
                -gencode arch=compute_70,code=sm_70 \
                -gencode arch=compute_75,code=sm_75 \
                -gencode arch=compute_75,code=compute_75

# BLAS choice:
# atlas for ATLAS
# mkl for MKL
# open for OpenBlas - default, see https://github.com/xianyi/OpenBLAS
BLAS := open
# Custom (MKL/ATLAS/OpenBLAS) include and lib directories.
BLAS_INCLUDE := /usr/local/include/openblas/
BLAS_LIB := /usr/local/lib/

# Homebrew puts openblas in a directory that is not on the standard search path
# BLAS_INCLUDE := $(shell brew --prefix openblas)/include
# BLAS_LIB := $(shell brew --prefix openblas)/lib

# This is required only if you will compile the matlab interface.
# MATLAB directory should contain the mex binary in /bin.
# MATLAB_DIR := /usr/local
# MATLAB_DIR := /Applications/MATLAB_R2012b.app

# NOTE: this is required only if you will compile the python interface.
# We need to be able to find Python.h and numpy/arrayobject.h.
PYTHON_INCLUDE := /usr/include/python2.7 \
                /usr/lib/python2.7/dist-packages/numpy/core/include
# Anaconda Python distribution is quite popular. Include path:
# Verify anaconda location, sometimes it's in root.
# ANACONDA_HOME := $(HOME)/anaconda
# PYTHON_INCLUDE := $(ANACONDA_HOME)/include \
                # $(ANACONDA_HOME)/include/python2.7 \
                # $(ANACONDA_HOME)/lib/python2.7/site-packages/numpy/core/include \

# Uncomment to use Python 3 (default is Python 2)
# PYTHON_LIBRARIES := boost_python3 python3.5m
# PYTHON_INCLUDE := /usr/include/python3.5m \
#                 /usr/lib/python3.5/dist-packages/numpy/core/include

# We need to be able to find libpythonX.X.so or .dylib.
PYTHON_LIB := /usr/lib
# PYTHON_LIB := $(ANACONDA_HOME)/lib

# Homebrew installs numpy in a non standard path (keg only)
# PYTHON_INCLUDE += $(dir $(shell python -c 'import numpy.core; print(numpy.core.__file__)'))/include
# PYTHON_LIB += $(shell brew --prefix numpy)/lib

# Uncomment to support layers written in Python (will link against Python libs)
# WITH_PYTHON_LAYER := 1

# Whatever else you find you need goes here.
INCLUDE_DIRS := $(PYTHON_INCLUDE) /usr/local/include /usr/include/hdf5/serial
LIBRARY_DIRS := $(PYTHON_LIB) /usr/local/lib /usr/lib /usr/lib/x86_64-linux-gnu/hdf5/serial

# If Homebrew is installed at a non standard location (for example your home directory) and you use it for general dependencies
# INCLUDE_DIRS += $(shell brew --prefix)/include
# LIBRARY_DIRS += $(shell brew --prefix)/lib

# Uncomment to use `pkg-config` to specify OpenCV library paths.
# (Usually not necessary -- OpenCV libraries are normally installed in one of the above $LIBRARY_DIRS.)
# USE_PKG_CONFIG := 1

BUILD_DIR := build
DISTRIBUTE_DIR := distribute

# Uncomment for debugging. Does not work on OSX due to https://github.com/BVLC/caffe/issues/171
# DEBUG := 1

# The ID of the GPU that 'make runtest' will use to run unit tests.
TEST_GPUID := 0

# enable pretty build (comment to see full commands)
Q ?= @

# shared object suffix name to differentiate branches
LIBRARY_NAME_SUFFIX := -nv
```

Finally build and install.

```bash
~# cd $CAFFE_ROOT
~# mkdir build
~# cd build
~# cmake ..
~# make -j"$(nproc)"
~# make install
```

`==================================Split-Line===========================================`

# Caffeのインストール

CaffeはNVidia DIGISのインストールをサポートの為に必要です。

後はもしCaffeをインストールするの場合は、OpenBLASが必要です。

## OpenBLASをインストール

OpenBLASの公式GitHubサイトからダウンロードする。

`git clone https://github.com/xianyi/OpenBLAS.git`

```bash
root@HOSTNAME:~# git clone https://github.com/xianyi/OpenBLAS.git
Cloning into 'OpenBLAS'...
remote: Enumerating objects: 92, done.
remote: Counting objects: 100% (92/92), done.
remote: Compressing objects: 100% (79/79), done.
remote: Total 37557 (delta 62), reused 17 (delta 13), pack-reused 37465
Receiving objects: 100% (37557/37557), 23.96 MiB | 5.08 MiB/s, done.
Resolving deltas: 100% (29831/29831), done.
Checking connectivity... done.
Checking out files: 100% (9159/9159), done.
```

必要なコンパイラを用意する。

`~# apt install build-essential cmake gfortran`

そうして、公式の手順で実行する。

```bash
~# cd OpenBLAS/
~# mkdir build
~# cd build
~# cmake ..
~# make install 
```

## Caffeをインストール

Caffeの公式GitHubサイトからダウンロードする。

`export CAFFE_ROOT=~/caffe`

`git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT`

```bash
root@HOSTNAME:~# git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT
Cloning into '/root/caffe'...
remote: Enumerating objects: 65269, done.
remote: Total 65269 (delta 0), reused 0 (delta 0), pack-reused 65269
Receiving objects: 100% (65269/65269), 74.38 MiB | 3.52 MiB/s, done.
Resolving deltas: 100% (41261/41261), done.
Checking connectivity... done.
```

必要なコンパイラを用意する。

```bash
~# apt install -y libprotobuf-dev libleveldb-dev libsnappy-dev libopencv-dev libhdf5-serial-dev protobuf-compiler
~# apt install -y --no-install-recommends libboost-all-dev
~# apt install -y python-dev
~# apt install -y libturbojpeg
~# ln -s /usr/lib/x86_64-linux-gnu/libturbojpeg.so.0.1.0 /usr/lib/x86_64-linux-gnu/libturbojpeg.so
~# apt install -y --no-install-recommends build-essential cmake git gfortran libatlas-base-dev libboost-filesystem-dev libboost-python-dev libboost-system-dev libboost-thread-dev libgflags-dev libgoogle-glog-dev libhdf5-serial-dev libleveldb-dev liblmdb-dev libopencv-dev libsnappy-dev python-all-dev python-dev python-h5py python-matplotlib python-numpy python-opencv python-pil python-pip python-pydot python-scipy python-skimage python-sklearn
```

Pythonの必要な予備ライブラリをインストールする。

```bash
~# pip2 install -r $CAFFE_ROOT/python/requirements.txt
~# cat $CAFFE_ROOT/python/requirements.txt | xargs -n1 pip2 install
```

環境によって、Makefile.configのクックブックを作ると更新する。

`~# cd $CAFFE_ROOT`

`~# cp Makefile.config.example Makefile.config`

`~# vim Makefile.config`

```bash
## Refer to http://caffe.berkeleyvision.org/installation.html
# Contributions simplifying and improving our build system are welcome!

# cuDNN acceleration switch (uncomment to build with cuDNN).
# cuDNN version 6 or higher is required.
USE_CUDNN := 1

# NCCL acceleration switch (uncomment to build with NCCL)
# See https://github.com/NVIDIA/nccl
USE_NCCL := 1

# Builds tests with 16 bit float support in addition to 32 and 64 bit.
# TEST_FP16 := 1

# uncomment to disable IO dependencies and corresponding data layers
# USE_OPENCV := 0
# USE_LEVELDB := 0
# USE_LMDB := 0

# Uncomment if you're using OpenCV 3
OPENCV_VERSION := 3

# To customize your choice of compiler, uncomment and set the following.
# N.B. the default for Linux is g++ and the default for OSX is clang++
# CUSTOM_CXX := g++

# CUDA directory contains bin/ and lib/ directories that we need.
CUDA_DIR := /usr/local/cuda
# On Ubuntu 14.04, if cuda tools are installed via
# "sudo apt-get install nvidia-cuda-toolkit" then use this instead:
# CUDA_DIR := /usr

# CUDA architecture setting: going with all of them.
CUDA_ARCH :=    -gencode arch=compute_50,code=sm_50 \
                -gencode arch=compute_52,code=sm_52 \
                -gencode arch=compute_60,code=sm_60 \
                -gencode arch=compute_61,code=sm_61 \
                -gencode arch=compute_70,code=sm_70 \
                -gencode arch=compute_75,code=sm_75 \
                -gencode arch=compute_75,code=compute_75

# BLAS choice:
# atlas for ATLAS
# mkl for MKL
# open for OpenBlas - default, see https://github.com/xianyi/OpenBLAS
BLAS := open
# Custom (MKL/ATLAS/OpenBLAS) include and lib directories.
BLAS_INCLUDE := /usr/local/include/openblas/
BLAS_LIB := /usr/local/lib/

# Homebrew puts openblas in a directory that is not on the standard search path
# BLAS_INCLUDE := $(shell brew --prefix openblas)/include
# BLAS_LIB := $(shell brew --prefix openblas)/lib

# This is required only if you will compile the matlab interface.
# MATLAB directory should contain the mex binary in /bin.
# MATLAB_DIR := /usr/local
# MATLAB_DIR := /Applications/MATLAB_R2012b.app

# NOTE: this is required only if you will compile the python interface.
# We need to be able to find Python.h and numpy/arrayobject.h.
PYTHON_INCLUDE := /usr/include/python2.7 \
                /usr/lib/python2.7/dist-packages/numpy/core/include
# Anaconda Python distribution is quite popular. Include path:
# Verify anaconda location, sometimes it's in root.
# ANACONDA_HOME := $(HOME)/anaconda
# PYTHON_INCLUDE := $(ANACONDA_HOME)/include \
                # $(ANACONDA_HOME)/include/python2.7 \
                # $(ANACONDA_HOME)/lib/python2.7/site-packages/numpy/core/include \

# Uncomment to use Python 3 (default is Python 2)
# PYTHON_LIBRARIES := boost_python3 python3.5m
# PYTHON_INCLUDE := /usr/include/python3.5m \
#                 /usr/lib/python3.5/dist-packages/numpy/core/include

# We need to be able to find libpythonX.X.so or .dylib.
PYTHON_LIB := /usr/lib
# PYTHON_LIB := $(ANACONDA_HOME)/lib

# Homebrew installs numpy in a non standard path (keg only)
# PYTHON_INCLUDE += $(dir $(shell python -c 'import numpy.core; print(numpy.core.__file__)'))/include
# PYTHON_LIB += $(shell brew --prefix numpy)/lib

# Uncomment to support layers written in Python (will link against Python libs)
# WITH_PYTHON_LAYER := 1

# Whatever else you find you need goes here.
INCLUDE_DIRS := $(PYTHON_INCLUDE) /usr/local/include /usr/include/hdf5/serial
LIBRARY_DIRS := $(PYTHON_LIB) /usr/local/lib /usr/lib /usr/lib/x86_64-linux-gnu/hdf5/serial

# If Homebrew is installed at a non standard location (for example your home directory) and you use it for general dependencies
# INCLUDE_DIRS += $(shell brew --prefix)/include
# LIBRARY_DIRS += $(shell brew --prefix)/lib

# Uncomment to use `pkg-config` to specify OpenCV library paths.
# (Usually not necessary -- OpenCV libraries are normally installed in one of the above $LIBRARY_DIRS.)
# USE_PKG_CONFIG := 1

BUILD_DIR := build
DISTRIBUTE_DIR := distribute

# Uncomment for debugging. Does not work on OSX due to https://github.com/BVLC/caffe/issues/171
# DEBUG := 1

# The ID of the GPU that 'make runtest' will use to run unit tests.
TEST_GPUID := 0

# enable pretty build (comment to see full commands)
Q ?= @

# shared object suffix name to differentiate branches
LIBRARY_NAME_SUFFIX := -nv
```

最後はこの手順でビルドとインストールする。

```bash
~# cd $CAFFE_ROOT
~# mkdir build
~# cd build
~# cmake ..
~# make -j"$(nproc)"
~# make install
```

`==================================キリカエ-セン=========================================`

# Caffe 安裝

Caffe的安裝是用來支援NVidia DIGIS的使用。

此外由於Caffe需要OpenBLAS為相依套件才有辦法安裝。

## OpenBLAS 安裝

將OpenBLAS由官方GitHub源下載與取得

`git clone https://github.com/xianyi/OpenBLAS.git`

```bash
root@HOSTNAME:~# git clone https://github.com/xianyi/OpenBLAS.git
Cloning into 'OpenBLAS'...
remote: Enumerating objects: 92, done.
remote: Counting objects: 100% (92/92), done.
remote: Compressing objects: 100% (79/79), done.
remote: Total 37557 (delta 62), reused 17 (delta 13), pack-reused 37465
Receiving objects: 100% (37557/37557), 23.96 MiB | 4.89 MiB/s, done.
Resolving deltas: 100% (29831/29831), done.
Checking connectivity... done.
Checking out files: 100% (9159/9159), done.
```

安裝所需套件，準備好環境：

`~# apt install build-essential cmake gfortran`

接著依照官方提供的步驟進行安裝。

```bash
~# cd OpenBLAS/
~# mkdir build
~# cd build
~# cmake ..
~# make install 
```

## 安裝 Caffe

將Caffe由官方GitHub源下載與取得

`export CAFFE_ROOT=~/caffe`

`git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT`

```bash
root@HOSTNAME:~# git clone https://github.com/BVLC/caffe.git $CAFFE_ROOT
Cloning into '/root/caffe'...
remote: Enumerating objects: 65269, done.
remote: Total 65269 (delta 0), reused 0 (delta 0), pack-reused 65269
Receiving objects: 100% (65269/65269), 74.38 MiB | 3.52 MiB/s, done.
Resolving deltas: 100% (41261/41261), done.
Checking connectivity... done.
```

安裝所需套件，準備好環境：

```bash
~# apt install -y libprotobuf-dev libleveldb-dev libsnappy-dev libopencv-dev libhdf5-serial-dev protobuf-compiler
~# apt install -y --no-install-recommends libboost-all-dev
~# apt install -y python-dev
~# apt install -y libturbojpeg
~# ln -s /usr/lib/x86_64-linux-gnu/libturbojpeg.so.0.1.0 /usr/lib/x86_64-linux-gnu/libturbojpeg.so
~# apt install -y --no-install-recommends build-essential cmake git gfortran libatlas-base-dev libboost-filesystem-dev libboost-python-dev libboost-system-dev libboost-thread-dev libgflags-dev libgoogle-glog-dev libhdf5-serial-dev libleveldb-dev liblmdb-dev libopencv-dev libsnappy-dev python-all-dev python-dev python-h5py python-matplotlib python-numpy python-opencv python-pil python-pip python-pydot python-scipy python-skimage python-sklearn
```

Python環境下必要的函示庫套件安裝：

```bash
~# pip2 install -r $CAFFE_ROOT/python/requirements.txt
~# cat $CAFFE_ROOT/python/requirements.txt | xargs -n1 pip2 install
```

根據系統環境與需求建置與更新Makefile.config檔案，用以告知Caffe在底層的函示庫調用資訊。

`~# cd $CAFFE_ROOT`

`~# cp Makefile.config.example Makefile.config`

`~# vim Makefile.config`

```bash
## Refer to http://caffe.berkeleyvision.org/installation.html
# Contributions simplifying and improving our build system are welcome!

# cuDNN acceleration switch (uncomment to build with cuDNN).
# cuDNN version 6 or higher is required.
USE_CUDNN := 1

# NCCL acceleration switch (uncomment to build with NCCL)
# See https://github.com/NVIDIA/nccl
USE_NCCL := 1

# Builds tests with 16 bit float support in addition to 32 and 64 bit.
# TEST_FP16 := 1

# uncomment to disable IO dependencies and corresponding data layers
# USE_OPENCV := 0
# USE_LEVELDB := 0
# USE_LMDB := 0

# Uncomment if you're using OpenCV 3
OPENCV_VERSION := 3

# To customize your choice of compiler, uncomment and set the following.
# N.B. the default for Linux is g++ and the default for OSX is clang++
# CUSTOM_CXX := g++

# CUDA directory contains bin/ and lib/ directories that we need.
CUDA_DIR := /usr/local/cuda
# On Ubuntu 14.04, if cuda tools are installed via
# "sudo apt-get install nvidia-cuda-toolkit" then use this instead:
# CUDA_DIR := /usr

# CUDA architecture setting: going with all of them.
CUDA_ARCH :=    -gencode arch=compute_50,code=sm_50 \
                -gencode arch=compute_52,code=sm_52 \
                -gencode arch=compute_60,code=sm_60 \
                -gencode arch=compute_61,code=sm_61 \
                -gencode arch=compute_70,code=sm_70 \
                -gencode arch=compute_75,code=sm_75 \
                -gencode arch=compute_75,code=compute_75

# BLAS choice:
# atlas for ATLAS
# mkl for MKL
# open for OpenBlas - default, see https://github.com/xianyi/OpenBLAS
BLAS := open
# Custom (MKL/ATLAS/OpenBLAS) include and lib directories.
BLAS_INCLUDE := /usr/local/include/openblas/
BLAS_LIB := /usr/local/lib/

# Homebrew puts openblas in a directory that is not on the standard search path
# BLAS_INCLUDE := $(shell brew --prefix openblas)/include
# BLAS_LIB := $(shell brew --prefix openblas)/lib

# This is required only if you will compile the matlab interface.
# MATLAB directory should contain the mex binary in /bin.
# MATLAB_DIR := /usr/local
# MATLAB_DIR := /Applications/MATLAB_R2012b.app

# NOTE: this is required only if you will compile the python interface.
# We need to be able to find Python.h and numpy/arrayobject.h.
PYTHON_INCLUDE := /usr/include/python2.7 \
                /usr/lib/python2.7/dist-packages/numpy/core/include
# Anaconda Python distribution is quite popular. Include path:
# Verify anaconda location, sometimes it's in root.
# ANACONDA_HOME := $(HOME)/anaconda
# PYTHON_INCLUDE := $(ANACONDA_HOME)/include \
                # $(ANACONDA_HOME)/include/python2.7 \
                # $(ANACONDA_HOME)/lib/python2.7/site-packages/numpy/core/include \

# Uncomment to use Python 3 (default is Python 2)
# PYTHON_LIBRARIES := boost_python3 python3.5m
# PYTHON_INCLUDE := /usr/include/python3.5m \
#                 /usr/lib/python3.5/dist-packages/numpy/core/include

# We need to be able to find libpythonX.X.so or .dylib.
PYTHON_LIB := /usr/lib
# PYTHON_LIB := $(ANACONDA_HOME)/lib

# Homebrew installs numpy in a non standard path (keg only)
# PYTHON_INCLUDE += $(dir $(shell python -c 'import numpy.core; print(numpy.core.__file__)'))/include
# PYTHON_LIB += $(shell brew --prefix numpy)/lib

# Uncomment to support layers written in Python (will link against Python libs)
# WITH_PYTHON_LAYER := 1

# Whatever else you find you need goes here.
INCLUDE_DIRS := $(PYTHON_INCLUDE) /usr/local/include /usr/include/hdf5/serial
LIBRARY_DIRS := $(PYTHON_LIB) /usr/local/lib /usr/lib /usr/lib/x86_64-linux-gnu/hdf5/serial

# If Homebrew is installed at a non standard location (for example your home directory) and you use it for general dependencies
# INCLUDE_DIRS += $(shell brew --prefix)/include
# LIBRARY_DIRS += $(shell brew --prefix)/lib

# Uncomment to use `pkg-config` to specify OpenCV library paths.
# (Usually not necessary -- OpenCV libraries are normally installed in one of the above $LIBRARY_DIRS.)
# USE_PKG_CONFIG := 1

BUILD_DIR := build
DISTRIBUTE_DIR := distribute

# Uncomment for debugging. Does not work on OSX due to https://github.com/BVLC/caffe/issues/171
# DEBUG := 1

# The ID of the GPU that 'make runtest' will use to run unit tests.
TEST_GPUID := 0

# enable pretty build (comment to see full commands)
Q ?= @

# shared object suffix name to differentiate branches
LIBRARY_NAME_SUFFIX := -nv
```

最後，依照以下的順序進行編譯與安裝建置：

```bash
~# cd $CAFFE_ROOT
~# mkdir build
~# cd build
~# cmake ..
~# make -j"$(nproc)"
~# make install
```
