# OpenCV Install

The project needs OpenCV as dependency library for Caffe.

As the latest OpenCV has problem to support Caffe, this project choose to use OpenCV 3.4.6, the latest version of OpenCV 3.

First download OpenCV from official Github site using `wget https://github.com/opencv/opencv/archive/3.4.6.zip` command.

```bash
root@HOSTNAME:~# wget https://github.com/opencv/opencv/archive/3.4.6.zip
--2019-06-26 10:49:58--  https://github.com/opencv/opencv/archive/3.4.6.zip
Resolving github.com (github.com)... 192.30.253.113
Connecting to github.com (github.com)|192.30.253.113|:443... connected.
HTTP request sent, awaiting response... 302 Found
Location: https://codeload.github.com/opencv/opencv/zip/3.4.6 [following]
--2019-06-26 10:49:59--  https://codeload.github.com/opencv/opencv/zip/3.4.6
Resolving codeload.github.com (codeload.github.com)... 192.30.253.120
Connecting to codeload.github.com (codeload.github.com)|192.30.253.120|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 92340400 (88M) [application/zip]
Saving to: ‘3.4.6.zip’

3.4.6.zip                 100%[=====================================>]  88.06M  1.85MB/s    in 27s

2019-06-26 10:50:27 (3.32 MB/s) - ‘3.4.6.zip’ saved [92340400/92340400]

root@HOSTNAME:~#
```

Then unzip the package. If it got command not found error, install unzip first.

`unzip 3.4.6.zip`

```bash
root@HOSTNAME:~# unzip 3.4.6.zip
The program 'unzip' is currently not installed. You can install it by typing:
apt install unzip
root@HOSTNAME:~# apt install unzip
Reading package lists... Done
Building dependency tree
Reading state information... Done
Suggested packages:
  zip
The following NEW packages will be installed:
  unzip
0 upgraded, 1 newly installed, 0 to remove and 0 not upgraded.
Need to get 158 kB of archives.
After this operation, 530 kB of additional disk space will be used.
Get:1 http://archive.ubuntu.com/ubuntu xenial/main amd64 unzip amd64 6.0-20ubuntu1 [158 kB]
Fetched 158 kB in 1s (92.2 kB/s)
Selecting previously unselected package unzip.
(Reading database ... 31533 files and directories currently installed.)
Preparing to unpack .../unzip_6.0-20ubuntu1_amd64.deb ...
Unpacking unzip (6.0-20ubuntu1) ...
Processing triggers for mime-support (3.59ubuntu1) ...
Processing triggers for man-db (2.7.5-1) ...
Setting up unzip (6.0-20ubuntu1) ...
root@HOSTNAME:~# unzip 3.4.6.zip
Archive:  3.4.6.zip
33b765d7979fd8a6038026aa44f6ff1a9c082b7b
   creating: opencv-3.4.6/
  inflating: opencv-3.4.6/.editorconfig
   creating: opencv-3.4.6/3rdparty/
   creating: opencv-3.4.6/3rdparty/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/README.md
   creating: opencv-3.4.6/3rdparty/carotene/hal/
  inflating: opencv-3.4.6/3rdparty/carotene/hal/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/hal/tegra_hal.hpp
   creating: opencv-3.4.6/3rdparty/carotene/include/
   creating: opencv-3.4.6/3rdparty/carotene/include/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/definitions.hpp
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/functions.hpp
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/types.hpp
   creating: opencv-3.4.6/3rdparty/carotene/src/
  inflating: opencv-3.4.6/3rdparty/carotene/src/absdiff.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/accumulate.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/add.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/add_weighted.cpp
...
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileMediumLarge.png
 extracting: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/LocalizedStrings.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/OpenCVXaml.csproj
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AppManifest.xml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AssemblyInfo.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/WMAppManifest.xml
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.Designer.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.resx
  inflating: opencv-3.4.6/samples/wp8/readme.txt
root@HOSTNAME:~#
```

Then follows the official to install required libraries.

```bash
~# apt install build-essential
~# apt install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
~# apt install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
```

Finally build & install.

