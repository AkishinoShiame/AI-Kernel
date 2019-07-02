# cuDNN Install

cuDNN can be download and access from [here](https://developer.nvidia.com/cudnn).

But it required free membership, please remember to register first.

This instruction will choose to correspond with the cuda version, for CUDA 10.1. 

![cuDNN Page](https://i.imgur.com/wY6j2RR.png)

So we choose to download cuDNN v7.6.1 (June 24, 2019), for CUDA 10.1, for linux.

`wget https://developer.nvidia.com/compute/machine-learning/cudnn/secure/v7.6.1.34/prod/10.1_20190620/cudnn-10.1-linux-x64-v7.6.1.34.tgz`

Finally unpack and install.

```bash
root@HOSTNAME:~# tar -xzvf cudnn-10.1-linux-x64-v7.6.1.34.tgz 
root@HOSTNAME:~# cp cuda/include/cudnn.h /usr/local/cuda/include
root@HOSTNAME:~# cp cuda/lib64/libcudnn* /usr/local/cuda/lib64
root@HOSTNAME:~# chmod a+r /usr/local/cuda/include/cudnn.h /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ldconfig
```

And check installation is OK.

```bash
root@HOSTNAME:~# ls -lha libcudnn*
root@HOSTNAME:~# ls -lha /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ll /usr/local/cuda-10.1/targets/x86_64-linux/lib
```

# cuDNNのインストール

cuDNNは[ここ](https://developer.nvidia.com/cudnn)ダウンロードと使えます。

NVidiaはこのソフトウェアを使ってば、無料なメンバーシップを登録とログインが必要である。

ここの手順はcudaのリリースを対応する。それはCUDA 10.1をサポートできる。

![cuDNN Page](https://i.imgur.com/wY6j2RR.png)

だからこそ、cuDNN v7.6.1 (June 24, 2019), for CUDA 10.1をダウンロードする、Linuxサポートできるの方。

`wget https://developer.nvidia.com/compute/machine-learning/cudnn/secure/v7.6.1.34/prod/10.1_20190620/cudnn-10.1-linux-x64-v7.6.1.34.tgz`

最後は解凍とインストールする。

```bash
root@HOSTNAME:~# tar -xzvf cudnn-10.1-linux-x64-v7.6.1.34.tgz 
root@HOSTNAME:~# cp cuda/include/cudnn.h /usr/local/cuda/include
root@HOSTNAME:~# cp cuda/lib64/libcudnn* /usr/local/cuda/lib64
root@HOSTNAME:~# chmod a+r /usr/local/cuda/include/cudnn.h /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ldconfig
```

そうして、インストールしたの状況を確認する。

```bash
root@HOSTNAME:~# ls -lha libcudnn*
root@HOSTNAME:~# ls -lha /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ll /usr/local/cuda-10.1/targets/x86_64-linux/lib
```

# cuDNN 安裝

cuDNN可由[這裡](https://developer.nvidia.com/cudnn)下載與取得

由於官方有要求，因此需註冊免費的會員並登入才可存取。

本文件將根據先前提供安裝的cuda版本找尋對應的安裝，因此對應至CUDA 10.1版

![cuDNN Page](https://i.imgur.com/wY6j2RR.png)

所以下載cuDNN v7.6.1 (June 24, 2019), for CUDA 10.1給linux使用的版本

`wget https://developer.nvidia.com/compute/machine-learning/cudnn/secure/v7.6.1.34/prod/10.1_20190620/cudnn-10.1-linux-x64-v7.6.1.34.tgz`

最後，解壓縮並安裝

```bash
root@HOSTNAME:~# tar -xzvf cudnn-10.1-linux-x64-v7.6.1.34.tgz 
root@HOSTNAME:~# cp cuda/include/cudnn.h /usr/local/cuda/include
root@HOSTNAME:~# cp cuda/lib64/libcudnn* /usr/local/cuda/lib64
root@HOSTNAME:~# chmod a+r /usr/local/cuda/include/cudnn.h /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ldconfig
```

並確認所有的程式有被正確安裝

```bash
root@HOSTNAME:~# ls -lha libcudnn*
root@HOSTNAME:~# ls -lha /usr/local/cuda/lib64/libcudnn*
root@HOSTNAME:~# ll /usr/local/cuda-10.1/targets/x86_64-linux/lib
```
