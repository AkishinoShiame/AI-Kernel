# DIGITS Install

Here's the steps to install NVidia DIGITS.

Prerequisites are Caffe, NVidia GPU Driver, which can found in previous document.

Dependencies package install.

`~# apt install --no-install-recommends git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk`

```bash
root@HOSTNAME:~# apt install --no-install-recommends git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk
Reading package lists... Done
Building dependency tree
Reading state information... Done
Suggested packages:
  git-daemon-run | git-daemon-sysvinit git-doc git-el git-email git-gui gitk gitweb git-arch git-cvs
  git-mediawiki git-svn gsfonts graphviz-doc python-flask-doc python-gevent-doc python-gevent-dbg
  python-openssl python-nose python-numpy-dbg python-numpy-doc python-pil-doc python-pil-dbg
  python-scipy-doc tix python-tk-dbg
Recommended packages:
  fonts-liberation python-pkg-resources python-blinker python-all-dev python-setuptools python-wheel
  python-imaging
The following NEW packages will be installed:
  git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy
  python-pil python-pip python-scipy python-tk
0 upgraded, 12 newly installed, 0 to remove and 0 not upgraded.
Need to get 4,940 kB/15.7 MB of archives.
After this operation, 87.4 MB of additional disk space will be used.
...
Selecting previously unselected package git.
(Reading database ... 40639 files and directories currently installed.)
Preparing to unpack .../git_1%3a2.7.4-0ubuntu1.6_amd64.deb ...
Unpacking git (1:2.7.4-0ubuntu1.6) ...
Selecting previously unselected package graphviz.
Preparing to unpack .../graphviz_2.38.0-12ubuntu2.1_amd64.deb ...
Unpacking graphviz (2.38.0-12ubuntu2.1) ...
Selecting previously unselected package python-dev.
Preparing to unpack .../python-dev_2.7.12-1~16.04_amd64.deb ...
Unpacking python-dev (2.7.12-1~16.04) ...
Selecting previously unselected package python-flask.
Preparing to unpack .../python-flask_0.10.1-2build2_all.deb ...
Unpacking python-flask (0.10.1-2build2) ...
Selecting previously unselected package python-flaskext.wtf.
Preparing to unpack .../python-flaskext.wtf_0.12-2_all.deb ...
Unpacking python-flaskext.wtf (0.12-2) ...
Selecting previously unselected package python-numpy.
Preparing to unpack .../python-numpy_1%3a1.11.0-1ubuntu1_amd64.deb ...
Unpacking python-numpy (1:1.11.0-1ubuntu1) ...
Selecting previously unselected package python-h5py.
Preparing to unpack .../python-h5py_2.6.0-1_amd64.deb ...
Unpacking python-h5py (2.6.0-1) ...
Selecting previously unselected package python-pil:amd64.
Preparing to unpack .../python-pil_3.1.2-0ubuntu1.1_amd64.deb ...
Unpacking python-pil:amd64 (3.1.2-0ubuntu1.1) ...
Selecting previously unselected package python-pip.
Preparing to unpack .../python-pip_8.1.1-2ubuntu0.4_all.deb ...
Unpacking python-pip (8.1.1-2ubuntu0.4) ...
Selecting previously unselected package python-tk.
Preparing to unpack .../python-tk_2.7.12-1~16.04_amd64.deb ...
Unpacking python-tk (2.7.12-1~16.04) ...
Selecting previously unselected package python-gevent.
Preparing to unpack .../python-gevent_1.1.0-2_amd64.deb ...
Unpacking python-gevent (1.1.0-2) ...
Selecting previously unselected package python-scipy.
Preparing to unpack .../python-scipy_0.17.0-1_amd64.deb ...
Unpacking python-scipy (0.17.0-1) ...
Processing triggers for man-db (2.7.5-1) ...
Setting up git (1:2.7.4-0ubuntu1.6) ...
Setting up graphviz (2.38.0-12ubuntu2.1) ...
Setting up python-dev (2.7.12-1~16.04) ...
Setting up python-flask (0.10.1-2build2) ...
Setting up python-flaskext.wtf (0.12-2) ...
Setting up python-numpy (1:1.11.0-1ubuntu1) ...
Setting up python-h5py (2.6.0-1) ...
Setting up python-pil:amd64 (3.1.2-0ubuntu1.1) ...
Setting up python-pip (8.1.1-2ubuntu0.4) ...
Setting up python-tk (2.7.12-1~16.04) ...
Setting up python-gevent (1.1.0-2) ...
Setting up python-scipy (0.17.0-1) ...
root@HOSTNAME:~# 
```

Download DIGITS source from Official GitHub.

`DIGITS_ROOT=~/digits`

`git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT`

```bash
root@HOSTNAME:~# DIGITS_ROOT=~/digits
root@HOSTNAME:~# git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT
Cloning into '/root/digits'...
remote: Enumerating objects: 12497, done.
remote: Total 12497 (delta 0), reused 0 (delta 0), pack-reused 12497
Receiving objects: 100% (12497/12497), 49.94 MiB | 6.46 MiB/s, done.
Resolving deltas: 100% (8139/8139), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

Install the python related package.

`~# pip2 install -r $DIGITS_ROOT/requirements.txt`