```bash
~# cd opencv-3.4.6/
~# mkdir build
~# cd build
~# cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
-- The CXX compiler identification is GNU 5.4.0
-- The C compiler identification is GNU 5.4.0
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Performing Test HAVE_CXX11 (check file: cmake/checks/cxx11.cpp)
-- Performing Test HAVE_CXX11 - Failed
-- Found PythonInterp: /usr/bin/python2.7 (found suitable version "2.7.12", minimum required is "2.7")
-- Found PythonLibs: /usr/lib/x86_64-linux-gnu/libpython2.7.so (found suitable exact version "2.7.12")
...
-- Performing Test HAVE_C_WNO_UNDEF - Success
-- Performing Test HAVE_C_WNO_SIGN_COMPARE
-- Performing Test HAVE_C_WNO_SIGN_COMPARE - Success
-- OpenCV Python: during development append to PYTHONPATH: /root/opencv-3.4.6/build/python_loader
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL - Success
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD - Failed
--
-- General configuration for OpenCV 3.4.6 =====================================
--   Version control:               unknown
--
--   Platform:
--     Timestamp:                   2019-06-26T04:15:40Z
--     Host:                        Linux 4.4.0-18362-Microsoft x86_64
--     CMake:                       3.5.1
--     CMake generator:             Unix Makefiles
--     CMake build tool:            /usr/bin/make
--     Configuration:               Release
--
--   CPU/HW features:
--     Baseline:                    SSE SSE2 SSE3
--       requested:                 SSE3
--     Dispatched code generation:  SSE4_1 SSE4_2 FP16 AVX AVX2 AVX512_SKX
--       requested:                 SSE4_1 SSE4_2 AVX FP16 AVX2 AVX512_SKX
--       SSE4_1 (14 files):         + SSSE3 SSE4_1
--       SSE4_2 (2 files):          + SSSE3 SSE4_1 POPCNT SSE4_2
--       FP16 (1 files):            + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 AVX
--       AVX (6 files):             + SSSE3 SSE4_1 POPCNT SSE4_2 AVX
--       AVX2 (28 files):           + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2
--       AVX512_SKX (2 files):      + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2 AVX_512F AVX512_SKX
--
--   C/C++:
--     Built as dynamic libs?:      YES
--     C++ Compiler:                /usr/bin/c++  (ver 5.4.0)
--     C++ flags (Release):         -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG  -DNDEBUG
--     C++ flags (Debug):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -g  -O0 -DDEBUG -D_DEBUG
--     C Compiler:                  /usr/bin/cc
--     C flags (Release):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -O3 -DNDEBUG  -DNDEBUG
--     C flags (Debug):             -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -g  -O0 -DDEBUG -D_DEBUG
--     Linker flags (Release):      -Wl,--gc-sections
--     Linker flags (Debug):        -Wl,--gc-sections
--     ccache:                      NO
--     Precompiled headers:         YES
--     Extra dependencies:          dl m pthread rt
--     3rdparty dependencies:
--
--   OpenCV modules:
--     To be built:                 calib3d core dnn features2d flann highgui imgcodecs imgproc ml objdetect photo python2 shape stitching superres ts video videoio videostab
--     Disabled:                    world
--     Disabled by dependency:      -
--     Unavailable:                 cudaarithm cudabgsegm cudacodec cudafeatures2d cudafilters cudaimgproc cudalegacy cudaobjdetect cudaoptflow cudastereo cudawarping cudev java js python3 viz
--     Applications:                tests perf_tests apps
--     Documentation:               NO
--     Non-free algorithms:         NO
--
--   GUI:
--     GTK+:                        YES (ver 2.24.30)
--       GThread :                  YES (ver 2.48.2)
--       GtkGlExt:                  NO
--     VTK support:                 NO
--
--   Media I/O:
--     ZLib:                        /usr/lib/x86_64-linux-gnu/libz.so (ver 1.2.8)
--     JPEG:                        /usr/lib/x86_64-linux-gnu/libjpeg.so (ver 80)
--     WEBP:                        build (ver encoder: 0x020e)
--     PNG:                         /usr/lib/x86_64-linux-gnu/libpng.so (ver 1.2.54)
--     TIFF:                        /usr/lib/x86_64-linux-gnu/libtiff.so (ver 42 / 4.0.6)
--     JPEG 2000:                   /usr/lib/x86_64-linux-gnu/libjasper.so (ver 1.900.1)
--     OpenEXR:                     build (ver 1.7.1)
--     HDR:                         YES
--     SUNRASTER:                   YES
--     PXM:                         YES
--
--   Video I/O:
--     DC1394:                      YES (ver 2.2.4)
--     FFMPEG:                      YES
--       avcodec:                   YES (ver 56.60.100)
--       avformat:                  YES (ver 56.40.101)
--       avutil:                    YES (ver 54.31.100)
--       swscale:                   YES (ver 3.1.101)
--       avresample:                NO
--     GStreamer:                   NO
--     libv4l/libv4l2:              NO
--     v4l/v4l2:                    linux/videodev2.h
--
--   Parallel framework:            pthreads
--
--   Trace:                         YES (with Intel ITT)
--
--   Other third-party libraries:
--     Intel IPP:                   2019.0.0 Gold [2019.0.0]
--            at:                   /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/icv
--     Intel IPP IW:                sources (2019.0.0)
--               at:                /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/iw
--     Lapack:                      NO
--     Eigen:                       NO
--     Custom HAL:                  NO
--     Protobuf:                    build (3.5.1)
--
--   OpenCL:                        YES (no extra features)
--     Include path:                /root/opencv-3.4.6/3rdparty/include/opencl/1.2
--     Link libraries:              Dynamic load
--
--   Python 2:
--     Interpreter:                 /usr/bin/python2.7 (ver 2.7.12)
--     Libraries:                   /usr/lib/x86_64-linux-gnu/libpython2.7.so (ver 2.7.12)
--     numpy:                       /usr/lib/python2.7/dist-packages/numpy/core/include (ver 1.11.0)
--     install path:                lib/python2.7/dist-packages/cv2/python-2.7
--
--   Python (for build):            /usr/bin/python2.7
--
--   Java:
--     ant:                         NO
--     JNI:                         NO
--     Java wrappers:               NO
--     Java tests:                  NO
--
--   Install to:                    /usr/local
-- -----------------------------------------------------------------
--
-- Configuring done
-- Generating done
-- Build files have been written to: /root/opencv-3.4.6/build
~# make -j7
Scanning dependencies of target gen-pkgconfig
Scanning dependencies of target libwebp
Scanning dependencies of target ippiw
Scanning dependencies of target quirc
Scanning dependencies of target libprotobuf
Scanning dependencies of target ittnotify
Scanning dependencies of target IlmImf
[  0%] Generate opencv.pc
[  0%] Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.o
[  0%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_core.c.o
[  1%] Building C object 3rdparty/ittnotify/CMakeFiles/ittnotify.dir/src/ittnotify/ittnotify_static.c.o
[  1%] Built target gen-pkgconfig
[  1%] Building C object 3rdparty/libwebp/CMakeFiles/libwebp.dir/src/dec/alpha_dec.c.o
[  1%] Building CXX object 3rdparty/openexr/CMakeFiles/IlmImf.dir/Half/half.cpp.o
Scanning dependencies of target opencv_core_pch_dephelp
[  2%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_image.c.o
[  2%] Building CXX object 3rdparty/protobuf/CMakeFiles/libprotobuf.dir/src/google/protobuf/arena.cc.o
...
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_stitch.cpp.o
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_blenders.cuda.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_inner_functions.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_tree.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_test_calib3d
[ 99%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/traincascade.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_matchers.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.ssse3.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_1.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_warpers.cpp.o
[ 99%] Built target opencv_test_calib3d
Scanning dependencies of target opencv_python2
[ 99%] Linking CXX executable ../../bin/opencv_test_stitching
[ 99%] Building CXX object modules/python2/CMakeFiles/opencv_python2.dir/__/src2/cv2.cpp.o
[ 99%] Built target opencv_test_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_2.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_estimators.cpp.o
[ 99%] Built target opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_matchers.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_stich.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.fp16.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_perf_stitching
[ 99%] Built target opencv_perf_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx2.cpp.o
[100%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin256.avx2.cpp.o
[100%] Linking CXX executable ../../bin/opencv_test_core
[100%] Built target opencv_test_core
[100%] Linking CXX shared module ../../lib/cv2.so
[100%] Built target opencv_python2
~# make install
[  0%] Built target gen-pkgconfig
[  9%] Built target libwebp
[ 14%] Built target IlmImf
[ 16%] Built target ippiw
[ 21%] Built target libprotobuf
[ 22%] Built target quirc
[ 23%] Built target ittnotify
[ 23%] Built target opencv_core_pch_dephelp
[ 24%] Built target pch_Generate_opencv_core
[ 32%] Built target opencv_core
[ 32%] Built target opencv_perf_core_pch_dephelp
...
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface_improved.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_profileface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_silverware.xml
-- Installing: /usr/local/bin/opencv_traincascade
-- Set runtime path of "/usr/local/bin/opencv_traincascade" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_createsamples
-- Set runtime path of "/usr/local/bin/opencv_createsamples" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_annotation
-- Set runtime path of "/usr/local/bin/opencv_annotation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_visualisation
-- Set runtime path of "/usr/local/bin/opencv_visualisation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_interactive-calibration
-- Set runtime path of "/usr/local/bin/opencv_interactive-calibration" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_version
-- Set runtime path of "/usr/local/bin/opencv_version" to "/usr/local/lib"
```

