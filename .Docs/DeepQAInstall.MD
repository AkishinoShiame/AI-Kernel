# DeepQA Install

The DeepQA Official site can be access from [Here](https://github.com/Conchylicultor/DeepQA)

Using `~# git clone https://github.com/Conchylicultor/DeepQA.git` to get a latest copy.

```bash
root@HOSTNAME:~# git clone https://github.com/Conchylicultor/DeepQA.git
Cloning into 'DeepQA'...
remote: Enumerating objects: 986, done.
remote: Total 986 (delta 0), reused 0 (delta 0), pack-reused 986
Receiving objects: 100% (986/986), 11.54 MiB | 3.68 MiB/s, done.
Resolving deltas: 100% (577/577), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

Need to install required Python package to use.

`cd DeepQA`

`pip3 install -r requirements.txt`

```bash
root@HOSTNAME:~# cd DeepQA/
root@HOSTNAME:~/DeepQA# pip3 install -r requirements.txt
Collecting tensorflow-gpu>=1.0 (from -r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8b/dc/922125284fb70d5ac17a3c3be87d8f1d95908bb5067977e7813bf7b7f712/tensorflow_gpu-1.14.0-cp35-cp35m-manylinux1_x86_64.whl (377.0MB)
    100% |████████████████████████████████| 377.0MB 2.1kB/s
Collecting numpy (from -r requirements.txt (line 2))
  Downloading https://files.pythonhosted.org/packages/bb/ef/d5a21cbc094d3f4d5b5336494dbcc9550b70c766a8345513c7c24ed18418/numpy-1.16.4-cp35-cp35m-manylinux1_x86_64.whl (17.2MB)
    100% |████████████████████████████████| 17.2MB 70kB/s
Collecting nltk (from -r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/8d/5d/825889810b85c303c8559a3fd74d451d80cf3585a851f2103e69576bf583/nltk-3.4.3.zip (1.4MB)
    100% |████████████████████████████████| 1.5MB 737kB/s
Collecting tqdm (from -r requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/9f/3d/7a6b68b631d2ab54975f3a4863f3c4e9b26445353264ef01f465dc9b0208/tqdm-4.32.2-py2.py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting google-pasta>=0.1.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d0/33/376510eb8d6246f3c30545f416b2263eee461e40940c2a4413c711bdf62d/google_pasta-0.1.7-py3-none-any.whl (52kB)
    100% |████████████████████████████████| 61kB 1.2MB/s
Collecting keras-preprocessing>=1.0.5 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/28/6a/8c1f62c37212d9fc441a7e26736df51ce6f0e38455816445471f10da4f0a/Keras_Preprocessing-1.1.0-py2.py3-none-any.whl (41kB)
    100% |████████████████████████████████| 51kB 2.6MB/s
Collecting tensorflow-estimator<1.15.0rc0,>=1.14.0rc0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/3c/d5/21860a5b11caf0678fbc8319341b0ae21a07156911132e0e71bffed0510d/tensorflow_estimator-1.14.0-py2.py3-none-any.whl (488kB)
    100% |████████████████████████████████| 491kB 1.3MB/s
Collecting absl-py>=0.7.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/da/3f/9b0355080b81b15ba6a9ffcf1f5ea39e307a2778b2f2dc8694724e8abd5b/absl-py-0.7.1.tar.gz (99kB)
    100% |████████████████████████████████| 102kB 2.9MB/s
Collecting grpcio>=1.8.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/14/19/f1858ed60786ff681a5f8681448b56bffaaa87a81e9a7ca5cd075a873b35/grpcio-1.21.1-cp35-cp35m-manylinux1_x86_64.whl (2.2MB)
    100% |████████████████████████████████| 2.2MB 556kB/s
Collecting termcolor>=1.1.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8a/48/a76be51647d0eb9f10e2a4511bf3ffb8cc1e6b14e9e4fab46173aa79f981/termcolor-1.1.0.tar.gz
Collecting wrapt>=1.11.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/23/84/323c2415280bc4fc880ac5050dddfb3c8062c2552b34c2e512eb4aa68f79/wrapt-1.11.2.tar.gz
Collecting tensorboard<1.15.0,>=1.14.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/91/2d/2ed263449a078cd9c8a9ba50ebd50123adf1f8cfbea1492f9084169b89d9/tensorboard-1.14.0-py3-none-any.whl (3.1MB)
    100% |████████████████████████████████| 3.2MB 282kB/s
Collecting gast>=0.2.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4e/35/11749bf99b2d4e3cceb4d55ca22590b0d7c2c62b9de38ac4a4a7f4687421/gast-0.2.2.tar.gz
Collecting astor>=0.6.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d1/4f/950dfae467b384fc96bc6469de25d832534f6b4441033c39f914efd13418/astor-0.8.0-py2.py3-none-any.whl
Collecting keras-applications>=1.0.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/71/e3/19762fdfc62877ae9102edf6342d71b28fbfd9dea3d2f96a882ce099b03f/Keras_Applications-1.0.8-py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.4MB/s
Collecting protobuf>=3.6.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/7c/d2/581ebc3c41879aca2c4fce5c37cdb8d779c4ea79109b6da7f640735ea0a2/protobuf-3.8.0-cp35-cp35m-manylinux1_x86_64.whl (1.2MB)
    100% |████████████████████████████████| 1.2MB 774kB/s
Requirement already satisfied (use --upgrade to upgrade): six>=1.10.0 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Requirement already satisfied (use --upgrade to upgrade): wheel>=0.26 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Collecting singledispatch; python_version < "3.4" (from nltk->-r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/c5/10/369f50bcd4621b263927b0a1519987a04383d4a98fb10438042ad410cf88/singledispatch-3.4.0.3-py2.py3-none-any.whl
Collecting setuptools>=41.0.0 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/ec/51/f45cea425fd5cb0b0380f5b0f048ebc1da5b417e48d304838c02d6288a1e/setuptools-41.0.1-py2.py3-none-any.whl (575kB)
    100% |████████████████████████████████| 583kB 1.5MB/s
Collecting markdown>=2.6.8 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/c0/4e/fd492e91abdc2d2fcb70ef453064d980688762079397f779758e055f6575/Markdown-3.1.1-py2.py3-none-any.whl (87kB)
    100% |████████████████████████████████| 92kB 2.1MB/s
Collecting werkzeug>=0.11.15 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl
Collecting h5py (from keras-applications>=1.0.6->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4c/77/c4933e12dca0f61bcdafc207c7532e1250b8d12719459fd85132f3daa9fd/h5py-2.9.0-cp35-cp35m-manylinux1_x86_64.whl (2.8MB)
    100% |████████████████████████████████| 2.8MB 477kB/s
Building wheels for collected packages: nltk, absl-py, termcolor, wrapt, gast
  Running setup.py bdist_wheel for nltk ... done
  Stored in directory: /root/.cache/pip/wheels/54/40/b7/c56ad418e6cd4d9e1e594b5e138d1ca6eec11a6ee3d464e5bb
  Running setup.py bdist_wheel for absl-py ... done
  Stored in directory: /root/.cache/pip/wheels/ee/98/38/46cbcc5a93cfea5492d19c38562691ddb23b940176c14f7b48
  Running setup.py bdist_wheel for termcolor ... done
  Stored in directory: /root/.cache/pip/wheels/7c/06/54/bc84598ba1daf8f970247f550b175aaaee85f68b4b0c5ab2c6
  Running setup.py bdist_wheel for wrapt ... done
  Stored in directory: /root/.cache/pip/wheels/d7/de/2e/efa132238792efb6459a96e85916ef8597fcb3d2ae51590dfd
  Running setup.py bdist_wheel for gast ... done
  Stored in directory: /root/.cache/pip/wheels/5c/2e/7e/a1d4d4fcebe6c381f378ce7743a3ced3699feb89bcfbdadadd
Successfully built nltk absl-py termcolor wrapt gast
Installing collected packages: google-pasta, numpy, keras-preprocessing, tensorflow-estimator, absl-py, grpcio, termcolor, wrapt, setuptools, markdown, werkzeug, protobuf, tensorboard, gast, astor, h5py, keras-applications, tensorflow-gpu, singledispatch, nltk, tqdm
  Found existing installation: setuptools 20.7.0
    Not uninstalling setuptools at /usr/lib/python3/dist-packages, outside environment /usr
Successfully installed absl-py-0.7.1 astor-0.8.0 gast-0.2.2 google-pasta-0.1.7 grpcio-1.21.1 h5py-2.9.0 keras-applications-1.0.8 keras-preprocessing-1.1.0 markdown-3.1.1 nltk-3.4.3 numpy-1.16.4 protobuf-3.8.0 setuptools-41.0.1 singledispatch-3.4.0.3 tensorboard-1.14.0 tensorflow-estimator-1.14.0 tensorflow-gpu-1.14.0 termcolor-1.1.0 tqdm-4.32.2 werkzeug-0.15.4 wrapt-1.11.2
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~/DeepQA#
```

For the tensorflow package, it is suggest using gpu for training. While only using for predict, it is suggest to install tensorflow for cpu.

`pip3 uninstall tensorflow-gpu`

`pip3 install tensorflow>=1.0`

To download additional data to make nltk work.

`~# python3 -m nltk.downloader punkt`

```bash
root@HOSTNAME:~/DeepQA# python3 -m nltk.downloader punkt
[nltk_data] Downloading package punkt to /root/nltk_data...
[nltk_data]   Unzipping tokenizers/punkt.zip.
root@HOSTNAME:~/DeepQA#
```

（Optional）This project used facebook fasttext for Word2Vec function, which can be access from [here](https://fasttext.cc/docs/en/pretrained-vectors.html).

Place to the right place and make it work with DeepQA.

``

```
~# wget https://dl.fbaipublicfiles.com/fasttext/vectors-wiki/wiki.zh.vec
~# mv wiki.zh.vec ~/DeepQA/data/embeddings/
~# cd  ~/DeepQA/data/embeddings/
~# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
```

```bash
root@HOSTNAME:~/DeepQA/data/embeddings# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
Converting wiki.zh.vec to binary file format
100%|█████████████████████████████████████████████████████████| 332647/332647 [00:34<00:00, 9559.54it/s]
root@HOSTNAME:~/DeepQA/data/embeddings# ll
合計 1233672
drwxrwxrwx 1 root root      4096  7月  1 12:06 ./
drwxrwxrwx 1 root root      4096  7月  1 11:28 ../
-rw-rw-rw- 1 root root        88  7月  1 11:28 .gitignore
-rw-rw-rw- 1 root root       741  7月  1 11:28 README.md
-rw-rw-rw- 1 root root      1604  7月  1 11:28 vec2bin.py
-rw-rw-rw- 1 root root 401876621  7月  1 12:07 wiki.zh.bin
-rw-rw-rw- 1 root root 861327482  1月 19 02:14 wiki.zh.vec
root@HOSTNAME:~/DeepQA/data/embeddings#
```

Place the train data to correct folder inside DeepQA/data.

Finally we can train the chatbot and use it!

```
~# python3 main.py --modelTag <name> --initEmbeddings --embeddingSource=wiki.zh.bin --corpus {cornell,opensubs,scotus,ubuntu,lightweight}
~# python3 main.py --test interactive --modelTag <name> 
```

# DeepQAのインストール

このDeepQAの公式サイトは[ここ](https://github.com/Conchylicultor/DeepQA)にアクセスできます。

コマンド`~# git clone https://github.com/Conchylicultor/DeepQA.git`を使って、最新のコードを取ります。

```bash
root@HOSTNAME:~# git clone https://github.com/Conchylicultor/DeepQA.git
Cloning into 'DeepQA'...
remote: Enumerating objects: 986, done.
remote: Total 986 (delta 0), reused 0 (delta 0), pack-reused 986
Receiving objects: 100% (986/986), 11.54 MiB | 3.68 MiB/s, done.
Resolving deltas: 100% (577/577), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

使えが必要なPythonパケージをダウンロードする。

`cd DeepQA`

`pip3 install -r requirements.txt`

```bash
root@HOSTNAME:~# cd DeepQA/
root@HOSTNAME:~/DeepQA# pip3 install -r requirements.txt
Collecting tensorflow-gpu>=1.0 (from -r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8b/dc/922125284fb70d5ac17a3c3be87d8f1d95908bb5067977e7813bf7b7f712/tensorflow_gpu-1.14.0-cp35-cp35m-manylinux1_x86_64.whl (377.0MB)
    100% |████████████████████████████████| 377.0MB 2.1kB/s
Collecting numpy (from -r requirements.txt (line 2))
  Downloading https://files.pythonhosted.org/packages/bb/ef/d5a21cbc094d3f4d5b5336494dbcc9550b70c766a8345513c7c24ed18418/numpy-1.16.4-cp35-cp35m-manylinux1_x86_64.whl (17.2MB)
    100% |████████████████████████████████| 17.2MB 70kB/s
Collecting nltk (from -r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/8d/5d/825889810b85c303c8559a3fd74d451d80cf3585a851f2103e69576bf583/nltk-3.4.3.zip (1.4MB)
    100% |████████████████████████████████| 1.5MB 737kB/s
Collecting tqdm (from -r requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/9f/3d/7a6b68b631d2ab54975f3a4863f3c4e9b26445353264ef01f465dc9b0208/tqdm-4.32.2-py2.py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting google-pasta>=0.1.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d0/33/376510eb8d6246f3c30545f416b2263eee461e40940c2a4413c711bdf62d/google_pasta-0.1.7-py3-none-any.whl (52kB)
    100% |████████████████████████████████| 61kB 1.2MB/s
Collecting keras-preprocessing>=1.0.5 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/28/6a/8c1f62c37212d9fc441a7e26736df51ce6f0e38455816445471f10da4f0a/Keras_Preprocessing-1.1.0-py2.py3-none-any.whl (41kB)
    100% |████████████████████████████████| 51kB 2.6MB/s
Collecting tensorflow-estimator<1.15.0rc0,>=1.14.0rc0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/3c/d5/21860a5b11caf0678fbc8319341b0ae21a07156911132e0e71bffed0510d/tensorflow_estimator-1.14.0-py2.py3-none-any.whl (488kB)
    100% |████████████████████████████████| 491kB 1.3MB/s
Collecting absl-py>=0.7.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/da/3f/9b0355080b81b15ba6a9ffcf1f5ea39e307a2778b2f2dc8694724e8abd5b/absl-py-0.7.1.tar.gz (99kB)
    100% |████████████████████████████████| 102kB 2.9MB/s
Collecting grpcio>=1.8.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/14/19/f1858ed60786ff681a5f8681448b56bffaaa87a81e9a7ca5cd075a873b35/grpcio-1.21.1-cp35-cp35m-manylinux1_x86_64.whl (2.2MB)
    100% |████████████████████████████████| 2.2MB 556kB/s
Collecting termcolor>=1.1.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8a/48/a76be51647d0eb9f10e2a4511bf3ffb8cc1e6b14e9e4fab46173aa79f981/termcolor-1.1.0.tar.gz
Collecting wrapt>=1.11.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/23/84/323c2415280bc4fc880ac5050dddfb3c8062c2552b34c2e512eb4aa68f79/wrapt-1.11.2.tar.gz
Collecting tensorboard<1.15.0,>=1.14.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/91/2d/2ed263449a078cd9c8a9ba50ebd50123adf1f8cfbea1492f9084169b89d9/tensorboard-1.14.0-py3-none-any.whl (3.1MB)
    100% |████████████████████████████████| 3.2MB 282kB/s
Collecting gast>=0.2.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4e/35/11749bf99b2d4e3cceb4d55ca22590b0d7c2c62b9de38ac4a4a7f4687421/gast-0.2.2.tar.gz
Collecting astor>=0.6.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d1/4f/950dfae467b384fc96bc6469de25d832534f6b4441033c39f914efd13418/astor-0.8.0-py2.py3-none-any.whl
Collecting keras-applications>=1.0.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/71/e3/19762fdfc62877ae9102edf6342d71b28fbfd9dea3d2f96a882ce099b03f/Keras_Applications-1.0.8-py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.4MB/s
Collecting protobuf>=3.6.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/7c/d2/581ebc3c41879aca2c4fce5c37cdb8d779c4ea79109b6da7f640735ea0a2/protobuf-3.8.0-cp35-cp35m-manylinux1_x86_64.whl (1.2MB)
    100% |████████████████████████████████| 1.2MB 774kB/s
Requirement already satisfied (use --upgrade to upgrade): six>=1.10.0 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Requirement already satisfied (use --upgrade to upgrade): wheel>=0.26 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Collecting singledispatch; python_version < "3.4" (from nltk->-r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/c5/10/369f50bcd4621b263927b0a1519987a04383d4a98fb10438042ad410cf88/singledispatch-3.4.0.3-py2.py3-none-any.whl
Collecting setuptools>=41.0.0 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/ec/51/f45cea425fd5cb0b0380f5b0f048ebc1da5b417e48d304838c02d6288a1e/setuptools-41.0.1-py2.py3-none-any.whl (575kB)
    100% |████████████████████████████████| 583kB 1.5MB/s
Collecting markdown>=2.6.8 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/c0/4e/fd492e91abdc2d2fcb70ef453064d980688762079397f779758e055f6575/Markdown-3.1.1-py2.py3-none-any.whl (87kB)
    100% |████████████████████████████████| 92kB 2.1MB/s
Collecting werkzeug>=0.11.15 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl
Collecting h5py (from keras-applications>=1.0.6->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4c/77/c4933e12dca0f61bcdafc207c7532e1250b8d12719459fd85132f3daa9fd/h5py-2.9.0-cp35-cp35m-manylinux1_x86_64.whl (2.8MB)
    100% |████████████████████████████████| 2.8MB 477kB/s
Building wheels for collected packages: nltk, absl-py, termcolor, wrapt, gast
  Running setup.py bdist_wheel for nltk ... done
  Stored in directory: /root/.cache/pip/wheels/54/40/b7/c56ad418e6cd4d9e1e594b5e138d1ca6eec11a6ee3d464e5bb
  Running setup.py bdist_wheel for absl-py ... done
  Stored in directory: /root/.cache/pip/wheels/ee/98/38/46cbcc5a93cfea5492d19c38562691ddb23b940176c14f7b48
  Running setup.py bdist_wheel for termcolor ... done
  Stored in directory: /root/.cache/pip/wheels/7c/06/54/bc84598ba1daf8f970247f550b175aaaee85f68b4b0c5ab2c6
  Running setup.py bdist_wheel for wrapt ... done
  Stored in directory: /root/.cache/pip/wheels/d7/de/2e/efa132238792efb6459a96e85916ef8597fcb3d2ae51590dfd
  Running setup.py bdist_wheel for gast ... done
  Stored in directory: /root/.cache/pip/wheels/5c/2e/7e/a1d4d4fcebe6c381f378ce7743a3ced3699feb89bcfbdadadd
Successfully built nltk absl-py termcolor wrapt gast
Installing collected packages: google-pasta, numpy, keras-preprocessing, tensorflow-estimator, absl-py, grpcio, termcolor, wrapt, setuptools, markdown, werkzeug, protobuf, tensorboard, gast, astor, h5py, keras-applications, tensorflow-gpu, singledispatch, nltk, tqdm
  Found existing installation: setuptools 20.7.0
    Not uninstalling setuptools at /usr/lib/python3/dist-packages, outside environment /usr
Successfully installed absl-py-0.7.1 astor-0.8.0 gast-0.2.2 google-pasta-0.1.7 grpcio-1.21.1 h5py-2.9.0 keras-applications-1.0.8 keras-preprocessing-1.1.0 markdown-3.1.1 nltk-3.4.3 numpy-1.16.4 protobuf-3.8.0 setuptools-41.0.1 singledispatch-3.4.0.3 tensorboard-1.14.0 tensorflow-estimator-1.14.0 tensorflow-gpu-1.14.0 termcolor-1.1.0 tqdm-4.32.2 werkzeug-0.15.4 wrapt-1.11.2
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~/DeepQA#
```

ちなみに、tensorflowパッケージの部分は、訓練の時はGPU版がおすすめ。だが、もしチャットボットに応用の場合はCPU版がおすすめです。

`pip3 uninstall tensorflow-gpu`

`pip3 install tensorflow>=1.0`

nltkの機能が上手く使えますように、追加の資料をダウンロードする。

`~# python3 -m nltk.downloader punkt`

```bash
root@HOSTNAME:~/DeepQA# python3 -m nltk.downloader punkt
[nltk_data] Downloading package punkt to /root/nltk_data...
[nltk_data]   Unzipping tokenizers/punkt.zip.
root@HOSTNAME:~/DeepQA#
```

（選択可能）このプロジェクトはfacebookのfasttextを使って、Word2Vecの機能を使用する。その資料は[ここに](https://fasttext.cc/docs/en/pretrained-vectors.html)ダウロート可能です。

ダウロートしたのファイルを正しい場所に置いて、そうして初期化する。

``

```
~# wget https://dl.fbaipublicfiles.com/fasttext/vectors-wiki/wiki.zh.vec
~# mv wiki.zh.vec ~/DeepQA/data/embeddings/
~# cd  ~/DeepQA/data/embeddings/
~# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
```

```bash
root@HOSTNAME:~/DeepQA/data/embeddings# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
Converting wiki.zh.vec to binary file format
100%|█████████████████████████████████████████████████████████| 332647/332647 [00:34<00:00, 9559.54it/s]
root@HOSTNAME:~/DeepQA/data/embeddings# ll
合計 1233672
drwxrwxrwx 1 root root      4096  7月  1 12:06 ./
drwxrwxrwx 1 root root      4096  7月  1 11:28 ../
-rw-rw-rw- 1 root root        88  7月  1 11:28 .gitignore
-rw-rw-rw- 1 root root       741  7月  1 11:28 README.md
-rw-rw-rw- 1 root root      1604  7月  1 11:28 vec2bin.py
-rw-rw-rw- 1 root root 401876621  7月  1 12:07 wiki.zh.bin
-rw-rw-rw- 1 root root 861327482  1月 19 02:14 wiki.zh.vec
root@HOSTNAME:~/DeepQA/data/embeddings#
```

対応な訓練ファイルをDeepQA/dataの中に、最適なフォルダに置いてください。

最後はチャットボットを訓練すると使用するが可能です

```
~# python3 main.py --modelTag <name> --initEmbeddings --embeddingSource=wiki.zh.bin --corpus {cornell,opensubs,scotus,ubuntu,lightweight}
~# python3 main.py --test interactive --modelTag <name> 
```

# DeepQA 安裝

DeepQA的官方網站可由[此處](https://github.com/Conchylicultor/DeepQA)進行存取。

使用`~# git clone https://github.com/Conchylicultor/DeepQA.git`指令來取得最新的程式。

```bash
root@HOSTNAME:~# git clone https://github.com/Conchylicultor/DeepQA.git
Cloning into 'DeepQA'...
remote: Enumerating objects: 986, done.
remote: Total 986 (delta 0), reused 0 (delta 0), pack-reused 986
Receiving objects: 100% (986/986), 11.54 MiB | 3.68 MiB/s, done.
Resolving deltas: 100% (577/577), done.
Checking connectivity... done.
root@HOSTNAME:~#
```

下載所需的Python 套件。

`cd DeepQA`

`pip3 install -r requirements.txt`


```bash
root@HOSTNAME:~# cd DeepQA/
root@HOSTNAME:~/DeepQA# pip3 install -r requirements.txt
Collecting tensorflow-gpu>=1.0 (from -r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8b/dc/922125284fb70d5ac17a3c3be87d8f1d95908bb5067977e7813bf7b7f712/tensorflow_gpu-1.14.0-cp35-cp35m-manylinux1_x86_64.whl (377.0MB)
    100% |████████████████████████████████| 377.0MB 2.1kB/s
Collecting numpy (from -r requirements.txt (line 2))
  Downloading https://files.pythonhosted.org/packages/bb/ef/d5a21cbc094d3f4d5b5336494dbcc9550b70c766a8345513c7c24ed18418/numpy-1.16.4-cp35-cp35m-manylinux1_x86_64.whl (17.2MB)
    100% |████████████████████████████████| 17.2MB 70kB/s
Collecting nltk (from -r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/8d/5d/825889810b85c303c8559a3fd74d451d80cf3585a851f2103e69576bf583/nltk-3.4.3.zip (1.4MB)
    100% |████████████████████████████████| 1.5MB 737kB/s
Collecting tqdm (from -r requirements.txt (line 4))
  Downloading https://files.pythonhosted.org/packages/9f/3d/7a6b68b631d2ab54975f3a4863f3c4e9b26445353264ef01f465dc9b0208/tqdm-4.32.2-py2.py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.3MB/s
Collecting google-pasta>=0.1.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d0/33/376510eb8d6246f3c30545f416b2263eee461e40940c2a4413c711bdf62d/google_pasta-0.1.7-py3-none-any.whl (52kB)
    100% |████████████████████████████████| 61kB 1.2MB/s
Collecting keras-preprocessing>=1.0.5 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/28/6a/8c1f62c37212d9fc441a7e26736df51ce6f0e38455816445471f10da4f0a/Keras_Preprocessing-1.1.0-py2.py3-none-any.whl (41kB)
    100% |████████████████████████████████| 51kB 2.6MB/s
Collecting tensorflow-estimator<1.15.0rc0,>=1.14.0rc0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/3c/d5/21860a5b11caf0678fbc8319341b0ae21a07156911132e0e71bffed0510d/tensorflow_estimator-1.14.0-py2.py3-none-any.whl (488kB)
    100% |████████████████████████████████| 491kB 1.3MB/s
Collecting absl-py>=0.7.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/da/3f/9b0355080b81b15ba6a9ffcf1f5ea39e307a2778b2f2dc8694724e8abd5b/absl-py-0.7.1.tar.gz (99kB)
    100% |████████████████████████████████| 102kB 2.9MB/s
Collecting grpcio>=1.8.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/14/19/f1858ed60786ff681a5f8681448b56bffaaa87a81e9a7ca5cd075a873b35/grpcio-1.21.1-cp35-cp35m-manylinux1_x86_64.whl (2.2MB)
    100% |████████████████████████████████| 2.2MB 556kB/s
Collecting termcolor>=1.1.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/8a/48/a76be51647d0eb9f10e2a4511bf3ffb8cc1e6b14e9e4fab46173aa79f981/termcolor-1.1.0.tar.gz
Collecting wrapt>=1.11.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/23/84/323c2415280bc4fc880ac5050dddfb3c8062c2552b34c2e512eb4aa68f79/wrapt-1.11.2.tar.gz
Collecting tensorboard<1.15.0,>=1.14.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/91/2d/2ed263449a078cd9c8a9ba50ebd50123adf1f8cfbea1492f9084169b89d9/tensorboard-1.14.0-py3-none-any.whl (3.1MB)
    100% |████████████████████████████████| 3.2MB 282kB/s
Collecting gast>=0.2.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4e/35/11749bf99b2d4e3cceb4d55ca22590b0d7c2c62b9de38ac4a4a7f4687421/gast-0.2.2.tar.gz
Collecting astor>=0.6.0 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/d1/4f/950dfae467b384fc96bc6469de25d832534f6b4441033c39f914efd13418/astor-0.8.0-py2.py3-none-any.whl
Collecting keras-applications>=1.0.6 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/71/e3/19762fdfc62877ae9102edf6342d71b28fbfd9dea3d2f96a882ce099b03f/Keras_Applications-1.0.8-py3-none-any.whl (50kB)
    100% |████████████████████████████████| 51kB 2.4MB/s
Collecting protobuf>=3.6.1 (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/7c/d2/581ebc3c41879aca2c4fce5c37cdb8d779c4ea79109b6da7f640735ea0a2/protobuf-3.8.0-cp35-cp35m-manylinux1_x86_64.whl (1.2MB)
    100% |████████████████████████████████| 1.2MB 774kB/s
Requirement already satisfied (use --upgrade to upgrade): six>=1.10.0 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Requirement already satisfied (use --upgrade to upgrade): wheel>=0.26 in /usr/lib/python3/dist-packages (from tensorflow-gpu>=1.0->-r requirements.txt (line 1))
Collecting singledispatch; python_version < "3.4" (from nltk->-r requirements.txt (line 3))
  Downloading https://files.pythonhosted.org/packages/c5/10/369f50bcd4621b263927b0a1519987a04383d4a98fb10438042ad410cf88/singledispatch-3.4.0.3-py2.py3-none-any.whl
Collecting setuptools>=41.0.0 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/ec/51/f45cea425fd5cb0b0380f5b0f048ebc1da5b417e48d304838c02d6288a1e/setuptools-41.0.1-py2.py3-none-any.whl (575kB)
    100% |████████████████████████████████| 583kB 1.5MB/s
Collecting markdown>=2.6.8 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/c0/4e/fd492e91abdc2d2fcb70ef453064d980688762079397f779758e055f6575/Markdown-3.1.1-py2.py3-none-any.whl (87kB)
    100% |████████████████████████████████| 92kB 2.1MB/s
Collecting werkzeug>=0.11.15 (from tensorboard<1.15.0,>=1.14.0->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Using cached https://files.pythonhosted.org/packages/9f/57/92a497e38161ce40606c27a86759c6b92dd34fcdb33f64171ec559257c02/Werkzeug-0.15.4-py2.py3-none-any.whl
Collecting h5py (from keras-applications>=1.0.6->tensorflow-gpu>=1.0->-r requirements.txt (line 1))
  Downloading https://files.pythonhosted.org/packages/4c/77/c4933e12dca0f61bcdafc207c7532e1250b8d12719459fd85132f3daa9fd/h5py-2.9.0-cp35-cp35m-manylinux1_x86_64.whl (2.8MB)
    100% |████████████████████████████████| 2.8MB 477kB/s
Building wheels for collected packages: nltk, absl-py, termcolor, wrapt, gast
  Running setup.py bdist_wheel for nltk ... done
  Stored in directory: /root/.cache/pip/wheels/54/40/b7/c56ad418e6cd4d9e1e594b5e138d1ca6eec11a6ee3d464e5bb
  Running setup.py bdist_wheel for absl-py ... done
  Stored in directory: /root/.cache/pip/wheels/ee/98/38/46cbcc5a93cfea5492d19c38562691ddb23b940176c14f7b48
  Running setup.py bdist_wheel for termcolor ... done
  Stored in directory: /root/.cache/pip/wheels/7c/06/54/bc84598ba1daf8f970247f550b175aaaee85f68b4b0c5ab2c6
  Running setup.py bdist_wheel for wrapt ... done
  Stored in directory: /root/.cache/pip/wheels/d7/de/2e/efa132238792efb6459a96e85916ef8597fcb3d2ae51590dfd
  Running setup.py bdist_wheel for gast ... done
  Stored in directory: /root/.cache/pip/wheels/5c/2e/7e/a1d4d4fcebe6c381f378ce7743a3ced3699feb89bcfbdadadd
Successfully built nltk absl-py termcolor wrapt gast
Installing collected packages: google-pasta, numpy, keras-preprocessing, tensorflow-estimator, absl-py, grpcio, termcolor, wrapt, setuptools, markdown, werkzeug, protobuf, tensorboard, gast, astor, h5py, keras-applications, tensorflow-gpu, singledispatch, nltk, tqdm
  Found existing installation: setuptools 20.7.0
    Not uninstalling setuptools at /usr/lib/python3/dist-packages, outside environment /usr
Successfully installed absl-py-0.7.1 astor-0.8.0 gast-0.2.2 google-pasta-0.1.7 grpcio-1.21.1 h5py-2.9.0 keras-applications-1.0.8 keras-preprocessing-1.1.0 markdown-3.1.1 nltk-3.4.3 numpy-1.16.4 protobuf-3.8.0 setuptools-41.0.1 singledispatch-3.4.0.3 tensorboard-1.14.0 tensorflow-estimator-1.14.0 tensorflow-gpu-1.14.0 termcolor-1.1.0 tqdm-4.32.2 werkzeug-0.15.4 wrapt-1.11.2
You are using pip version 8.1.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command.
root@HOSTNAME:~/DeepQA#
```

在tensorflow的套件方面，訓練時建議使用GPU進行加速訓練。但倘若到了使用階段，建議將GPU版本替換成CPU版本。如下：

`pip3 uninstall tensorflow-gpu`

`pip3 install tensorflow>=1.0`

為了讓nltk可以正常運作，將下載所需的額外套件：

`~# python3 -m nltk.downloader punkt`

```bash
root@HOSTNAME:~/DeepQA# python3 -m nltk.downloader punkt
[nltk_data] Downloading package punkt to /root/nltk_data...
[nltk_data]   Unzipping tokenizers/punkt.zip.
root@HOSTNAME:~/DeepQA#
```

（選用）本專案有使用facebook fasttext進行Word2Vec的功能，可由[此](https://fasttext.cc/docs/en/pretrained-vectors.html)取得。

將下載的檔案置放於正確的位置並轉換為此系統可用的格式。

``

```
~# wget https://dl.fbaipublicfiles.com/fasttext/vectors-wiki/wiki.zh.vec
~# mv wiki.zh.vec ~/DeepQA/data/embeddings/
~# cd  ~/DeepQA/data/embeddings/
~# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
```

```bash
root@HOSTNAME:~/DeepQA/data/embeddings# python3 vec2bin.py -i wiki.zh.vec -o wiki.zh.bin
Converting wiki.zh.vec to binary file format
100%|█████████████████████████████████████████████████████████| 332647/332647 [00:34<00:00, 9559.54it/s]
root@HOSTNAME:~/DeepQA/data/embeddings# ll
合計 1233672
drwxrwxrwx 1 root root      4096  7月  1 12:06 ./
drwxrwxrwx 1 root root      4096  7月  1 11:28 ../
-rw-rw-rw- 1 root root        88  7月  1 11:28 .gitignore
-rw-rw-rw- 1 root root       741  7月  1 11:28 README.md
-rw-rw-rw- 1 root root      1604  7月  1 11:28 vec2bin.py
-rw-rw-rw- 1 root root 401876621  7月  1 12:07 wiki.zh.bin
-rw-rw-rw- 1 root root 861327482  1月 19 02:14 wiki.zh.vec
root@HOSTNAME:~/DeepQA/data/embeddings#
```

將準備好的訓練資料丟入DeepQA/data裡的對應子資料夾。

最後我們即可訓練與使用聊天機器人：

```
~# python3 main.py --modelTag <name> --initEmbeddings --embeddingSource=wiki.zh.bin --corpus {cornell,opensubs,scotus,ubuntu,lightweight}
~# python3 main.py --test interactive --modelTag <name> 
```