```bash
root@HOSTNAME:~# pip2 install -r $DIGITS_ROOT/requirements.txt
Collecting Pillow<=3.3.2,>3.3.1 (from -r /root/digits/requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/0d/91/14a87d2e2a988a52874c24de31d00a4634be0675a09d41da01409ecbcb48/Pillow-3.3.2.tar.gz
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 2))
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 3))
Collecting protobuf<=3.2.0,>=2.5.0 (from -r /root/digits/requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/0f/53/e43b226f83a5a542c16695e9624b7bd2bde4ad016776c7c3233901bcf5b4/protobuf-3.2.0-cp27-cp27mu-manylinux1_x86_64.whl (5.6MB)
    100% |████████████████████████████████| 5.6MB 170kB/s
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 5))
Collecting requests>=2.20.0 (from -r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/51/bd/23c926cd341ea6b7dd0b2a00aba99ae0f828be89d72b2190f27c11d4b7fb/requests-2.22.0-py2.py3-none-any.whl (57kB)
    100% |████████████████████████████████| 61kB 1.7MB/s
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 7))
Collecting gevent-websocket<=0.10.1,>=0.10 (from -r /root/digits/requirements.txt (line 8))
  Downloading https://files.pythonhosted.org/packages/98/d2/6fa19239ff1ab072af40ebf339acd91fb97f34617c2ee625b8e34bf42393/gevent-websocket-0.10.1.tar.gz
Collecting Flask>=0.12.3 (from -r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9a/74/670ae9737d14114753b8c8fdf2e8bd212a05d3b361ab15b44937dfd40985/Flask-1.0.3-py2.py3-none-any.whl (92kB)
    100% |████████████████████████████████| 92kB 2.6MB/s
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 10))
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 11))
Collecting Flask-SocketIO==2.6 (from -r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/29/ef/b00b870aabb12bea57dd655ed14fa86644cecc2674bce55c1b187a3a0384/Flask-SocketIO-2.6.tar.gz
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 13))
Collecting lmdb==0.87 (from -r /root/digits/requirements.txt (line 14))
  Downloading https://files.pythonhosted.org/packages/f7/55/5ca317c3dc33441d90b5cceeafb916f56496f0c15f310def9ea1436df607/lmdb-0.87.tar.gz (143kB)
    100% |████████████████████████████████| 153kB 2.2MB/s
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 15))
Collecting pydot<=1.0.29,>=1.0.28 (from -r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/8d/ca/bed32e7ced110aeef48a223610e57382bc52a043e14de656de98a492546c/pydot-1.0.29.tar.gz
Collecting psutil<=3.4.2,>=1.2.1 (from -r /root/digits/requirements.txt (line 17))
  Downloading https://files.pythonhosted.org/packages/7b/58/2675697b6831e6ac4b7b7bc4e5dcdb24a2f39f8411186573eb0de16eb6d5/psutil-3.4.2.tar.gz (274kB)
    100% |████████████████████████████████| 276kB 1.4MB/s
Collecting matplotlib<=1.5.2,>=1.3.1 (from -r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/d9/9a/1e7c03cc89370a798f85165800c55cc563f89b4d701c3c8322d275753230/matplotlib-1.5.2-cp27-cp27mu-manylinux1_x86_64.whl (13.7MB)
    100% |████████████████████████████████| 13.7MB 78kB/s
Collecting scikit-fmm>=0.0.9 (from -r /root/digits/requirements.txt (line 19))
  Downloading https://files.pythonhosted.org/packages/9a/a5/2bacbdbbde95598fdc36ded7968a2e590f51fcfcd81a68e5c783db131d80/scikit-fmm-2019.1.30.tar.gz (418kB)
    100% |████████████████████████████████| 419kB 1.6MB/s
Collecting python-magic>=0.2 (from -r /root/digits/requirements.txt (line 20))
  Downloading https://files.pythonhosted.org/packages/42/a1/76d30c79992e3750dac6790ce16f056f870d368ba142f83f75f694d93001/python_magic-0.4.15-py2.py3-none-any.whl
Collecting boto>=2.48.0 (from -r /root/digits/requirements.txt (line 21))
  Downloading https://files.pythonhosted.org/packages/23/10/c0b78c27298029e4454a472a1919bde20cb182dab1662cec7f2ca1dcc523/boto-2.49.0-py2.py3-none-any.whl (1.4MB)
    100% |████████████████████████████████| 1.4MB 875kB/s
Collecting urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/e6/60/247f23a7121ae632d62811ba7f273d0e58972d75e58a94d329d51550a47d/urllib3-1.25.3-py2.py3-none-any.whl (150kB)
    100% |████████████████████████████████| 153kB 3.0MB/s
Collecting certifi>=2017.4.17 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/69/1b/b853c7a9d4f6a6d00749e94eb6f3a041e342a885b87340b79c1ef73e3a78/certifi-2019.6.16-py2.py3-none-any.whl (157kB)
    100% |████████████████████████████████| 163kB 3.4MB/s
Collecting chardet<3.1.0,>=3.0.2 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/bc/a9/01ffebfb562e4274b6487b4bb1ddec7ca55ec7510b22e4c51f14098443b8/chardet-3.0.4-py2.py3-none-any.whl (133kB)
    100% |████████████████████████████████| 143kB 3.5MB/s
Collecting idna<2.9,>=2.5 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/14/2c/cd551d81dbe15200be1cf41cd03869a46fe7226e7450af7a6545bfc474c9/idna-2.8-py2.py3-none-any.whl (58kB)
    100% |████████████████████████████████| 61kB 2.2MB/s
Collecting Jinja2>=2.10 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/1d/e7/fd8b501e7a6dfe492a433deb7b9d833d39ca74916fa8bc63dd1a4947a671/Jinja2-2.10.1-py2.py3-none-any.whl (124kB)
    100% |████████████████████████████████| 133kB 5.7MB/s
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Collecting Werkzeug>=0.14 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl (327kB)
    100% |████████████████████████████████| 327kB 2.0MB/s
Collecting click>=5.1 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/fa/37/45185cb5abbc30d7257104c434fe0b07e5a195a6847506c074527aa599ec/Click-7.0-py2.py3-none-any.whl (81kB)
    100% |████████████████████████████████| 81kB 2.1MB/s
Collecting python-socketio>=1.4 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/c8/e0/a875abbb0f9d70c6e2ec2019ca9e3893377cef5deca6225ead3497000152/python_socketio-4.1.0-py2.py3-none-any.whl (46kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting python-engineio>=0.9.2 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/9c/d3/de0fa7ebebd054de308e6ac397bf9e11ea42924795a38005a21ea001b114/python_engineio-3.8.1-py2.py3-none-any.whl (119kB)
    100% |████████████████████████████████| 122kB 2.4MB/s
Collecting pyparsing==1.5.7 (from pydot<=1.0.29,>=1.0.28->-r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/6f/2c/47457771c02a8ff0f302b695e094ec309e30452232bd79198ee94fda689f/pyparsing-1.5.7.tar.gz (939kB)
    100% |████████████████████████████████| 942kB 1.2MB/s
Collecting python-dateutil (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/41/17/c62faccbfbd163c7f57f3844689e3a78bae1f403648a6afb1d0866d87fbb/python_dateutil-2.8.0-py2.py3-none-any.whl (226kB)
    100% |████████████████████████████████| 235kB 1.6MB/s
Collecting pytz (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/3d/73/fe30c2daaaa0713420d0382b16fbb761409f532c56bdcc514bf7b6262bb6/pytz-2019.1-py2.py3-none-any.whl (510kB)
    100% |████████████████████████████████| 512kB 1.4MB/s
Collecting cycler (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/f7/d2/e07d3ebb2bd7af696440ce7e754c59dd546ffe1bbe732c8ab68b9c834e61/cycler-0.10.0-py2.py3-none-any.whl
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Building wheels for collected packages: Pillow, gevent-websocket, Flask-SocketIO, lmdb, pydot, psutil, scikit-fmm, pyparsing
  Running setup.py bdist_wheel for Pillow ... done
  Stored in directory: /root/.cache/pip/wheels/24/cd/21/1037bb9cf72c80a9c74a0ca63fb496ad1b82e3718086df014a
  Running setup.py bdist_wheel for gevent-websocket ... done
  Stored in directory: /root/.cache/pip/wheels/c7/57/49/3dfd73ead67942123da1f45fb2b5db9da7704fed05b150deb2
  Running setup.py bdist_wheel for Flask-SocketIO ... done
  Stored in directory: /root/.cache/pip/wheels/f0/79/2e/bc53f94bf3859d4dff139094bed93e11da8bd7430b45791f59
  Running setup.py bdist_wheel for lmdb ... done
  Stored in directory: /root/.cache/pip/wheels/94/fc/c1/d902eb1733d13aec1dbc6df2d248c22ebaffd68c17dc1fcd97
  Running setup.py bdist_wheel for pydot ... done
  Stored in directory: /root/.cache/pip/wheels/98/1f/9a/37c7a7ccbe76edf1e9b82fa2374d2cde0c1c1a50cc3f760ab9
  Running setup.py bdist_wheel for psutil ... done
  Stored in directory: /root/.cache/pip/wheels/98/9d/92/68a90750e3190a6480baeca4aa4314c43536ec1b1b8687e283
  Running setup.py bdist_wheel for scikit-fmm ... done
  Stored in directory: /root/.cache/pip/wheels/68/5a/47/26e44146c9e341c2c9afed8559cfff05bb2fb87f7a61fc3988
  Running setup.py bdist_wheel for pyparsing ... done
  Stored in directory: /root/.cache/pip/wheels/e2/61/d6/773258a9af6e3f7ac6903c075fbeb281a7fa84619389c0a3b1
Successfully built Pillow gevent-websocket Flask-SocketIO lmdb pydot psutil scikit-fmm pyparsing
Installing collected packages: Pillow, protobuf, urllib3, certifi, chardet, idna, requests, gevent-websocket, Jinja2, Werkzeug, click, Flask, python-engineio, python-socketio, Flask-SocketIO, lmdb, pyparsing, pydot, psutil, python-dateutil, pytz, cycler, matplotlib, scikit-fmm, python-magic, boto
  Found existing installation: Pillow 3.1.2
    Not uninstalling pillow at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Jinja2 2.8
    Not uninstalling jinja2 at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Werkzeug 0.10.4
    Not uninstalling werkzeug at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Flask 0.10.1
    Not uninstalling flask at /usr/lib/python2.7/dist-packages, outside environment /usr
Successfully installed Flask-0.10.1 Flask-SocketIO-2.6 Jinja2-2.8 Pillow-3.1.2 Werkzeug-0.10.4 boto-2.49.0 certifi-2019.6.16 chardet-3.0.4 click-7.0 cycler-0.10.0 gevent-websocket-0.10.1 idna-2.8 lmdb-0.87 matplotlib-1.5.2 protobuf-3.2.0 psutil-3.4.2 pydot-1.0.29 pyparsing-1.5.7 python-dateutil-2.8.0 python-engineio-3.8.1 python-magic-0.4.15 python-socketio-4.1.0 pytz-2019.1 requests-2.22.0 scikit-fmm-2019.1.30 urllib3-1.25.3
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

Enable support for plug-ins.

`~# pip2 install -e $DIGITS_ROOT`