# OpenCVのインストール

OpenCVはCaffeの依存ライブラリ、その為に必要です。

もし最新版のOpenCVが使えるなら、Caffeはまだサポートされていない、エラーがいっぱい出るから。今回のプロジェクトは最新版のOpenCV 3を使って、OpenCV 3.4.6を選ばれた。

最初はOpenCVの公式Githubサイトからダウンロードする、コマンド`wget https://github.com/opencv/opencv/archive/3.4.6.zip`を使います。

```bash
root@HOSTNAME:~# wget https://github.com/opencv/opencv/archive/3.4.6.zip
--2019-06-26 10:51:45--  https://github.com/opencv/opencv/archive/3.4.6.zip
github.com (github.com) をDNSに問いあわせています... 192.30.253.112
github.com (github.com)|192.30.253.112|:443 に接続しています... 接続しました。
HTTP による接続要求を送信しました、応答を待っています... 302 Found
場所: https://codeload.github.com/opencv/opencv/zip/3.4.6 [続く]
--2019-06-26 10:51:46--  https://codeload.github.com/opencv/opencv/zip/3.4.6
codeload.github.com (codeload.github.com) をDNSに問いあわせています... 140.82.114.9
codeload.github.com (codeload.github.com)|140.82.114.9|:443 に接続しています... 接続しました。
HTTP による接続要求を送信しました、応答を待っています... 200 OK
長さ: 92340400 (88M) [application/zip]
`3.4.6.zip' に保存中

3.4.6.zip                 100%[=====================================>]  88.06M  4.45MB/s    時間 26s

2019-06-26 10:52:14 (3.33 MB/s) - `3.4.6.zip' へ保存完了 [92340400/92340400]

root@HOSTNAME:~#
```

そうしてパッケージを解凍する。　もし、コマンドが見つからないのエラーが出たら、解凍のunzipコマンドを最初にインストールする。

`unzip 3.4.6.zip`

