# CUDA Toolkit Install

The installation will mostly follow the official instrouction.

The official sites can be found from [here](https://developer.nvidia.com/cuda-downloads).

First we need to download the install file from official using `wget`.

```bash
root@HOSTNAME:~# wget http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
--2019-06-25 17:09:43--  http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
Resolving developer.download.nvidia.com (developer.download.nvidia.com)... 192.229.232.112, 2606:2800:247:2063:46e:21d:825:102e
Connecting to developer.download.nvidia.com (developer.download.nvidia.com)|192.229.232.112|:80... connected.
HTTP request sent, awaiting response... 200 OK
Length: 2842 (2.8K) [application/x-deb]
Saving to: ‘cuda-repo-ubuntu1604_10.1.168-1_amd64.deb’

cuda-repo-ubuntu1604_10.1 100%[=====================================>]   2.78K  --.-KB/s    in 0s

2019-06-25 17:09:43 (101 MB/s) - ‘cuda-repo-ubuntu1604_10.1.168-1_amd64.deb’ saved [2842/2842]

root@HOSTNAME:~#
```

And we follow the official instrouction to read the .deb file with `~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb`.

```bash
root@HOSTNAME:~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
Selecting previously unselected package cuda-repo-ubuntu1604.
(Reading database ... 26313 files and directories currently installed.)
Preparing to unpack cuda-repo-ubuntu1604_10.1.168-1_amd64.deb ...
Unpacking cuda-repo-ubuntu1604 (10.1.168-1) ...
Setting up cuda-repo-ubuntu1604 (10.1.168-1) ...

The public CUDA GPG key does not appear to be installed.
To install the key, run this command:
sudo apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub

root@HOSTNAME:~#
```

Now, needs to fetch the keys to ensure the source and continue download package are correct, with `~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub`.

```bash
root@HOSTNAME:~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
Executing: /tmp/tmp.6rYYkQMp85/gpg.1.sh --fetch-keys
http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
gpg: key 7FA2AF80: public key "cudatools <cudatools@nvidia.com>" imported
gpg: Total number processed: 1
gpg:               imported: 1  (RSA: 1)
root@HOSTNAME:~#
```

Now we can update the repository list for the softwares as `~# apt update`.

```bash
root@HOSTNAME:~# apt update
Ign:1 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  InRelease
Get:2 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  Release [564 B]
Get:3 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  Release.gpg [801 B]
Hit:4 http://archive.ubuntu.com/ubuntu xenial InRelease
Get:5 http://security.ubuntu.com/ubuntu xenial-security InRelease [109 kB]
Get:6 http://archive.ubuntu.com/ubuntu xenial-updates InRelease [109 kB]
Get:7 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  Packages [209 kB]
Get:8 http://archive.ubuntu.com/ubuntu xenial-backports InRelease [107 kB]
Fetched 536 kB in 4s (112 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
root@HOSTNAME:~#
```

Finally install the cuda toolkit with `~# apt install -y cuda-toolkit-10-1` command. And do not use cuda only if you knows what you are doing.

```bash
root@HOSTNAME:~# apt install -y cuda-toolkit-10-1
Reading package lists... Done
Building dependency tree
Reading state information... Done
The following additional packages will be installed:
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-tools-10-1 cuda-visual-tools-10-1 default-jre
  default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
Suggested packages:
  binutils-doc cpp-doc gcc-5-locales default-java-plugin debian-keyring g++-multilib g++-5-multilib
  gcc-5-doc libstdc++6-5-dbg gcc-multilib autoconf automake libtool flex bison gdb gcc-doc
  gcc-5-multilib libgcc1-dbg libgomp1-dbg libitm1-dbg libatomic1-dbg libasan2-dbg liblsan0-dbg
  libtsan0-dbg libubsan0-dbg libcilkrts5-dbg libmpx0-dbg libquadmath0-dbg libasound2-plugins
  alsa-utils glibc-doc cups-common librsvg2-common gvfs libice-doc liblcms2-utils pcscd pulseaudio
  lm-sensors libsm-doc libstdc++-5-doc libxcb-doc libxext-doc libxt-doc make-doc icedtea-8-plugin
  libnss-mdns fonts-ipafont-gothic fonts-ipafont-mincho fonts-wqy-microhei fonts-wqy-zenhei
  fonts-indic
The following NEW packages will be installed:
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-toolkit-10-1 cuda-tools-10-1 cuda-visual-tools-10-1
  default-jre default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
0 upgraded, 218 newly installed, 0 to remove and 0 not upgraded.
Need to get 1,690 MB/1,723 MB of archives.
After this operation, 4,543 MB of additional disk space will be used.
...
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/servertool to provide /usr/bin/servertool (servertool) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/tnameserv to provide /usr/bin/tnameserv (tnameserv) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/lib/jexec to provide /usr/bin/jexec (jexec) in auto mode
Setting up default-jre-headless (2:1.8-56ubuntu2) ...
Setting up openjdk-8-jre:amd64 (8u212-b03-0ubuntu1.16.04.1) ...
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/policytool to provide /usr/bin/policytool (policytool) in auto mode
Setting up default-jre (2:1.8-56ubuntu2) ...
Setting up cuda-nsight-10-1 (10.1.168-1) ...
Setting up cuda-nvvp-10-1 (10.1.168-1) ...
Setting up cuda-visual-tools-10-1 (10.1.168-1) ...
Setting up cuda-tools-10-1 (10.1.168-1) ...
Setting up cuda-toolkit-10-1 (10.1.168-1) ...
Processing triggers for libc-bin (2.23-0ubuntu11) ...
Processing triggers for ca-certificates (20170717~16.04.2) ...
Updating certificates in /etc/ssl/certs...
0 added, 0 removed; done.
Running hooks in /etc/ca-certificates/update.d...

done.
done.
root@HOSTNAME:~#
```

# CUDA Toolkitのインストール

このインストールの手順は公式サイトを基準で使えます。

公式サイトは[ここ](https://developer.nvidia.com/cuda-downloads)にいます。

初めての手順は`wget``wget`を使って、パケージをダウンロードをする。

```bash
root@HOSTNAME:~# wget http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
--2019-06-25 17:34:47--  http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
developer.download.nvidia.com (developer.download.nvidia.com) をDNSに問いあわせています... 192.229.232.112, 2606:2800:247:2063:46e:21d:825:102e
developer.download.nvidia.com (developer.download.nvidia.com)|192.229.232.112|:80 に接続しています... 接続しました。
HTTP による接続要求を送信しました、応答を待っています... 200 OK
長さ: 2842 (2.8K) [application/x-deb]
`cuda-repo-ubuntu1604_10.1.168-1_amd64.deb' に保存中

cuda-repo-ubuntu1604_10.1 100%[=====================================>]   2.78K  --.-KB/s    時間 0s

2019-06-25 17:34:47 (103 MB/s) - `cuda-repo-ubuntu1604_10.1.168-1_amd64.deb' へ保存完了 [2842/2842]

root@HOSTNAME:~#
```

そうしてここは公式の手順で、インストールの.debファイルを`~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb`コマンドを使う。

```bash
root@HOSTNAME:~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
(データベースを読み込んでいます ... 現在 26316 個のファイルとディレクトリがインストールされています。)
cuda-repo-ubuntu1604_10.1.168-1_amd64.deb を展開する準備をしています ...
cuda-repo-ubuntu1604 (10.1.168-1) で (10.1.168-1 に) 上書き展開しています ...
cuda-repo-ubuntu1604 (10.1.168-1) を設定しています ...

The public CUDA GPG key does not appear to be installed.
To install the key, run this command:
sudo apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub

root@HOSTNAME:~#
```

そうして、指示にはキーを対応が必要ですから`~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub`このコマンドを使って、対応する。

```bash
root@HOSTNAME:~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
Executing: /tmp/tmp.cviC1HOaoD/gpg.1.sh --fetch-keys
http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
gpg: 鍵7FA2AF80: 公開鍵"cudatools <cudatools@nvidia.com>"をインポートしました
gpg: 処理数の合計: 1
gpg:               インポート: 1  (RSA: 1)
root@HOSTNAME:~#
```

これからはレポジトリリストを更新ができます：`~# apt update`.

```bash
root@HOSTNAME:~# apt update
無視:1 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  InRelease
ヒット:2 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  Release
ヒット:3 http://security.ubuntu.com/ubuntu xenial-security InRelease
ヒット:4 http://archive.ubuntu.com/ubuntu xenial InRelease
ヒット:5 http://archive.ubuntu.com/ubuntu xenial-updates InRelease
ヒット:7 http://archive.ubuntu.com/ubuntu xenial-backports InRelease
パッケージリストを読み込んでいます... 完了
依存関係ツリーを作成しています
状態情報を読み取っています... 完了
パッケージはすべて最新です。
root@HOSTNAME:~#
```

最後は`~# apt install -y cuda-toolkit-10-1`コマンドを使って、Cuda-Toolkitをインストールする。ちなみに、cudaのコマンドを使わないでください、もしそのコマンドの動く基準がわからないなら。

```bash
root@HOSTNAME:~# apt install -y cuda-toolkit-10-1
パッケージリストを読み込んでいます... 完了
依存関係ツリーを作成しています
状態情報を読み取っています... 完了
以下の追加パッケージがインストールされます:
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-tools-10-1 cuda-visual-tools-10-1 default-jre
  default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
提案パッケージ:
  binutils-doc cpp-doc gcc-5-locales default-java-plugin debian-keyring g++-multilib g++-5-multilib
  gcc-5-doc libstdc++6-5-dbg gcc-multilib autoconf automake libtool flex bison gdb gcc-doc
  gcc-5-multilib libgcc1-dbg libgomp1-dbg libitm1-dbg libatomic1-dbg libasan2-dbg liblsan0-dbg
  libtsan0-dbg libubsan0-dbg libcilkrts5-dbg libmpx0-dbg libquadmath0-dbg libasound2-plugins
  alsa-utils glibc-doc cups-common librsvg2-common gvfs libice-doc liblcms2-utils pcscd pulseaudio
  lm-sensors libsm-doc libstdc++-5-doc libxcb-doc libxext-doc libxt-doc make-doc icedtea-8-plugin
  libnss-mdns fonts-ipafont-gothic fonts-ipafont-mincho fonts-wqy-microhei fonts-wqy-zenhei
  fonts-indic
以下のパッケージが新たにインストールされます:
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-toolkit-10-1 cuda-tools-10-1 cuda-visual-tools-10-1
  default-jre default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
アップグレード: 0 個、新規インストール: 218 個、削除: 0 個、保留: 0 個。
1,723 MB 中 1,690 MB のアーカイブを取得する必要があります。
この操作後に追加で 4,543 MB のディスク容量が消費されます。
～中略～
penjdk-amd64/jre/bin/servertool を使います
update-alternatives: /usr/bin/tnameserv (tnameserv) を提供するために自動モードで /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/tnameserv を使います
update-alternatives: /usr/bin/jexec (jexec) を提供するために自動モードで /usr/lib/jvm/java-8-openjdk-amd64/jre/lib/jexec を使います
default-jre-headless (2:1.8-56ubuntu2) を設定しています ...
openjdk-8-jre:amd64 (8u212-b03-0ubuntu1.16.04.1) を設定しています ...
update-alternatives: /usr/bin/policytool (policytool) を提供するために自動モードで /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/policytool を使います
default-jre (2:1.8-56ubuntu2) を設定しています ...
cuda-nsight-10-1 (10.1.168-1) を設定しています ...
cuda-nvvp-10-1 (10.1.168-1) を設定しています ...
cuda-visual-tools-10-1 (10.1.168-1) を設定しています ...
cuda-tools-10-1 (10.1.168-1) を設定しています ...
cuda-toolkit-10-1 (10.1.168-1) を設定しています ...
libc-bin (2.23-0ubuntu11) のトリガを処理しています ...
ureadahead (0.100.0-19.1) のトリガを処理しています ...
systemd (229-4ubuntu21.21) のトリガを処理しています ...
ca-certificates (20170717~16.04.2) のトリガを処理しています ...
Updating certificates in /etc/ssl/certs...
0 added, 0 removed; done.
Running hooks in /etc/ca-certificates/update.d...

done.
done.
root@HOSTNAME:~#
```

# CUDA Toolkit 安裝

本文件為參照官方文件進行改良後的安裝步驟。

官方網頁可由[此處](https://developer.nvidia.com/cuda-downloads)進行確認。

第一步是使用`wget`下載官方所提供的網路安裝包。(離線安裝包依然會進行連線取得所以直接採用線上安裝)

```bash
root@HOSTNAME:~# wget http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
--2019-06-25 17:43:42--  http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
正在查找主機 developer.download.nvidia.com (developer.download.nvidia.com)... 192.229.232.112, 2606:2800:247:2063:46e:21d:825:102e
正在連接 developer.download.nvidia.com (developer.download.nvidia.com)|192.229.232.112|:80... 連上了。
已送出 HTTP 要求，正在等候回應... 200 OK
長度: 2842 (2.8K) [application/x-deb]
Saving to: ‘cuda-repo-ubuntu1604_10.1.168-1_amd64.deb’

cuda-repo-ubuntu1604_10.1 100%[=====================================>]   2.78K  --.-KB/s    in 0s

2019-06-25 17:43:42 (120 MB/s) - ‘cuda-repo-ubuntu1604_10.1.168-1_amd64.deb’ saved [2842/2842]

root@HOSTNAME:~#
```

接下來要使用系統的套件管理程式進行安裝檔設定，使用`~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb`指令。

```bash
root@HOSTNAME:~# dpkg -i cuda-repo-ubuntu1604_10.1.168-1_amd64.deb
（讀取資料庫 ... 目前共安裝了 26316 個檔案和目錄。）
準備解開 cuda-repo-ubuntu1604_10.1.168-1_amd64.deb ...
Unpacking cuda-repo-ubuntu1604 (10.1.168-1) over (10.1.168-1) ...
設定 cuda-repo-ubuntu1604 (10.1.168-1) ...

The public CUDA GPG key does not appear to be installed.
To install the key, run this command:
sudo apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub

root@HOSTNAME:~#
```

根據上述指令執行結果提示，必須再下載相關RSA金鑰做檔案正確信檢查。執行：`~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub`。

```bash
root@HOSTNAME:~# apt-key adv --fetch-keys http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
Executing: /tmp/tmp.oNX8od0VoK/gpg.1.sh --fetch-keys
http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64/7fa2af80.pub
gpg: 金鑰 7FA2AF80: 公鑰 "cudatools <cudatools@nvidia.com>" 已匯入
gpg: 處理總量: 1
gpg:               已匯入: 1  (RSA: 1)
root@HOSTNAME:~#
```

接著才可以進行可安裝套件清單的更新：`~# apt update`。

```bash
root@HOSTNAME:~# apt update
略過:1 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  InRelease
已有:2 http://developer.download.nvidia.com/compute/cuda/repos/ubuntu1604/x86_64  Release
已有:3 http://security.ubuntu.com/ubuntu xenial-security InRelease
已有:4 http://archive.ubuntu.com/ubuntu xenial InRelease
已有:5 http://archive.ubuntu.com/ubuntu xenial-updates InRelease
已有:7 http://archive.ubuntu.com/ubuntu xenial-backports InRelease
正在讀取套件清單... 完成
正在重建相依關係
正在讀取狀態資料... 完成
All packages are up to date.
root@HOSTNAME:~#
```

最後即可開始安裝Cuda-Toolkit，使用`~# apt install -y cuda-toolkit-10-1`指令進行安裝。 切勿使用install cuda進行安裝，除非你能理解cuda本身包含哪些套件。

```bash
root@HOSTNAME:~# apt install -y cuda-toolkit-10-1
正在讀取套件清單... 完成
正在重建相依關係
正在讀取狀態資料... 完成
下列的額外套件將被安裝：
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-tools-10-1 cuda-visual-tools-10-1 default-jre
  default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
建議套件：
  binutils-doc cpp-doc gcc-5-locales default-java-plugin debian-keyring g++-multilib g++-5-multilib
  gcc-5-doc libstdc++6-5-dbg gcc-multilib autoconf automake libtool flex bison gdb gcc-doc
  gcc-5-multilib libgcc1-dbg libgomp1-dbg libitm1-dbg libatomic1-dbg libasan2-dbg liblsan0-dbg
  libtsan0-dbg libubsan0-dbg libcilkrts5-dbg libmpx0-dbg libquadmath0-dbg libasound2-plugins
  alsa-utils glibc-doc cups-common librsvg2-common gvfs libice-doc liblcms2-utils pcscd pulseaudio
  lm-sensors libsm-doc libstdc++-5-doc libxcb-doc libxext-doc libxt-doc make-doc icedtea-8-plugin
  libnss-mdns fonts-ipafont-gothic fonts-ipafont-mincho fonts-wqy-microhei fonts-wqy-zenhei
  fonts-indic
下列【新】套件將會被安裝：
  binutils build-essential ca-certificates-java cpp cpp-5 cuda-command-line-tools-10-1
  cuda-compiler-10-1 cuda-cudart-10-1 cuda-cudart-dev-10-1 cuda-cufft-10-1 cuda-cufft-dev-10-1
  cuda-cuobjdump-10-1 cuda-cupti-10-1 cuda-curand-10-1 cuda-curand-dev-10-1 cuda-cusolver-10-1
  cuda-cusolver-dev-10-1 cuda-cusparse-10-1 cuda-cusparse-dev-10-1 cuda-documentation-10-1
  cuda-driver-dev-10-1 cuda-gdb-10-1 cuda-gpu-library-advisor-10-1 cuda-libraries-dev-10-1
  cuda-license-10-1 cuda-memcheck-10-1 cuda-misc-headers-10-1 cuda-npp-10-1 cuda-npp-dev-10-1
  cuda-nsight-10-1 cuda-nsight-compute-10-1 cuda-nsight-systems-10-1 cuda-nvcc-10-1 cuda-nvdisasm-10-1
  cuda-nvgraph-10-1 cuda-nvgraph-dev-10-1 cuda-nvjpeg-10-1 cuda-nvjpeg-dev-10-1 cuda-nvml-dev-10-1
  cuda-nvprof-10-1 cuda-nvprune-10-1 cuda-nvrtc-10-1 cuda-nvrtc-dev-10-1 cuda-nvtx-10-1 cuda-nvvp-10-1
  cuda-samples-10-1 cuda-sanitizer-api-10-1 cuda-toolkit-10-1 cuda-tools-10-1 cuda-visual-tools-10-1
  default-jre default-jre-headless dpkg-dev fakeroot fontconfig fontconfig-config fonts-dejavu-core
  fonts-dejavu-extra freeglut3 freeglut3-dev g++ g++-5 gcc gcc-5 hicolor-icon-theme java-common
  libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libasan2 libasound2
  libasound2-data libasyncns0 libatk1.0-0 libatk1.0-data libatomic1 libavahi-client3
  libavahi-common-data libavahi-common3 libc-dev-bin libc6-dev libcairo2 libcc1-0 libcilkrts5
  libcublas-dev libcublas10 libcups2 libdatrie1 libdpkg-perl libdrm-amdgpu1 libdrm-dev libdrm-intel1
  libdrm-nouveau2 libdrm-radeon1 libfakeroot libfile-fcntllock-perl libflac8 libfontconfig1
  libgcc-5-dev libgdk-pixbuf2.0-0 libgdk-pixbuf2.0-common libgif7 libgl1-mesa-dev libgl1-mesa-dri
  libgl1-mesa-glx libglapi-mesa libglu1-mesa libglu1-mesa-dev libgomp1 libgraphite2-3 libgtk2.0-0
  libgtk2.0-bin libgtk2.0-common libharfbuzz0b libice-dev libice6 libisl15 libitm1 libjbig0
  libjpeg-turbo8 libjpeg8 liblcms2-2 libllvm6.0 liblsan0 libmpc3 libmpx0 libnspr4 libnss3
  libnss3-nssdb libogg0 libpango-1.0-0 libpangocairo-1.0-0 libpangoft2-1.0-0 libpciaccess0
  libpcsclite1 libpixman-1-0 libpthread-stubs0-dev libpulse0 libquadmath0 libsensors4 libsm-dev libsm6
  libsndfile1 libstdc++-5-dev libthai-data libthai0 libtiff5 libtsan0 libtxc-dxtn-s2tc0 libubsan0
  libvorbis0a libvorbisenc2 libx11-dev libx11-doc libx11-xcb-dev libx11-xcb1 libxau-dev libxcb-dri2-0
  libxcb-dri2-0-dev libxcb-dri3-0 libxcb-dri3-dev libxcb-glx0 libxcb-glx0-dev libxcb-present-dev
  libxcb-present0 libxcb-randr0 libxcb-randr0-dev libxcb-render0 libxcb-render0-dev libxcb-shape0
  libxcb-shape0-dev libxcb-shm0 libxcb-sync-dev libxcb-sync1 libxcb-xfixes0 libxcb-xfixes0-dev
  libxcb1-dev libxcomposite1 libxcursor1 libxdamage-dev libxdamage1 libxdmcp-dev libxext-dev
  libxfixes-dev libxfixes3 libxi-dev libxi6 libxinerama1 libxmu-dev libxmu-headers libxmu6 libxrandr2
  libxrender1 libxshmfence-dev libxshmfence1 libxt-dev libxt6 libxtst6 libxxf86vm-dev libxxf86vm1
  linux-libc-dev make manpages-dev mesa-common-dev openjdk-8-jre openjdk-8-jre-headless x11-common
  x11proto-core-dev x11proto-damage-dev x11proto-dri2-dev x11proto-fixes-dev x11proto-gl-dev
  x11proto-input-dev x11proto-kb-dev x11proto-xext-dev x11proto-xf86vidmode-dev xorg-sgml-doctools
  xtrans-dev
升級 0 個，新安裝 218 個，移除 0 個，有 0 個未被升級。
需要下載 1,723 MB 的套件檔。
此操作完成之後，會多佔用 4,543 MB 的磁碟空間。
～略～
pdate-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/unpack200 to provide /usr/bin/unpack200 (unpack200) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/orbd to provide /usr/bin/orbd (orbd) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/servertool to provide /usr/bin/servertool (servertool) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/tnameserv to provide /usr/bin/tnameserv (tnameserv) in auto mode
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/lib/jexec to provide /usr/bin/jexec (jexec) in auto mode
設定 default-jre-headless (2:1.8-56ubuntu2) ...
設定 openjdk-8-jre:amd64 (8u212-b03-0ubuntu1.16.04.1) ...
update-alternatives: using /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/policytool to provide /usr/bin/policytool (policytool) in auto mode
設定 default-jre (2:1.8-56ubuntu2) ...
設定 cuda-nsight-10-1 (10.1.168-1) ...
設定 cuda-nvvp-10-1 (10.1.168-1) ...
設定 cuda-visual-tools-10-1 (10.1.168-1) ...
設定 cuda-tools-10-1 (10.1.168-1) ...
設定 cuda-toolkit-10-1 (10.1.168-1) ...
Processing triggers for libc-bin (2.23-0ubuntu11) ...
Processing triggers for ca-certificates (20170717~16.04.2) ...
Updating certificates in /etc/ssl/certs...
0 added, 0 removed; done.
Running hooks in /etc/ca-certificates/update.d...

done.
done.
root@HOSTNAME:~# 
```