```bash
root@HOSTNAME:~# pip2 install -e $DIGITS_ROOT
Obtaining file:///root/digits
Requirement already satisfied (use --upgrade to upgrade): Pillow<=3.3.2,>3.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): protobuf<=3.2.0,>=2.5.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): requests>=2.20.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent-websocket<=0.10.1,>=0.10 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask>=0.12.3 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-SocketIO==2.6 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): lmdb==0.87 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pydot<=1.0.29,>=1.0.28 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): psutil<=3.4.2,>=1.2.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): matplotlib<=1.5.2,>=1.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scikit-fmm>=0.0.9 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-magic>=0.2 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): boto>=2.48.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): certifi>=2017.4.17 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): chardet<3.1.0,>=3.0.2 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): idna<2.9,>=2.5 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Jinja2>=2.10 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Werkzeug>=0.14 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): click>=5.1 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-socketio>=1.4 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-engineio>=0.9.2 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pyparsing==1.5.7 in /usr/local/lib/python2.7/dist-packages (from pydot<=1.0.29,>=1.0.28->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-dateutil in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pytz in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): cycler in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->digits===6.1.1)
Installing collected packages: digits
  Running setup.py develop for digits
Successfully installed digits
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

Finally we can execute the DIGITS server:

`~# cd $DIGITS_ROOT`

`~# ./digits-devserver`

```bash
root@HOSTNAME:~/DIGITS# ./digits-devserver
  ___ ___ ___ ___ _____ ___
 |   \_ _/ __|_ _|_   _/ __|
 | |) | | (_ || |  | | \__ \
 |___/___\___|___| |_| |___/ 6.1.1

Tensorflow support disabled.
2019-06-28 17:03:19 [INFO ] Loaded 4 jobs.
```

`=========================================Split-Line===============================================`

# DIGITSのインストール

これはNVidia DIGITSのインストール手順。

必要な条件はCaffeとNVidia GPUのドライバー、この全部は前の説明書に書いた。

依存性パッケージをインストールする。

`~# apt install --no-install-recommends git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk`

```bash
root@HOSTNAME:~# apt install --no-install-recommends git graphviz python-dev python-flask python-f
laskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk
パッケージリストを読み込んでいます... 完了
依存関係ツリーを作成しています
状態情報を読み取っています... 完了
提案パッケージ:
  git-daemon-run | git-daemon-sysvinit git-doc git-el git-email git-gui gitk gitweb git-arch git-cvs
  git-mediawiki git-svn gsfonts graphviz-doc python-flask-doc python-gevent-doc python-gevent-dbg
  python-openssl python-nose python-numpy-dbg python-numpy-doc python-pil-doc python-pil-dbg
  python-scipy-doc tix python-tk-dbg
推奨パッケージ:
  fonts-liberation python-pkg-resources python-blinker python-all-dev python-setuptools python-wheel
  python-imaging
以下のパッケージが新たにインストールされます:
  git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy
  python-pil python-pip python-scipy python-tk
アップグレード: 0 個、新規インストール: 12 個、削除: 0 個、保留: 0 個。
15.7 MB 中 4,940 kB のアーカイブを取得する必要があります。
この操作後に追加で 87.4 MB のディスク容量が消費されます。
...
以前に未選択のパッケージ python-h5py を選択しています。
.../python-h5py_2.6.0-1_amd64.deb を展開する準備をしています ...
python-h5py (2.6.0-1) を展開しています...
以前に未選択のパッケージ python-pil:amd64 を選択しています。
.../python-pil_3.1.2-0ubuntu1.1_amd64.deb を展開する準備をしています ...
python-pil:amd64 (3.1.2-0ubuntu1.1) を展開しています...
以前に未選択のパッケージ python-pip を選択しています。
.../python-pip_8.1.1-2ubuntu0.4_all.deb を展開する準備をしています ...
python-pip (8.1.1-2ubuntu0.4) を展開しています...
以前に未選択のパッケージ python-tk を選択しています。
.../python-tk_2.7.12-1~16.04_amd64.deb を展開する準備をしています ...
python-tk (2.7.12-1~16.04) を展開しています...
以前に未選択のパッケージ python-gevent を選択しています。
.../python-gevent_1.1.0-2_amd64.deb を展開する準備をしています ...
python-gevent (1.1.0-2) を展開しています...
以前に未選択のパッケージ python-scipy を選択しています。
.../python-scipy_0.17.0-1_amd64.deb を展開する準備をしています ...
python-scipy (0.17.0-1) を展開しています...
man-db (2.7.5-1) のトリガを処理しています ...
git (1:2.7.4-0ubuntu1.6) を設定しています ...
graphviz (2.38.0-12ubuntu2.1) を設定しています ...
python-dev (2.7.12-1~16.04) を設定しています ...
python-flask (0.10.1-2build2) を設定しています ...
python-flaskext.wtf (0.12-2) を設定しています ...
python-numpy (1:1.11.0-1ubuntu1) を設定しています ...
python-h5py (2.6.0-1) を設定しています ...
python-pil:amd64 (3.1.2-0ubuntu1.1) を設定しています ...
python-pip (8.1.1-2ubuntu0.4) を設定しています ...
python-tk (2.7.12-1~16.04) を設定しています ...
python-gevent (1.1.0-2) を設定しています ...
python-scipy (0.17.0-1) を設定しています ...
root@HOSTNAME:~#
```