```bash
root@HOSTNAME:~# unzip 3.4.6.zip
プログラム 'unzip' はまだインストールされていません。 次のように入力することでインストールできます:
apt install unzip
root@HOSTNAME:~# apt install unzip
パッケージリストを読み込んでいます... 完了
依存関係ツリーを作成しています
状態情報を読み取っています... 完了
提案パッケージ:
  zip
以下のパッケージが新たにインストールされます:
  unzip
アップグレード: 0 個、新規インストール: 1 個、削除: 0 個、保留: 0 個。
158 kB のアーカイブを取得する必要があります。
この操作後に追加で 530 kB のディスク容量が消費されます。
取得:1 http://archive.ubuntu.com/ubuntu xenial/main amd64 unzip amd64 6.0-20ubuntu1 [158 kB]
158 kB を 2秒 で取得しました (75.5 kB/s)
以前に未選択のパッケージ unzip を選択しています。
(データベースを読み込んでいます ... 現在 31533 個のファイルとディレクトリがインストールされています。)
.../unzip_6.0-20ubuntu1_amd64.deb を展開する準備をしています ...
unzip (6.0-20ubuntu1) を展開しています...
mime-support (3.59ubuntu1) のトリガを処理しています ...
man-db (2.7.5-1) のトリガを処理しています ...
unzip (6.0-20ubuntu1) を設定しています ...
root@HOSTNAME:~# unzip 3.4.6.zip
Archive:  3.4.6.zip
33b765d7979fd8a6038026aa44f6ff1a9c082b7b
   creating: opencv-3.4.6/
  inflating: opencv-3.4.6/.editorconfig
   creating: opencv-3.4.6/3rdparty/
   creating: opencv-3.4.6/3rdparty/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/README.md
   creating: opencv-3.4.6/3rdparty/carotene/hal/
  inflating: opencv-3.4.6/3rdparty/carotene/hal/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/hal/tegra_hal.hpp
   creating: opencv-3.4.6/3rdparty/carotene/include/
   creating: opencv-3.4.6/3rdparty/carotene/include/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/definitions.hpp
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/functions.hpp
～中略～
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/AlignmentGrid.png
 extracting: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/ApplicationIcon.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Lena.png
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileLarge.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileMedium.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileMediumLarge.png
 extracting: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/LocalizedStrings.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/OpenCVXaml.csproj
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AppManifest.xml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AssemblyInfo.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/WMAppManifest.xml
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.Designer.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.resx
  inflating: opencv-3.4.6/samples/wp8/readme.txt
root@HOSTNAME:~#
```

そうして、公式手順をフォローする、依存のライブラリをインストールする。

```bash
~# apt install build-essential
~# apt install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
~# apt install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
```

最後はビルドとインストールする。