DIGITSソースコードを公式のGitHubからダウンロードする。

`DIGITS_ROOT=~/digits`

`git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT`

```bash
root@HOSTNAME:~# DIGITS_ROOT=~/digits
root@HOSTNAME:~# git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT
Cloning into '/root/digits'...
remote: Enumerating objects: 12497, done.
remote: Total 12497 (delta 0), reused 0 (delta 0), pack-reused 12497
Receiving objects: 100% (12497/12497), 49.94 MiB | 6.46 MiB/s, done.
Resolving deltas: 100% (8139/8139), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

関係なPythonパッケージをインストールする。

`~# pip2 install -r $DIGITS_ROOT/requirements.txt`

```bash
root@HOSTNAME:~# pip2 install -r $DIGITS_ROOT/requirements.txt
Collecting Pillow<=3.3.2,>3.3.1 (from -r /root/digits/requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/0d/91/14a87d2e2a988a52874c24de31d00a4634be0675a09d41da01409ecbcb48/Pillow-3.3.2.tar.gz
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 2))
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 3))
Collecting protobuf<=3.2.0,>=2.5.0 (from -r /root/digits/requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/0f/53/e43b226f83a5a542c16695e9624b7bd2bde4ad016776c7c3233901bcf5b4/protobuf-3.2.0-cp27-cp27mu-manylinux1_x86_64.whl (5.6MB)
    100% |████████████████████████████████| 5.6MB 170kB/s
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 5))
Collecting requests>=2.20.0 (from -r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/51/bd/23c926cd341ea6b7dd0b2a00aba99ae0f828be89d72b2190f27c11d4b7fb/requests-2.22.0-py2.py3-none-any.whl (57kB)
    100% |████████████████████████████████| 61kB 1.7MB/s
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 7))
Collecting gevent-websocket<=0.10.1,>=0.10 (from -r /root/digits/requirements.txt (line 8))
  Downloading https://files.pythonhosted.org/packages/98/d2/6fa19239ff1ab072af40ebf339acd91fb97f34617c2ee625b8e34bf42393/gevent-websocket-0.10.1.tar.gz
Collecting Flask>=0.12.3 (from -r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9a/74/670ae9737d14114753b8c8fdf2e8bd212a05d3b361ab15b44937dfd40985/Flask-1.0.3-py2.py3-none-any.whl (92kB)
    100% |████████████████████████████████| 92kB 2.6MB/s
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 10))
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 11))
Collecting Flask-SocketIO==2.6 (from -r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/29/ef/b00b870aabb12bea57dd655ed14fa86644cecc2674bce55c1b187a3a0384/Flask-SocketIO-2.6.tar.gz
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 13))
Collecting lmdb==0.87 (from -r /root/digits/requirements.txt (line 14))
  Downloading https://files.pythonhosted.org/packages/f7/55/5ca317c3dc33441d90b5cceeafb916f56496f0c15f310def9ea1436df607/lmdb-0.87.tar.gz (143kB)
    100% |████████████████████████████████| 153kB 2.2MB/s
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 15))
Collecting pydot<=1.0.29,>=1.0.28 (from -r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/8d/ca/bed32e7ced110aeef48a223610e57382bc52a043e14de656de98a492546c/pydot-1.0.29.tar.gz
Collecting psutil<=3.4.2,>=1.2.1 (from -r /root/digits/requirements.txt (line 17))
  Downloading https://files.pythonhosted.org/packages/7b/58/2675697b6831e6ac4b7b7bc4e5dcdb24a2f39f8411186573eb0de16eb6d5/psutil-3.4.2.tar.gz (274kB)
    100% |████████████████████████████████| 276kB 1.4MB/s
Collecting matplotlib<=1.5.2,>=1.3.1 (from -r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/d9/9a/1e7c03cc89370a798f85165800c55cc563f89b4d701c3c8322d275753230/matplotlib-1.5.2-cp27-cp27mu-manylinux1_x86_64.whl (13.7MB)
    100% |████████████████████████████████| 13.7MB 78kB/s
Collecting scikit-fmm>=0.0.9 (from -r /root/digits/requirements.txt (line 19))
  Downloading https://files.pythonhosted.org/packages/9a/a5/2bacbdbbde95598fdc36ded7968a2e590f51fcfcd81a68e5c783db131d80/scikit-fmm-2019.1.30.tar.gz (418kB)
    100% |████████████████████████████████| 419kB 1.6MB/s
Collecting python-magic>=0.2 (from -r /root/digits/requirements.txt (line 20))
  Downloading https://files.pythonhosted.org/packages/42/a1/76d30c79992e3750dac6790ce16f056f870d368ba142f83f75f694d93001/python_magic-0.4.15-py2.py3-none-any.whl
Collecting boto>=2.48.0 (from -r /root/digits/requirements.txt (line 21))
  Downloading https://files.pythonhosted.org/packages/23/10/c0b78c27298029e4454a472a1919bde20cb182dab1662cec7f2ca1dcc523/boto-2.49.0-py2.py3-none-any.whl (1.4MB)
    100% |████████████████████████████████| 1.4MB 875kB/s
Collecting urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/e6/60/247f23a7121ae632d62811ba7f273d0e58972d75e58a94d329d51550a47d/urllib3-1.25.3-py2.py3-none-any.whl (150kB)
    100% |████████████████████████████████| 153kB 3.0MB/s
Collecting certifi>=2017.4.17 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/69/1b/b853c7a9d4f6a6d00749e94eb6f3a041e342a885b87340b79c1ef73e3a78/certifi-2019.6.16-py2.py3-none-any.whl (157kB)
    100% |████████████████████████████████| 163kB 3.4MB/s
Collecting chardet<3.1.0,>=3.0.2 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/bc/a9/01ffebfb562e4274b6487b4bb1ddec7ca55ec7510b22e4c51f14098443b8/chardet-3.0.4-py2.py3-none-any.whl (133kB)
    100% |████████████████████████████████| 143kB 3.5MB/s
Collecting idna<2.9,>=2.5 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/14/2c/cd551d81dbe15200be1cf41cd03869a46fe7226e7450af7a6545bfc474c9/idna-2.8-py2.py3-none-any.whl (58kB)
    100% |████████████████████████████████| 61kB 2.2MB/s
Collecting Jinja2>=2.10 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/1d/e7/fd8b501e7a6dfe492a433deb7b9d833d39ca74916fa8bc63dd1a4947a671/Jinja2-2.10.1-py2.py3-none-any.whl (124kB)
    100% |████████████████████████████████| 133kB 5.7MB/s
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Collecting Werkzeug>=0.14 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl (327kB)
    100% |████████████████████████████████| 327kB 2.0MB/s
Collecting click>=5.1 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/fa/37/45185cb5abbc30d7257104c434fe0b07e5a195a6847506c074527aa599ec/Click-7.0-py2.py3-none-any.whl (81kB)
    100% |████████████████████████████████| 81kB 2.1MB/s
Collecting python-socketio>=1.4 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/c8/e0/a875abbb0f9d70c6e2ec2019ca9e3893377cef5deca6225ead3497000152/python_socketio-4.1.0-py2.py3-none-any.whl (46kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting python-engineio>=0.9.2 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/9c/d3/de0fa7ebebd054de308e6ac397bf9e11ea42924795a38005a21ea001b114/python_engineio-3.8.1-py2.py3-none-any.whl (119kB)
    100% |████████████████████████████████| 122kB 2.4MB/s
Collecting pyparsing==1.5.7 (from pydot<=1.0.29,>=1.0.28->-r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/6f/2c/47457771c02a8ff0f302b695e094ec309e30452232bd79198ee94fda689f/pyparsing-1.5.7.tar.gz (939kB)
    100% |████████████████████████████████| 942kB 1.2MB/s
Collecting python-dateutil (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/41/17/c62faccbfbd163c7f57f3844689e3a78bae1f403648a6afb1d0866d87fbb/python_dateutil-2.8.0-py2.py3-none-any.whl (226kB)
    100% |████████████████████████████████| 235kB 1.6MB/s
Collecting pytz (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/3d/73/fe30c2daaaa0713420d0382b16fbb761409f532c56bdcc514bf7b6262bb6/pytz-2019.1-py2.py3-none-any.whl (510kB)
    100% |████████████████████████████████| 512kB 1.4MB/s
Collecting cycler (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/f7/d2/e07d3ebb2bd7af696440ce7e754c59dd546ffe1bbe732c8ab68b9c834e61/cycler-0.10.0-py2.py3-none-any.whl
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Building wheels for collected packages: Pillow, gevent-websocket, Flask-SocketIO, lmdb, pydot, psutil, scikit-fmm, pyparsing
  Running setup.py bdist_wheel for Pillow ... done
  Stored in directory: /root/.cache/pip/wheels/24/cd/21/1037bb9cf72c80a9c74a0ca63fb496ad1b82e3718086df014a
  Running setup.py bdist_wheel for gevent-websocket ... done
  Stored in directory: /root/.cache/pip/wheels/c7/57/49/3dfd73ead67942123da1f45fb2b5db9da7704fed05b150deb2
  Running setup.py bdist_wheel for Flask-SocketIO ... done
  Stored in directory: /root/.cache/pip/wheels/f0/79/2e/bc53f94bf3859d4dff139094bed93e11da8bd7430b45791f59
  Running setup.py bdist_wheel for lmdb ... done
  Stored in directory: /root/.cache/pip/wheels/94/fc/c1/d902eb1733d13aec1dbc6df2d248c22ebaffd68c17dc1fcd97
  Running setup.py bdist_wheel for pydot ... done
  Stored in directory: /root/.cache/pip/wheels/98/1f/9a/37c7a7ccbe76edf1e9b82fa2374d2cde0c1c1a50cc3f760ab9
  Running setup.py bdist_wheel for psutil ... done
  Stored in directory: /root/.cache/pip/wheels/98/9d/92/68a90750e3190a6480baeca4aa4314c43536ec1b1b8687e283
  Running setup.py bdist_wheel for scikit-fmm ... done
  Stored in directory: /root/.cache/pip/wheels/68/5a/47/26e44146c9e341c2c9afed8559cfff05bb2fb87f7a61fc3988
  Running setup.py bdist_wheel for pyparsing ... done
  Stored in directory: /root/.cache/pip/wheels/e2/61/d6/773258a9af6e3f7ac6903c075fbeb281a7fa84619389c0a3b1
Successfully built Pillow gevent-websocket Flask-SocketIO lmdb pydot psutil scikit-fmm pyparsing
Installing collected packages: Pillow, protobuf, urllib3, certifi, chardet, idna, requests, gevent-websocket, Jinja2, Werkzeug, click, Flask, python-engineio, python-socketio, Flask-SocketIO, lmdb, pyparsing, pydot, psutil, python-dateutil, pytz, cycler, matplotlib, scikit-fmm, python-magic, boto
  Found existing installation: Pillow 3.1.2
    Not uninstalling pillow at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Jinja2 2.8
    Not uninstalling jinja2 at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Werkzeug 0.10.4
    Not uninstalling werkzeug at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Flask 0.10.1
    Not uninstalling flask at /usr/lib/python2.7/dist-packages, outside environment /usr
Successfully installed Flask-0.10.1 Flask-SocketIO-2.6 Jinja2-2.8 Pillow-3.1.2 Werkzeug-0.10.4 boto-2.49.0 certifi-2019.6.16 chardet-3.0.4 click-7.0 cycler-0.10.0 gevent-websocket-0.10.1 idna-2.8 lmdb-0.87 matplotlib-1.5.2 protobuf-3.2.0 psutil-3.4.2 pydot-1.0.29 pyparsing-1.5.7 python-dateutil-2.8.0 python-engineio-3.8.1 python-magic-0.4.15 python-socketio-4.1.0 pytz-2019.1 requests-2.22.0 scikit-fmm-2019.1.30 urllib3-1.25.3
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

プラグインをサポート為のインストール。

`~# pip2 install -e $DIGITS_ROOT`

```bash
root@HOSTNAME:~# pip2 install -e $DIGITS_ROOT
Obtaining file:///root/digits
Requirement already satisfied (use --upgrade to upgrade): Pillow<=3.3.2,>3.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): protobuf<=3.2.0,>=2.5.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): requests>=2.20.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent-websocket<=0.10.1,>=0.10 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask>=0.12.3 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-SocketIO==2.6 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): lmdb==0.87 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pydot<=1.0.29,>=1.0.28 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): psutil<=3.4.2,>=1.2.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): matplotlib<=1.5.2,>=1.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scikit-fmm>=0.0.9 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-magic>=0.2 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): boto>=2.48.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): certifi>=2017.4.17 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): chardet<3.1.0,>=3.0.2 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): idna<2.9,>=2.5 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Jinja2>=2.10 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Werkzeug>=0.14 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): click>=5.1 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-socketio>=1.4 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-engineio>=0.9.2 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pyparsing==1.5.7 in /usr/local/lib/python2.7/dist-packages (from pydot<=1.0.29,>=1.0.28->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-dateutil in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pytz in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): cycler in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->digits===6.1.1)
Installing collected packages: digits
  Running setup.py develop for digits
Successfully installed digits
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

最後はDIGITSのサーバーサービスが実行できる。

`~# cd $DIGITS_ROOT`

`~# ./digits-devserver`

```bash
root@HOSTNAME:~/DIGITS# ./digits-devserver
  ___ ___ ___ ___ _____ ___
 |   \_ _/ __|_ _|_   _/ __|
 | |) | | (_ || |  | | \__ \
 |___/___\___|___| |_| |___/ 6.1.1

Tensorflow support disabled.
2019-06-28 17:03:19 [INFO ] Loaded 4 jobs.
```

`=========================================キリカエ-セン===============================================`

# DIGITS 安裝

這是安裝NVidia DIGITS的步驟：