```bash
~# cd opencv-3.4.6/
~# mkdir build
~# cd build
~# cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
-- The CXX compiler identification is GNU 5.4.0
-- The C compiler identification is GNU 5.4.0
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Performing Test HAVE_CXX11 (check file: cmake/checks/cxx11.cpp)
-- Performing Test HAVE_CXX11 - Failed
-- Found PythonInterp: /usr/bin/python2.7 (found suitable version "2.7.12", minimum required is "2.7")
-- Found PythonLibs: /usr/lib/x86_64-linux-gnu/libpython2.7.so (found suitable exact version "2.7.12")
～中略～
-- Performing Test HAVE_C_WNO_UNDEF - Success
-- Performing Test HAVE_C_WNO_SIGN_COMPARE
-- Performing Test HAVE_C_WNO_SIGN_COMPARE - Success
-- OpenCV Python: during development append to PYTHONPATH: /root/opencv-3.4.6/build/python_loader
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL - Success
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD - Failed
--
-- General configuration for OpenCV 3.4.6 =====================================
--   Version control:               unknown
--
--   Platform:
--     Timestamp:                   2019-06-26T04:15:40Z
--     Host:                        Linux 4.4.0-18362-Microsoft x86_64
--     CMake:                       3.5.1
--     CMake generator:             Unix Makefiles
--     CMake build tool:            /usr/bin/make
--     Configuration:               Release
--
--   CPU/HW features:
--     Baseline:                    SSE SSE2 SSE3
--       requested:                 SSE3
--     Dispatched code generation:  SSE4_1 SSE4_2 FP16 AVX AVX2 AVX512_SKX
--       requested:                 SSE4_1 SSE4_2 AVX FP16 AVX2 AVX512_SKX
--       SSE4_1 (14 files):         + SSSE3 SSE4_1
--       SSE4_2 (2 files):          + SSSE3 SSE4_1 POPCNT SSE4_2
--       FP16 (1 files):            + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 AVX
--       AVX (6 files):             + SSSE3 SSE4_1 POPCNT SSE4_2 AVX
--       AVX2 (28 files):           + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2
--       AVX512_SKX (2 files):      + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2 AVX_512F AVX512_SKX
--
--   C/C++:
--     Built as dynamic libs?:      YES
--     C++ Compiler:                /usr/bin/c++  (ver 5.4.0)
--     C++ flags (Release):         -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG  -DNDEBUG
--     C++ flags (Debug):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -g  -O0 -DDEBUG -D_DEBUG
--     C Compiler:                  /usr/bin/cc
--     C flags (Release):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -O3 -DNDEBUG  -DNDEBUG
--     C flags (Debug):             -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -g  -O0 -DDEBUG -D_DEBUG
--     Linker flags (Release):      -Wl,--gc-sections
--     Linker flags (Debug):        -Wl,--gc-sections
--     ccache:                      NO
--     Precompiled headers:         YES
--     Extra dependencies:          dl m pthread rt
--     3rdparty dependencies:
--
--   OpenCV modules:
--     To be built:                 calib3d core dnn features2d flann highgui imgcodecs imgproc ml objdetect photo python2 shape stitching superres ts video videoio videostab
--     Disabled:                    world
--     Disabled by dependency:      -
--     Unavailable:                 cudaarithm cudabgsegm cudacodec cudafeatures2d cudafilters cudaimgproc cudalegacy cudaobjdetect cudaoptflow cudastereo cudawarping cudev java js python3 viz
--     Applications:                tests perf_tests apps
--     Documentation:               NO
--     Non-free algorithms:         NO
--
--   GUI:
--     GTK+:                        YES (ver 2.24.30)
--       GThread :                  YES (ver 2.48.2)
--       GtkGlExt:                  NO
--     VTK support:                 NO
--
--   Media I/O:
--     ZLib:                        /usr/lib/x86_64-linux-gnu/libz.so (ver 1.2.8)
--     JPEG:                        /usr/lib/x86_64-linux-gnu/libjpeg.so (ver 80)
--     WEBP:                        build (ver encoder: 0x020e)
--     PNG:                         /usr/lib/x86_64-linux-gnu/libpng.so (ver 1.2.54)
--     TIFF:                        /usr/lib/x86_64-linux-gnu/libtiff.so (ver 42 / 4.0.6)
--     JPEG 2000:                   /usr/lib/x86_64-linux-gnu/libjasper.so (ver 1.900.1)
--     OpenEXR:                     build (ver 1.7.1)
--     HDR:                         YES
--     SUNRASTER:                   YES
--     PXM:                         YES
--
--   Video I/O:
--     DC1394:                      YES (ver 2.2.4)
--     FFMPEG:                      YES
--       avcodec:                   YES (ver 56.60.100)
--       avformat:                  YES (ver 56.40.101)
--       avutil:                    YES (ver 54.31.100)
--       swscale:                   YES (ver 3.1.101)
--       avresample:                NO
--     GStreamer:                   NO
--     libv4l/libv4l2:              NO
--     v4l/v4l2:                    linux/videodev2.h
--
--   Parallel framework:            pthreads
--
--   Trace:                         YES (with Intel ITT)
--
--   Other third-party libraries:
--     Intel IPP:                   2019.0.0 Gold [2019.0.0]
--            at:                   /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/icv
--     Intel IPP IW:                sources (2019.0.0)
--               at:                /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/iw
--     Lapack:                      NO
--     Eigen:                       NO
--     Custom HAL:                  NO
--     Protobuf:                    build (3.5.1)
--
--   OpenCL:                        YES (no extra features)
--     Include path:                /root/opencv-3.4.6/3rdparty/include/opencl/1.2
--     Link libraries:              Dynamic load
--
--   Python 2:
--     Interpreter:                 /usr/bin/python2.7 (ver 2.7.12)
--     Libraries:                   /usr/lib/x86_64-linux-gnu/libpython2.7.so (ver 2.7.12)
--     numpy:                       /usr/lib/python2.7/dist-packages/numpy/core/include (ver 1.11.0)
--     install path:                lib/python2.7/dist-packages/cv2/python-2.7
--
--   Python (for build):            /usr/bin/python2.7
--
--   Java:
--     ant:                         NO
--     JNI:                         NO
--     Java wrappers:               NO
--     Java tests:                  NO
--
--   Install to:                    /usr/local
-- -----------------------------------------------------------------
--
-- Configuring done
-- Generating done
-- Build files have been written to: /root/opencv-3.4.6/build
~# make -j7
Scanning dependencies of target gen-pkgconfig
Scanning dependencies of target libwebp
Scanning dependencies of target ippiw
Scanning dependencies of target quirc
Scanning dependencies of target libprotobuf
Scanning dependencies of target ittnotify
Scanning dependencies of target IlmImf
[  0%] Generate opencv.pc
[  0%] Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.o
[  0%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_core.c.o
[  1%] Building C object 3rdparty/ittnotify/CMakeFiles/ittnotify.dir/src/ittnotify/ittnotify_static.c.o
[  1%] Built target gen-pkgconfig
[  1%] Building C object 3rdparty/libwebp/CMakeFiles/libwebp.dir/src/dec/alpha_dec.c.o
[  1%] Building CXX object 3rdparty/openexr/CMakeFiles/IlmImf.dir/Half/half.cpp.o
Scanning dependencies of target opencv_core_pch_dephelp
[  2%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_image.c.o
[  2%] Building CXX object 3rdparty/protobuf/CMakeFiles/libprotobuf.dir/src/google/protobuf/arena.cc.o
～中略～
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_stitch.cpp.o
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_blenders.cuda.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_inner_functions.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_tree.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_test_calib3d
[ 99%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/traincascade.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_matchers.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.ssse3.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_1.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_warpers.cpp.o
[ 99%] Built target opencv_test_calib3d
Scanning dependencies of target opencv_python2
[ 99%] Linking CXX executable ../../bin/opencv_test_stitching
[ 99%] Building CXX object modules/python2/CMakeFiles/opencv_python2.dir/__/src2/cv2.cpp.o
[ 99%] Built target opencv_test_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_2.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_estimators.cpp.o
[ 99%] Built target opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_matchers.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_stich.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.fp16.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_perf_stitching
[ 99%] Built target opencv_perf_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx2.cpp.o
[100%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin256.avx2.cpp.o
[100%] Linking CXX executable ../../bin/opencv_test_core
[100%] Built target opencv_test_core
[100%] Linking CXX shared module ../../lib/cv2.so
[100%] Built target opencv_python2
~# make install
[  0%] Built target gen-pkgconfig
[  9%] Built target libwebp
[ 14%] Built target IlmImf
[ 16%] Built target ippiw
[ 21%] Built target libprotobuf
[ 22%] Built target quirc
[ 23%] Built target ittnotify
[ 23%] Built target opencv_core_pch_dephelp
[ 24%] Built target pch_Generate_opencv_core
[ 32%] Built target opencv_core
[ 32%] Built target opencv_perf_core_pch_dephelp
～中略～
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface_improved.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_profileface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_silverware.xml
-- Installing: /usr/local/bin/opencv_traincascade
-- Set runtime path of "/usr/local/bin/opencv_traincascade" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_createsamples
-- Set runtime path of "/usr/local/bin/opencv_createsamples" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_annotation
-- Set runtime path of "/usr/local/bin/opencv_annotation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_visualisation
-- Set runtime path of "/usr/local/bin/opencv_visualisation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_interactive-calibration
-- Set runtime path of "/usr/local/bin/opencv_interactive-calibration" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_version
-- Set runtime path of "/usr/local/bin/opencv_version" to "/usr/local/lib"
```