前置作業是需要安裝Caffe與NVidia的顯卡驅動。這些可由前面的說明文件裡確認。

安裝相依套件：

`~# apt install --no-install-recommends git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk`

```bash
root@HOSTNAME:~# apt install --no-install-recommends git graphviz python-dev python-flask python-flaskext.wtf python-gevent python-h5py python-numpy python-pil python-pip python-scipy python-tk
正在讀取套件清單... 完成
正在重建相依關係
正在讀取狀態資料... 完成
python-numpy is already the newest version (1:1.11.0-1ubuntu1).
git is already the newest version (1:2.7.4-0ubuntu1.6).
python-dev is already the newest version (2.7.12-1~16.04).
下列的額外套件將被安裝：
  blt libaec0 libcdt5 libcgraph6 libgd3 libgvc6 libgvpr2 libhdf5-10 libjs-jquery liblcms2-2 libltdl7
  libpathplan4 libsz2 libtcl8.6 libtk8.6 libwebpmux1 libxaw7 libxmu6 libxpm4 libxss1 libxt6
  python-decorator python-greenlet python-itsdangerous python-jinja2 python-markupsafe python-pip-whl
  python-six python-werkzeug python-wtforms tk8.6-blt2.5
建議套件：
  blt-demo gsfonts graphviz-doc libgd-tools liblcms2-utils tcl8.6 tk8.6 python-flask-doc
  python-gevent-doc python-gevent-dbg python-openssl python-greenlet-doc python-greenlet-dev
  python-greenlet-dbg python-jinja2-doc python-pil-doc python-pil-dbg python-scipy-doc tix
  python-tk-dbg ipython python-genshi python-pkg-resources python-lxml python-redis python-pylibmc
  | python-memcache python-werkzeug-doc python-sqlalchemy python-django python-django-localflavor
推薦套件：
  fonts-liberation javascript-common python-pkg-resources python-blinker python-all-dev
  python-setuptools python-wheel python-imaging python-openssl python-pyinotify
下列【新】套件將會被安裝：
  blt graphviz libaec0 libcdt5 libcgraph6 libgd3 libgvc6 libgvpr2 libhdf5-10 libjs-jquery liblcms2-2
  libltdl7 libpathplan4 libsz2 libtcl8.6 libtk8.6 libwebpmux1 libxaw7 libxmu6 libxpm4 libxss1 libxt6
  python-decorator python-flask python-flaskext.wtf python-gevent python-greenlet python-h5py
  python-itsdangerous python-jinja2 python-markupsafe python-pil python-pip python-pip-whl
  python-scipy python-six python-tk python-werkzeug python-wtforms tk8.6-blt2.5
升級 0 個，新安裝 40 個，移除 0 個，有 0 個未被升級。
需要下載 17.2 MB 的套件檔。
此操作完成之後，會多佔用 74.7 MB 的磁碟空間。
是否繼續進行 [Y/n]？ [Y/n] Y
...
Processing triggers for man-db (2.7.5-1) ...
設定 libxss1:amd64 (1:1.2.2-1) ...
設定 libtcl8.6:amd64 (8.6.5+dfsg-2) ...
設定 libtk8.6:amd64 (8.6.5-1) ...
設定 tk8.6-blt2.5 (2.5.3+dfsg-3) ...
設定 blt (2.5.3+dfsg-3) ...
設定 libcdt5 (2.38.0-12ubuntu2.1) ...
設定 libcgraph6 (2.38.0-12ubuntu2.1) ...
設定 libxpm4:amd64 (1:3.5.11-1ubuntu0.16.04.1) ...
設定 libgd3:amd64 (2.1.1-4ubuntu0.16.04.11) ...
設定 libltdl7:amd64 (2.4.6-0.1) ...
設定 libpathplan4 (2.38.0-12ubuntu2.1) ...
設定 libgvc6 (2.38.0-12ubuntu2.1) ...
設定 libgvpr2 (2.38.0-12ubuntu2.1) ...
設定 libxt6:amd64 (1:1.1.5-0ubuntu1) ...
設定 libxmu6:amd64 (2:1.1.2-2) ...
設定 libxaw7:amd64 (2:1.0.13-1) ...
設定 graphviz (2.38.0-12ubuntu2.1) ...
設定 libaec0:amd64 (0.3.2-1) ...
設定 libsz2:amd64 (0.3.2-1) ...
設定 libhdf5-10:amd64 (1.8.16+docs-4ubuntu1.1) ...
設定 libjs-jquery (1.11.3+dfsg-4) ...
設定 liblcms2-2:amd64 (2.6-3ubuntu2.1) ...
設定 python-decorator (4.0.6-1) ...
設定 python-itsdangerous (0.24+dfsg1-1) ...
設定 python-markupsafe (0.23-2build2) ...
設定 python-jinja2 (2.8-1ubuntu0.1) ...
設定 python-werkzeug (0.10.4+dfsg1-1ubuntu1.1) ...
設定 python-flask (0.10.1-2build2) ...
設定 python-wtforms (2.1-1) ...
設定 python-flaskext.wtf (0.12-2) ...
設定 python-six (1.10.0-3) ...
設定 python-h5py (2.6.0-1) ...
設定 libwebpmux1:amd64 (0.4.4-1) ...
設定 python-pil:amd64 (3.1.2-0ubuntu1.1) ...
設定 python-pip-whl (8.1.1-2ubuntu0.4) ...
設定 python-pip (8.1.1-2ubuntu0.4) ...
設定 python-tk (2.7.12-1~16.04) ...
設定 python-greenlet (0.4.9-2fakesync1) ...
設定 python-gevent (1.1.0-2) ...
設定 python-scipy (0.17.0-1) ...
Processing triggers for libc-bin (2.23-0ubuntu11) ...
root@HOSTNAME:~#
```

從官方的GitHub源下載DIGITS的原始程式碼：

`DIGITS_ROOT=~/digits`

`git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT`

```bash
root@HOSTNAME:~# DIGITS_ROOT=~/digits
root@HOSTNAME:~# git clone https://github.com/NVIDIA/DIGITS.git $DIGITS_ROOT
Cloning into '/root/digits'...
remote: Enumerating objects: 12497, done.
remote: Total 12497 (delta 0), reused 0 (delta 0), pack-reused 12497
Receiving objects: 100% (12497/12497), 49.94 MiB | 6.46 MiB/s, done.
Resolving deltas: 100% (8139/8139), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

安裝Python相依與需要的套件。

`~# pip2 install -r $DIGITS_ROOT/requirements.txt`

```bash
root@HOSTNAME:~# pip2 install -r $DIGITS_ROOT/requirements.txt
Collecting Pillow<=3.3.2,>3.3.1 (from -r /root/digits/requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/0d/91/14a87d2e2a988a52874c24de31d00a4634be0675a09d41da01409ecbcb48/Pillow-3.3.2.tar.gz
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 2))
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 3))
Collecting protobuf<=3.2.0,>=2.5.0 (from -r /root/digits/requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/0f/53/e43b226f83a5a542c16695e9624b7bd2bde4ad016776c7c3233901bcf5b4/protobuf-3.2.0-cp27-cp27mu-manylinux1_x86_64.whl (5.6MB)
    100% |████████████████████████████████| 5.6MB 170kB/s
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 5))
Collecting requests>=2.20.0 (from -r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/51/bd/23c926cd341ea6b7dd0b2a00aba99ae0f828be89d72b2190f27c11d4b7fb/requests-2.22.0-py2.py3-none-any.whl (57kB)
    100% |████████████████████████████████| 61kB 1.7MB/s
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 7))
Collecting gevent-websocket<=0.10.1,>=0.10 (from -r /root/digits/requirements.txt (line 8))
  Downloading https://files.pythonhosted.org/packages/98/d2/6fa19239ff1ab072af40ebf339acd91fb97f34617c2ee625b8e34bf42393/gevent-websocket-0.10.1.tar.gz
Collecting Flask>=0.12.3 (from -r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9a/74/670ae9737d14114753b8c8fdf2e8bd212a05d3b361ab15b44937dfd40985/Flask-1.0.3-py2.py3-none-any.whl (92kB)
    100% |████████████████████████████████| 92kB 2.6MB/s
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 10))
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 11))
Collecting Flask-SocketIO==2.6 (from -r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/29/ef/b00b870aabb12bea57dd655ed14fa86644cecc2674bce55c1b187a3a0384/Flask-SocketIO-2.6.tar.gz
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 13))
Collecting lmdb==0.87 (from -r /root/digits/requirements.txt (line 14))
  Downloading https://files.pythonhosted.org/packages/f7/55/5ca317c3dc33441d90b5cceeafb916f56496f0c15f310def9ea1436df607/lmdb-0.87.tar.gz (143kB)
    100% |████████████████████████████████| 153kB 2.2MB/s
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from -r /root/digits/requirements.txt (line 15))
Collecting pydot<=1.0.29,>=1.0.28 (from -r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/8d/ca/bed32e7ced110aeef48a223610e57382bc52a043e14de656de98a492546c/pydot-1.0.29.tar.gz
Collecting psutil<=3.4.2,>=1.2.1 (from -r /root/digits/requirements.txt (line 17))
  Downloading https://files.pythonhosted.org/packages/7b/58/2675697b6831e6ac4b7b7bc4e5dcdb24a2f39f8411186573eb0de16eb6d5/psutil-3.4.2.tar.gz (274kB)
    100% |████████████████████████████████| 276kB 1.4MB/s
Collecting matplotlib<=1.5.2,>=1.3.1 (from -r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/d9/9a/1e7c03cc89370a798f85165800c55cc563f89b4d701c3c8322d275753230/matplotlib-1.5.2-cp27-cp27mu-manylinux1_x86_64.whl (13.7MB)
    100% |████████████████████████████████| 13.7MB 78kB/s
Collecting scikit-fmm>=0.0.9 (from -r /root/digits/requirements.txt (line 19))
  Downloading https://files.pythonhosted.org/packages/9a/a5/2bacbdbbde95598fdc36ded7968a2e590f51fcfcd81a68e5c783db131d80/scikit-fmm-2019.1.30.tar.gz (418kB)
    100% |████████████████████████████████| 419kB 1.6MB/s
Collecting python-magic>=0.2 (from -r /root/digits/requirements.txt (line 20))
  Downloading https://files.pythonhosted.org/packages/42/a1/76d30c79992e3750dac6790ce16f056f870d368ba142f83f75f694d93001/python_magic-0.4.15-py2.py3-none-any.whl
Collecting boto>=2.48.0 (from -r /root/digits/requirements.txt (line 21))
  Downloading https://files.pythonhosted.org/packages/23/10/c0b78c27298029e4454a472a1919bde20cb182dab1662cec7f2ca1dcc523/boto-2.49.0-py2.py3-none-any.whl (1.4MB)
    100% |████████████████████████████████| 1.4MB 875kB/s
Collecting urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/e6/60/247f23a7121ae632d62811ba7f273d0e58972d75e58a94d329d51550a47d/urllib3-1.25.3-py2.py3-none-any.whl (150kB)
    100% |████████████████████████████████| 153kB 3.0MB/s
Collecting certifi>=2017.4.17 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/69/1b/b853c7a9d4f6a6d00749e94eb6f3a041e342a885b87340b79c1ef73e3a78/certifi-2019.6.16-py2.py3-none-any.whl (157kB)
    100% |████████████████████████████████| 163kB 3.4MB/s
Collecting chardet<3.1.0,>=3.0.2 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/bc/a9/01ffebfb562e4274b6487b4bb1ddec7ca55ec7510b22e4c51f14098443b8/chardet-3.0.4-py2.py3-none-any.whl (133kB)
    100% |████████████████████████████████| 143kB 3.5MB/s
Collecting idna<2.9,>=2.5 (from requests>=2.20.0->-r /root/digits/requirements.txt (line 6))
  Downloading https://files.pythonhosted.org/packages/14/2c/cd551d81dbe15200be1cf41cd03869a46fe7226e7450af7a6545bfc474c9/idna-2.8-py2.py3-none-any.whl (58kB)
    100% |████████████████████████████████| 61kB 2.2MB/s
Collecting Jinja2>=2.10 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/1d/e7/fd8b501e7a6dfe492a433deb7b9d833d39ca74916fa8bc63dd1a4947a671/Jinja2-2.10.1-py2.py3-none-any.whl (124kB)
    100% |████████████████████████████████| 133kB 5.7MB/s
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Collecting Werkzeug>=0.14 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl (327kB)
    100% |████████████████████████████████| 327kB 2.0MB/s
Collecting click>=5.1 (from Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
  Downloading https://files.pythonhosted.org/packages/fa/37/45185cb5abbc30d7257104c434fe0b07e5a195a6847506c074527aa599ec/Click-7.0-py2.py3-none-any.whl (81kB)
    100% |████████████████████████████████| 81kB 2.1MB/s
Collecting python-socketio>=1.4 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/c8/e0/a875abbb0f9d70c6e2ec2019ca9e3893377cef5deca6225ead3497000152/python_socketio-4.1.0-py2.py3-none-any.whl (46kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting python-engineio>=0.9.2 (from Flask-SocketIO==2.6->-r /root/digits/requirements.txt (line 12))
  Downloading https://files.pythonhosted.org/packages/9c/d3/de0fa7ebebd054de308e6ac397bf9e11ea42924795a38005a21ea001b114/python_engineio-3.8.1-py2.py3-none-any.whl (119kB)
    100% |████████████████████████████████| 122kB 2.4MB/s
Collecting pyparsing==1.5.7 (from pydot<=1.0.29,>=1.0.28->-r /root/digits/requirements.txt (line 16))
  Downloading https://files.pythonhosted.org/packages/6f/2c/47457771c02a8ff0f302b695e094ec309e30452232bd79198ee94fda689f/pyparsing-1.5.7.tar.gz (939kB)
    100% |████████████████████████████████| 942kB 1.2MB/s
Collecting python-dateutil (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/41/17/c62faccbfbd163c7f57f3844689e3a78bae1f403648a6afb1d0866d87fbb/python_dateutil-2.8.0-py2.py3-none-any.whl (226kB)
    100% |████████████████████████████████| 235kB 1.6MB/s
Collecting pytz (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/3d/73/fe30c2daaaa0713420d0382b16fbb761409f532c56bdcc514bf7b6262bb6/pytz-2019.1-py2.py3-none-any.whl (510kB)
    100% |████████████████████████████████| 512kB 1.4MB/s
Collecting cycler (from matplotlib<=1.5.2,>=1.3.1->-r /root/digits/requirements.txt (line 18))
  Downloading https://files.pythonhosted.org/packages/f7/d2/e07d3ebb2bd7af696440ce7e754c59dd546ffe1bbe732c8ab68b9c834e61/cycler-0.10.0-py2.py3-none-any.whl
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->-r /root/digits/requirements.txt (line 9))
Building wheels for collected packages: Pillow, gevent-websocket, Flask-SocketIO, lmdb, pydot, psutil, scikit-fmm, pyparsing
  Running setup.py bdist_wheel for Pillow ... done
  Stored in directory: /root/.cache/pip/wheels/24/cd/21/1037bb9cf72c80a9c74a0ca63fb496ad1b82e3718086df014a
  Running setup.py bdist_wheel for gevent-websocket ... done
  Stored in directory: /root/.cache/pip/wheels/c7/57/49/3dfd73ead67942123da1f45fb2b5db9da7704fed05b150deb2
  Running setup.py bdist_wheel for Flask-SocketIO ... done
  Stored in directory: /root/.cache/pip/wheels/f0/79/2e/bc53f94bf3859d4dff139094bed93e11da8bd7430b45791f59
  Running setup.py bdist_wheel for lmdb ... done
  Stored in directory: /root/.cache/pip/wheels/94/fc/c1/d902eb1733d13aec1dbc6df2d248c22ebaffd68c17dc1fcd97
  Running setup.py bdist_wheel for pydot ... done
  Stored in directory: /root/.cache/pip/wheels/98/1f/9a/37c7a7ccbe76edf1e9b82fa2374d2cde0c1c1a50cc3f760ab9
  Running setup.py bdist_wheel for psutil ... done
  Stored in directory: /root/.cache/pip/wheels/98/9d/92/68a90750e3190a6480baeca4aa4314c43536ec1b1b8687e283
  Running setup.py bdist_wheel for scikit-fmm ... done
  Stored in directory: /root/.cache/pip/wheels/68/5a/47/26e44146c9e341c2c9afed8559cfff05bb2fb87f7a61fc3988
  Running setup.py bdist_wheel for pyparsing ... done
  Stored in directory: /root/.cache/pip/wheels/e2/61/d6/773258a9af6e3f7ac6903c075fbeb281a7fa84619389c0a3b1
Successfully built Pillow gevent-websocket Flask-SocketIO lmdb pydot psutil scikit-fmm pyparsing
Installing collected packages: Pillow, protobuf, urllib3, certifi, chardet, idna, requests, gevent-websocket, Jinja2, Werkzeug, click, Flask, python-engineio, python-socketio, Flask-SocketIO, lmdb, pyparsing, pydot, psutil, python-dateutil, pytz, cycler, matplotlib, scikit-fmm, python-magic, boto
  Found existing installation: Pillow 3.1.2
    Not uninstalling pillow at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Jinja2 2.8
    Not uninstalling jinja2 at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Werkzeug 0.10.4
    Not uninstalling werkzeug at /usr/lib/python2.7/dist-packages, outside environment /usr
  Found existing installation: Flask 0.10.1
    Not uninstalling flask at /usr/lib/python2.7/dist-packages, outside environment /usr
Successfully installed Flask-0.10.1 Flask-SocketIO-2.6 Jinja2-2.8 Pillow-3.1.2 Werkzeug-0.10.4 boto-2.49.0 certifi-2019.6.16 chardet-3.0.4 click-7.0 cycler-0.10.0 gevent-websocket-0.10.1 idna-2.8 lmdb-0.87 matplotlib-1.5.2 protobuf-3.2.0 psutil-3.4.2 pydot-1.0.29 pyparsing-1.5.7 python-dateutil-2.8.0 python-engineio-3.8.1 python-magic-0.4.15 python-socketio-4.1.0 pytz-2019.1 requests-2.22.0 scikit-fmm-2019.1.30 urllib3-1.25.3
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

啟用插件的支援：

`~# pip2 install -e $DIGITS_ROOT`