# OpenCV 安裝

此專案需要OpenCV為相依性套件輔助Caffe的安裝與使用。

經測試後已知Caffe的最新版並無法支援到OpenCV4，因此建置本專案請採用OpenCV 3的最新版使用。選擇OpenCV 3.4.6。

首先要從OpenCV的官方GitHub源下載用來編譯與安裝的程式，由`wget https://github.com/opencv/opencv/archive/3.4.6.zip`指令取得。

```bash
root@HOSTNAME:~# wget https://github.com/opencv/opencv/archive/3.4.6.zip
--2019-06-26 10:53:05--  https://github.com/opencv/opencv/archive/3.4.6.zip
正在查找主機 github.com (github.com)... 192.30.253.113
正在連接 github.com (github.com)|192.30.253.113|:443... 連上了。
已送出 HTTP 要求，正在等候回應... 302 Found
位置：https://codeload.github.com/opencv/opencv/zip/3.4.6 [跟隨至新的 URL]
--2019-06-26 10:53:05--  https://codeload.github.com/opencv/opencv/zip/3.4.6
正在查找主機 codeload.github.com (codeload.github.com)... 140.82.113.10
正在連接 codeload.github.com (codeload.github.com)|140.82.113.10|:443... 連上了。
已送出 HTTP 要求，正在等候回應... 200 OK
長度: 92340400 (88M) [application/zip]
Saving to: ‘3.4.6.zip’

3.4.6.zip                 100%[=====================================>]  88.06M  2.61MB/s    in 24s

2019-06-26 10:53:30 (3.69 MB/s) - ‘3.4.6.zip’ saved [92340400/92340400]

root@HOSTNAME:~#
```

接著解壓縮下載下來的檔案。如果有遇到unzip指令找不到的錯誤時，需先安裝。

`unzip 3.4.6.zip`

```bash
root@HOSTNAME:~# unzip 3.4.6.zip
程式 'unzip' 目前尚未安裝。 您可以由輸入以下內容安裝：
apt install unzip
root@HOSTNAME:~# apt install unzip
正在讀取套件清單... 完成
正在重建相依關係
正在讀取狀態資料... 完成
建議套件：
  zip
下列【新】套件將會被安裝：
  unzip
升級 0 個，新安裝 1 個，移除 0 個，有 0 個未被升級。
需要下載 158 kB 的套件檔。
此操作完成之後，會多佔用 530 kB 的磁碟空間。
下載:1 http://archive.ubuntu.com/ubuntu xenial/main amd64 unzip amd64 6.0-20ubuntu1 [158 kB]
取得 158 kB 用了 2秒 (73.2 kB/s)
選取了原先未選的套件 unzip。
（讀取資料庫 ... 目前共安裝了 31533 個檔案和目錄。）
準備解開 .../unzip_6.0-20ubuntu1_amd64.deb ...
解開 unzip (6.0-20ubuntu1) 中...
Processing triggers for mime-support (3.59ubuntu1) ...
Processing triggers for man-db (2.7.5-1) ...
設定 unzip (6.0-20ubuntu1) ...
root@HOSTNAME:~# unzip 3.4.6.zip
Archive:  3.4.6.zip
33b765d7979fd8a6038026aa44f6ff1a9c082b7b
   creating: opencv-3.4.6/
  inflating: opencv-3.4.6/.editorconfig
   creating: opencv-3.4.6/3rdparty/
   creating: opencv-3.4.6/3rdparty/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/README.md
   creating: opencv-3.4.6/3rdparty/carotene/hal/
  inflating: opencv-3.4.6/3rdparty/carotene/hal/CMakeLists.txt
  inflating: opencv-3.4.6/3rdparty/carotene/hal/tegra_hal.hpp
   creating: opencv-3.4.6/3rdparty/carotene/include/
   creating: opencv-3.4.6/3rdparty/carotene/include/carotene/
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/definitions.hpp
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/functions.hpp
  inflating: opencv-3.4.6/3rdparty/carotene/include/carotene/types.hpp
   creating: opencv-3.4.6/3rdparty/carotene/src/
  inflating: opencv-3.4.6/3rdparty/carotene/src/absdiff.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/accumulate.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/add.cpp
  inflating: opencv-3.4.6/3rdparty/carotene/src/add_weighted.cpp
～略～
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileLarge.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileMedium.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/FlipCycleTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileMediumLarge.png
 extracting: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Assets/Tiles/IconicTileSmall.png
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/LocalizedStrings.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/MainPage.xaml.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/OpenCVXaml.csproj
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AppManifest.xml
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/AssemblyInfo.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Properties/WMAppManifest.xml
   creating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.Designer.cs
  inflating: opencv-3.4.6/samples/wp8/OpenCVXaml/OpenCVXaml/Resources/AppResources.resx
  inflating: opencv-3.4.6/samples/wp8/readme.txt
root@HOSTNAME:~#
```

接著根據官方提示，安裝所需的相依性套件。

```bash
~# apt install build-essential
~# apt install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
~# apt install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
```

最後，建置與安裝。

```bash
~# cd opencv-3.4.6/
~# mkdir build
~# cd build
~# cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
-- The CXX compiler identification is GNU 5.4.0
-- The C compiler identification is GNU 5.4.0
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Performing Test HAVE_CXX11 (check file: cmake/checks/cxx11.cpp)
-- Performing Test HAVE_CXX11 - Failed
-- Found PythonInterp: /usr/bin/python2.7 (found suitable version "2.7.12", minimum required is "2.7")
-- Found PythonLibs: /usr/lib/x86_64-linux-gnu/libpython2.7.so (found suitable exact version "2.7.12")
～略～
-- Performing Test HAVE_C_WNO_UNDEF - Success
-- Performing Test HAVE_C_WNO_SIGN_COMPARE
-- Performing Test HAVE_C_WNO_SIGN_COMPARE - Success
-- OpenCV Python: during development append to PYTHONPATH: /root/opencv-3.4.6/build/python_loader
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL
-- Performing Test HAVE_CXX_WNO_OVERLOADED_VIRTUAL - Success
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD
-- Performing Test HAVE_CXX_WNO_UNUSED_PRIVATE_FIELD - Failed
--
-- General configuration for OpenCV 3.4.6 =====================================
--   Version control:               unknown
--
--   Platform:
--     Timestamp:                   2019-06-26T04:15:40Z
--     Host:                        Linux 4.4.0-18362-Microsoft x86_64
--     CMake:                       3.5.1
--     CMake generator:             Unix Makefiles
--     CMake build tool:            /usr/bin/make
--     Configuration:               Release
--
--   CPU/HW features:
--     Baseline:                    SSE SSE2 SSE3
--       requested:                 SSE3
--     Dispatched code generation:  SSE4_1 SSE4_2 FP16 AVX AVX2 AVX512_SKX
--       requested:                 SSE4_1 SSE4_2 AVX FP16 AVX2 AVX512_SKX
--       SSE4_1 (14 files):         + SSSE3 SSE4_1
--       SSE4_2 (2 files):          + SSSE3 SSE4_1 POPCNT SSE4_2
--       FP16 (1 files):            + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 AVX
--       AVX (6 files):             + SSSE3 SSE4_1 POPCNT SSE4_2 AVX
--       AVX2 (28 files):           + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2
--       AVX512_SKX (2 files):      + SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2 AVX_512F AVX512_SKX
--
--   C/C++:
--     Built as dynamic libs?:      YES
--     C++ Compiler:                /usr/bin/c++  (ver 5.4.0)
--     C++ flags (Release):         -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG  -DNDEBUG
--     C++ flags (Debug):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -g  -O0 -DDEBUG -D_DEBUG
--     C Compiler:                  /usr/bin/cc
--     C flags (Release):           -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -O3 -DNDEBUG  -DNDEBUG
--     C flags (Debug):             -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wmissing-prototypes -Wstrict-prototypes -Wundef -Winit-self -Wpointer-arith -Wshadow -Wuninitialized -Winit-self -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -fdata-sections  -msse -msse2 -msse3 -fvisibility=hidden -g  -O0 -DDEBUG -D_DEBUG
--     Linker flags (Release):      -Wl,--gc-sections
--     Linker flags (Debug):        -Wl,--gc-sections
--     ccache:                      NO
--     Precompiled headers:         YES
--     Extra dependencies:          dl m pthread rt
--     3rdparty dependencies:
--
--   OpenCV modules:
--     To be built:                 calib3d core dnn features2d flann highgui imgcodecs imgproc ml objdetect photo python2 shape stitching superres ts video videoio videostab
--     Disabled:                    world
--     Disabled by dependency:      -
--     Unavailable:                 cudaarithm cudabgsegm cudacodec cudafeatures2d cudafilters cudaimgproc cudalegacy cudaobjdetect cudaoptflow cudastereo cudawarping cudev java js python3 viz
--     Applications:                tests perf_tests apps
--     Documentation:               NO
--     Non-free algorithms:         NO
--
--   GUI:
--     GTK+:                        YES (ver 2.24.30)
--       GThread :                  YES (ver 2.48.2)
--       GtkGlExt:                  NO
--     VTK support:                 NO
--
--   Media I/O:
--     ZLib:                        /usr/lib/x86_64-linux-gnu/libz.so (ver 1.2.8)
--     JPEG:                        /usr/lib/x86_64-linux-gnu/libjpeg.so (ver 80)
--     WEBP:                        build (ver encoder: 0x020e)
--     PNG:                         /usr/lib/x86_64-linux-gnu/libpng.so (ver 1.2.54)
--     TIFF:                        /usr/lib/x86_64-linux-gnu/libtiff.so (ver 42 / 4.0.6)
--     JPEG 2000:                   /usr/lib/x86_64-linux-gnu/libjasper.so (ver 1.900.1)
--     OpenEXR:                     build (ver 1.7.1)
--     HDR:                         YES
--     SUNRASTER:                   YES
--     PXM:                         YES
--
--   Video I/O:
--     DC1394:                      YES (ver 2.2.4)
--     FFMPEG:                      YES
--       avcodec:                   YES (ver 56.60.100)
--       avformat:                  YES (ver 56.40.101)
--       avutil:                    YES (ver 54.31.100)
--       swscale:                   YES (ver 3.1.101)
--       avresample:                NO
--     GStreamer:                   NO
--     libv4l/libv4l2:              NO
--     v4l/v4l2:                    linux/videodev2.h
--
--   Parallel framework:            pthreads
--
--   Trace:                         YES (with Intel ITT)
--
--   Other third-party libraries:
--     Intel IPP:                   2019.0.0 Gold [2019.0.0]
--            at:                   /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/icv
--     Intel IPP IW:                sources (2019.0.0)
--               at:                /root/opencv-3.4.6/build/3rdparty/ippicv/ippicv_lnx/iw
--     Lapack:                      NO
--     Eigen:                       NO
--     Custom HAL:                  NO
--     Protobuf:                    build (3.5.1)
--
--   OpenCL:                        YES (no extra features)
--     Include path:                /root/opencv-3.4.6/3rdparty/include/opencl/1.2
--     Link libraries:              Dynamic load
--
--   Python 2:
--     Interpreter:                 /usr/bin/python2.7 (ver 2.7.12)
--     Libraries:                   /usr/lib/x86_64-linux-gnu/libpython2.7.so (ver 2.7.12)
--     numpy:                       /usr/lib/python2.7/dist-packages/numpy/core/include (ver 1.11.0)
--     install path:                lib/python2.7/dist-packages/cv2/python-2.7
--
--   Python (for build):            /usr/bin/python2.7
--
--   Java:
--     ant:                         NO
--     JNI:                         NO
--     Java wrappers:               NO
--     Java tests:                  NO
--
--   Install to:                    /usr/local
-- -----------------------------------------------------------------
--
-- Configuring done
-- Generating done
-- Build files have been written to: /root/opencv-3.4.6/build
~# make -j7
Scanning dependencies of target gen-pkgconfig
Scanning dependencies of target libwebp
Scanning dependencies of target ippiw
Scanning dependencies of target quirc
Scanning dependencies of target libprotobuf
Scanning dependencies of target ittnotify
Scanning dependencies of target IlmImf
[  0%] Generate opencv.pc
[  0%] Building C object 3rdparty/quirc/CMakeFiles/quirc.dir/src/decode.c.o
[  0%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_core.c.o
[  1%] Building C object 3rdparty/ittnotify/CMakeFiles/ittnotify.dir/src/ittnotify/ittnotify_static.c.o
[  1%] Built target gen-pkgconfig
[  1%] Building C object 3rdparty/libwebp/CMakeFiles/libwebp.dir/src/dec/alpha_dec.c.o
[  1%] Building CXX object 3rdparty/openexr/CMakeFiles/IlmImf.dir/Half/half.cpp.o
Scanning dependencies of target opencv_core_pch_dephelp
[  2%] Building C object 3rdparty/ippiw/CMakeFiles/ippiw.dir/src/iw_image.c.o
[  2%] Building CXX object 3rdparty/protobuf/CMakeFiles/libprotobuf.dir/src/google/protobuf/arena.cc.o
～略～
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_stitch.cpp.o
[ 98%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_blenders.cuda.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_inner_functions.cpp.o
[ 98%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/old_ml_tree.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_test_calib3d
[ 99%] Building CXX object apps/traincascade/CMakeFiles/opencv_traincascade.dir/traincascade.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_test_stitching.dir/test/test_matchers.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.ssse3.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_1.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/opencl/perf_warpers.cpp.o
[ 99%] Built target opencv_test_calib3d
Scanning dependencies of target opencv_python2
[ 99%] Linking CXX executable ../../bin/opencv_test_stitching
[ 99%] Building CXX object modules/python2/CMakeFiles/opencv_python2.dir/__/src2/cv2.cpp.o
[ 99%] Built target opencv_test_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.sse4_2.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_estimators.cpp.o
[ 99%] Built target opencv_traincascade
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_main.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_matchers.cpp.o
[ 99%] Building CXX object modules/stitching/CMakeFiles/opencv_perf_stitching.dir/perf/perf_stich.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.fp16.cpp.o
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx.cpp.o
[ 99%] Linking CXX executable ../../bin/opencv_perf_stitching
[ 99%] Built target opencv_perf_stitching
[ 99%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin128.avx2.cpp.o
[100%] Building CXX object modules/core/CMakeFiles/opencv_test_core.dir/test/test_intrin256.avx2.cpp.o
[100%] Linking CXX executable ../../bin/opencv_test_core
[100%] Built target opencv_test_core
[100%] Linking CXX shared module ../../lib/cv2.so
[100%] Built target opencv_python2
~# make install
[  0%] Built target gen-pkgconfig
[  9%] Built target libwebp
[ 14%] Built target IlmImf
[ 16%] Built target ippiw
[ 21%] Built target libprotobuf
[ 22%] Built target quirc
[ 23%] Built target ittnotify
[ 23%] Built target opencv_core_pch_dephelp
[ 24%] Built target pch_Generate_opencv_core
[ 32%] Built target opencv_core
[ 32%] Built target opencv_perf_core_pch_dephelp
～略～
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_frontalface_improved.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_profileface.xml
-- Installing: /usr/local/share/OpenCV/lbpcascades/lbpcascade_silverware.xml
-- Installing: /usr/local/bin/opencv_traincascade
-- Set runtime path of "/usr/local/bin/opencv_traincascade" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_createsamples
-- Set runtime path of "/usr/local/bin/opencv_createsamples" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_annotation
-- Set runtime path of "/usr/local/bin/opencv_annotation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_visualisation
-- Set runtime path of "/usr/local/bin/opencv_visualisation" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_interactive-calibration
-- Set runtime path of "/usr/local/bin/opencv_interactive-calibration" to "/usr/local/lib"
-- Installing: /usr/local/bin/opencv_version
-- Set runtime path of "/usr/local/bin/opencv_version" to "/usr/local/lib"
```