```bash
root@HOSTNAME:~# pip2 install -e $DIGITS_ROOT
Obtaining file:///root/digits
Requirement already satisfied (use --upgrade to upgrade): Pillow<=3.3.2,>3.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): numpy<=1.14.0,>=1.8.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scipy<=0.17.0,>=0.13.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): protobuf<=3.2.0,>=2.5.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): six<=1.10.0,>=1.5.2 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): requests>=2.20.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent<=1.1.0,>=1.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): gevent-websocket<=0.10.1,>=0.10 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask>=0.12.3 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-WTF<=0.12,>=0.11 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): wtforms<=2.1,>=2.0 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Flask-SocketIO==2.6 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): setuptools<=20.7.0,>=3.3 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): lmdb==0.87 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): h5py<=2.6.0,>=2.2.1 in /usr/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pydot<=1.0.29,>=1.0.28 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): psutil<=3.4.2,>=1.2.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): matplotlib<=1.5.2,>=1.3.1 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): scikit-fmm>=0.0.9 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-magic>=0.2 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): boto>=2.48.0 in /usr/local/lib/python2.7/dist-packages (from digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): certifi>=2017.4.17 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): chardet<3.1.0,>=3.0.2 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): idna<2.9,>=2.5 in /usr/local/lib/python2.7/dist-packages (from requests>=2.20.0->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Jinja2>=2.10 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): itsdangerous>=0.24 in /usr/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): Werkzeug>=0.14 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): click>=5.1 in /usr/local/lib/python2.7/dist-packages (from Flask>=0.12.3->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-socketio>=1.4 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-engineio>=0.9.2 in /usr/local/lib/python2.7/dist-packages (from Flask-SocketIO==2.6->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pyparsing==1.5.7 in /usr/local/lib/python2.7/dist-packages (from pydot<=1.0.29,>=1.0.28->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): python-dateutil in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): pytz in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): cycler in /usr/local/lib/python2.7/dist-packages (from matplotlib<=1.5.2,>=1.3.1->digits===6.1.1)
Requirement already satisfied (use --upgrade to upgrade): MarkupSafe>=0.23 in /usr/lib/python2.7/dist-packages (from Jinja2>=2.10->Flask>=0.12.3->digits===6.1.1)
Installing collected packages: digits
  Running setup.py develop for digits
Successfully installed digits
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~#
```

最後就能啟動DIGITS的伺服器服務:

`~# cd $DIGITS_ROOT`

`~# ./digits-devserver`

```bash
root@HOSTNAME:~/DIGITS# ./digits-devserver
  ___ ___ ___ ___ _____ ___
 |   \_ _/ __|_ _|_   _/ __|
 | |) | | (_ || |  | | \__ \
 |___/___\___|___| |_| |___/ 6.1.1

Tensorflow support disabled.
2019-06-28 17:03:19 [INFO ] Loaded 4 jobs.
```
