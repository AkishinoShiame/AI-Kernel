# GPU Driver Install

It is suggest to add official compatible ppa fo graphics-drivers install.

It only tested with NVidia GPU in this project.

Issue with command`~# add-apt-repository ppa:graphics-drivers/ppa` to add repository.

```bash
root@HOSTNAME:~# add-apt-repository ppa:graphics-drivers/ppa
 Fresh drivers from upstream, currently shipping Nvidia.

## Current Status

Current long-lived branch release: `nvidia-410` (410.66)
Dropped support for Fermi series (https://nvidia.custhelp.com/app/answers/detail/a_id/4656)

Old long-lived branch release: `nvidia-390` (390.87)

For GF1xx GPUs use `nvidia-390` (390.87)
For G8x, G9x and GT2xx GPUs use `nvidia-340` (340.107)
For NV4x and G7x GPUs use `nvidia-304` (304.137) End-Of-Life!

Support timeframes for Unix legacy GPU releases:
https://nvidia.custhelp.com/app/answers/detail/a_id/3142

## What we're working on right now:

- Normal driver updates
- Help Wanted: Mesa Updates for Intel/AMD users, ping us if you want to help do this work, we're shorthanded.

## WARNINGS:

This PPA is currently in testing, you should be experienced with packaging before you dive in here:

Volunteers welcome!

### How you can help:

## Install PTS and benchmark your gear:

    sudo apt-get install phoronix-test-suite

Run the benchmark:

    phoronix-test-suite default-benchmark openarena xonotic tesseract gputest unigine-valley

and then say yes when it asks you to submit your results to openbechmarking.org. Then grab a cup of coffee, it takes a bit for the benchmarks to run. Depending on the version of Ubuntu you're using it might preferable for you to grabs PTS from upstream directly: http://www.phoronix-test-suite.com/?k=downloads

## Share your results with the community:

Post a link to your results (or any other feedback to): https://launchpad.net/~graphics-drivers-testers

Remember to rerun and resubmit the benchmarks after driver upgrades, this will allow us to gather a bunch of data on performance that we can share with everybody.

If you run into old documentation referring to other PPAs, you can help us by consolidating references to this PPA.

If someone wants to go ahead and start prototyping on `software-properties-gtk` on what the GUI should look like, please start hacking!

## Help us Help You!

We use the donation funds to get the developers hardware to test and upload these drivers, please consider donating to the "community" slider on the donation page if you're loving this PPA:

http://www.ubuntu.com/download/desktop/contribute
 More info: https://launchpad.net/~graphics-drivers/+archive/ubuntu/ppa
Press [ENTER] to continue or ctrl-c to cancel adding it
```

When saw this notification, press <kbd>Enter ⏎</kbd> to continue.

```bash
gpg: keyring `/tmp/tmped97551c/secring.gpg' created
gpg: keyring `/tmp/tmped97551c/pubring.gpg' created
gpg: requesting key 1118213C from hkp server keyserver.ubuntu.com
gpg: /tmp/tmped97551c/trustdb.gpg: trustdb created
gpg: key 1118213C: public key "Launchpad PPA for Graphics Drivers Team" imported
gpg: no ultimately trusted keys found
gpg: Total number processed: 1
gpg:               imported: 1  (RSA: 1)
OK
root@HOSTNAME:~#
```

Then we need to issue `~# apt update` to refresh the list of what packages can be installed.

```bash
root@HOSTNAME:~# apt update
Get:1 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial InRelease [24.3 kB]
Hit:2 http://archive.ubuntu.com/ubuntu xenial InRelease
Hit:3 http://security.ubuntu.com/ubuntu xenial-security InRelease
Get:4 http://archive.ubuntu.com/ubuntu xenial-updates InRelease [109 kB]
Get:5 http://archive.ubuntu.com/ubuntu xenial-backports InRelease [107 kB]
Get:6 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main amd64 Packages [14.9 kB]
Get:7 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main Translation-en [4,572 B]
Fetched 260 kB in 7s (34.6 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
42 packages can be upgraded. Run 'apt list --upgradable' to see them.
root@HOSTNAME:~#
```

And then we can start install the corrispond GPU driver by issue `~# ubuntu-drivers autoinstall` command.

After the installation done, use `~# nvidia-smi` to check the result.

```bash
root@HOSTNAME:~# nvidia-smi
Wed Jun 19 15:35:03 2019
+-----------------------------------------------------------------------------+
| NVIDIA-SMI 430.14       Driver Version: 430.14       CUDA Version: 10.2     |
|-------------------------------+----------------------+----------------------+
| GPU  Name        Persistence-M| Bus-Id        Disp.A | Volatile Uncorr. ECC |
| Fan  Temp  Perf  Pwr:Usage/Cap|         Memory-Usage | GPU-Util  Compute M. |
|===============================+======================+======================|
|   0  GeForce RTX 2080    Off  | 00000000:01:00.0 Off |                  N/A |
| 25%   32C    P8    18W / 215W |    125MiB /  7979MiB |      0%      Default |
+-------------------------------+----------------------+----------------------+

+-----------------------------------------------------------------------------+
| Processes:                                                       GPU Memory |
|  GPU       PID   Type   Process name                             Usage      |
|=============================================================================|
|    0      1156      C   python2                                      115MiB |
+-----------------------------------------------------------------------------+
root@HOSTNAME:~# 
``` 

`===============================================================================`

# GPU Driverのインストール

お勧めのインストール方法は公式から互換性が良いのPPA(ソフトウェアソース)をシステムに追加する。そうすると、最も良いなグラフィックスドライバーがインストールできます。

この方法はこのプロジェクトによってNVidiaのGPUが試しただけ。

このコマンド`~# add-apt-repository ppa:graphics-drivers/ppa`を使って、レポジトリを追加する.

```bash
root@HOSTNAME:~#  add-apt-repository ppa:graphics-drivers/ppa
 Fresh drivers from upstream, currently shipping Nvidia.

## Current Status

Current long-lived branch release: `nvidia-410` (410.66)
Dropped support for Fermi series (https://nvidia.custhelp.com/app/answers/detail/a_id/4656)

Old long-lived branch release: `nvidia-390` (390.87)

For GF1xx GPUs use `nvidia-390` (390.87)
For G8x, G9x and GT2xx GPUs use `nvidia-340` (340.107)
For NV4x and G7x GPUs use `nvidia-304` (304.137) End-Of-Life!

Support timeframes for Unix legacy GPU releases:
https://nvidia.custhelp.com/app/answers/detail/a_id/3142

## What we're working on right now:

- Normal driver updates
- Help Wanted: Mesa Updates for Intel/AMD users, ping us if you want to help do this work, we're shorthanded.

## WARNINGS:

This PPA is currently in testing, you should be experienced with packaging before you dive in here:

Volunteers welcome!

### How you can help:

## Install PTS and benchmark your gear:

    sudo apt-get install phoronix-test-suite

Run the benchmark:

    phoronix-test-suite default-benchmark openarena xonotic tesseract gputest unigine-valley

and then say yes when it asks you to submit your results to openbechmarking.org. Then grab a cup of coffee, it takes a bit for the benchmarks to run. Depending on the version of Ubuntu you're using it might preferable for you to grabs PTS from upstream directly: http://www.phoronix-test-suite.com/?k=downloads

## Share your results with the community:

Post a link to your results (or any other feedback to): https://launchpad.net/~graphics-drivers-testers

Remember to rerun and resubmit the benchmarks after driver upgrades, this will allow us to gather a bunch of data on performance that we can share with everybody.

If you run into old documentation referring to other PPAs, you can help us by consolidating references to this PPA.

If someone wants to go ahead and start prototyping on `software-properties-gtk` on what the GUI should look like, please start hacking!

## Help us Help You!

We use the donation funds to get the developers hardware to test and upload these drivers, please consider donating to the "community" slider on the donation page if you're loving this PPA:

http://www.ubuntu.com/download/desktop/contribute
 詳しい情報: https://launchpad.net/~graphics-drivers/+archive/ubuntu/ppa
[ENTER] を押すと続行します。ctrl-c で追加をキャンセルできます
```

指示を見ると、<kbd>Enter ⏎</kbd>キーを押す、追加を確認する。

```bash
gpg: 鍵リング「/tmp/tmpk6s75n3d/secring.gpg」ができました
gpg: 鍵リング「/tmp/tmpk6s75n3d/pubring.gpg」ができました
gpg: 鍵1118213Cをhkpからサーバkeyserver.ubuntu.comに要求
gpg: /tmp/tmpk6s75n3d/trustdb.gpg: 信用データベースができました
gpg: 鍵1118213C: 公開鍵"Launchpad PPA for Graphics Drivers Team"をインポートしました
gpg: 究極的に信用する鍵が見つかりません
gpg: 処理数の合計: 1
gpg:               インポート: 1  (RSA: 1)
OK
root@HOSTNAME:~#
```

後は `~# apt update`を使って、インストールできるのパケージリストを更新する。

```bash
root@HOSTNAME:~# apt update
取得:1 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial InRelease [24.3 kB]
ヒット:2 http://archive.ubuntu.com/ubuntu xenial InRelease
取得:3 http://security.ubuntu.com/ubuntu xenial-security InRelease [109 kB]
取得:4 http://archive.ubuntu.com/ubuntu xenial-updates InRelease [109 kB]
取得:5 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main amd64 Packages [14.9 kB]
取得:6 http://archive.ubuntu.com/ubuntu xenial-backports InRelease [107 kB]
取得:7 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main Translation-en [4,572 B]
369 kB を 5秒 で取得しました (68.2 kB/s)
パッケージリストを読み込んでいます... 完了
依存関係ツリーを作成しています
状態情報を読み取っています... 完了
アップグレードできるパッケージが 42 個あります。表示するには 'apt list --upgradable' を実行してください 。
root@HOSTNAME:~#
```

今からNVidiaのドライバーをインストールするが可能です。GPUハードウェアが対応のドライバーは`~# ubuntu-drivers autoinstall`コマンドを使って、最適なドライバーをインストールする。

インストール完了すると、`~# nvidia-smi`をインストール結果を検査する。

```bash
root@HOSTNAME:~# nvidia-smi
Wed Jun 19 15:35:03 2019
+-----------------------------------------------------------------------------+
| NVIDIA-SMI 430.14       Driver Version: 430.14       CUDA Version: 10.2     |
|-------------------------------+----------------------+----------------------+
| GPU  Name        Persistence-M| Bus-Id        Disp.A | Volatile Uncorr. ECC |
| Fan  Temp  Perf  Pwr:Usage/Cap|         Memory-Usage | GPU-Util  Compute M. |
|===============================+======================+======================|
|   0  GeForce RTX 2080    Off  | 00000000:01:00.0 Off |                  N/A |
| 25%   32C    P8    18W / 215W |    125MiB /  7979MiB |      0%      Default |
+-------------------------------+----------------------+----------------------+

+-----------------------------------------------------------------------------+
| Processes:                                                       GPU Memory |
|  GPU       PID   Type   Process name                             Usage      |
|=============================================================================|
|    0      1156      C   python2                                      115MiB |
+-----------------------------------------------------------------------------+
root@HOSTNAME:~# 
``` 

`===============================================================================`

# GPU Driver 安裝

要安裝GPU驅動程式的話建議直接新增官方所提供可相容的PPA源來下載與安裝顯示卡驅動。

本專案僅針對以下流程測試過NVidia的GPU顯卡。

使用`~# add-apt-repository ppa:graphics-drivers/ppa`指令來追加與新增PPA源。

```bash
root@HOSTNAME:~# add-apt-repository ppa:graphics-drivers/ppa
 Fresh drivers from upstream, currently shipping Nvidia.

## Current Status

Current long-lived branch release: `nvidia-410` (410.66)
Dropped support for Fermi series (https://nvidia.custhelp.com/app/answers/detail/a_id/4656)

Old long-lived branch release: `nvidia-390` (390.87)

For GF1xx GPUs use `nvidia-390` (390.87)
For G8x, G9x and GT2xx GPUs use `nvidia-340` (340.107)
For NV4x and G7x GPUs use `nvidia-304` (304.137) End-Of-Life!

Support timeframes for Unix legacy GPU releases:
https://nvidia.custhelp.com/app/answers/detail/a_id/3142

## What we're working on right now:

- Normal driver updates
- Help Wanted: Mesa Updates for Intel/AMD users, ping us if you want to help do this work, we're shorthanded.

## WARNINGS:

This PPA is currently in testing, you should be experienced with packaging before you dive in here:

Volunteers welcome!

### How you can help:

## Install PTS and benchmark your gear:

    sudo apt-get install phoronix-test-suite

Run the benchmark:

    phoronix-test-suite default-benchmark openarena xonotic tesseract gputest unigine-valley

and then say yes when it asks you to submit your results to openbechmarking.org. Then grab a cup of coffee, it takes a bit for the benchmarks to run. Depending on the version of Ubuntu you're using it might preferable for you to grabs PTS from upstream directly: http://www.phoronix-test-suite.com/?k=downloads

## Share your results with the community:

Post a link to your results (or any other feedback to): https://launchpad.net/~graphics-drivers-testers

Remember to rerun and resubmit the benchmarks after driver upgrades, this will allow us to gather a bunch of data on performance that we can share with everybody.

If you run into old documentation referring to other PPAs, you can help us by consolidating references to this PPA.

If someone wants to go ahead and start prototyping on `software-properties-gtk` on what the GUI should look like, please start hacking!

## Help us Help You!

We use the donation funds to get the developers hardware to test and upload these drivers, please consider donating to the "community" slider on the donation page if you're loving this PPA:

http://www.ubuntu.com/download/desktop/contribute
 更多資訊：https://launchpad.net/~graphics-drivers/+archive/ubuntu/ppa
請輸入 [ENTER] 繼續，或 Ctrl-C 來取消加入動作
```

當看到以上訊息時，鍵入<kbd>Enter ⏎</kbd>來繼續並加入PPA源。

```bash
gpg: `/tmp/tmppa694ngp/secring.gpg' 鑰匙圈已建立
gpg: `/tmp/tmppa694ngp/pubring.gpg' 鑰匙圈已建立
gpg: 正在請求金鑰 1118213C 自 hkp 伺服器 keyserver.ubuntu.com
gpg: /tmp/tmppa694ngp/trustdb.gpg: 建立了信任資料庫
gpg: 金鑰 1118213C: 公鑰 "Launchpad PPA for Graphics Drivers Team" 已匯入
gpg: 沒有找到任何徹底信任的金鑰
gpg: 處理總量: 1
gpg:               已匯入: 1  (RSA: 1)
OK
root@HOSTNAME:~#
```

接著我們需利用`~# apt update`指令來更新系統對顯卡套件安裝的支援。

```bash
root@HOSTNAME:~# apt update
下載:1 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial InRelease [24.3 kB]
下載:2 http://security.ubuntu.com/ubuntu xenial-security InRelease [109 kB]
已有:3 http://archive.ubuntu.com/ubuntu xenial InRelease
下載:4 http://archive.ubuntu.com/ubuntu xenial-updates InRelease [109 kB]
下載:5 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main amd64 Packages [14.9 kB]
下載:6 http://archive.ubuntu.com/ubuntu xenial-backports InRelease [107 kB]
下載:7 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu xenial/main Translation-en [4,572 B]
取得 369 kB 用了 5秒 (66.0 kB/s)
正在讀取套件清單... 完成
正在重建相依關係
正在讀取狀態資料... 完成
42 packages can be upgraded. Run 'apt list --upgradable' to see them.
root@HOSTNAME:~#
```

接著我們就可以安裝GPU顯卡驅動了，使用`~# ubuntu-drivers autoinstall`指令讓系統自動偵測與安裝適合的驅動程式。

一旦所有的安裝完成之後，可使用`~# nvidia-smi`檢查安裝是否有成功。

```bash
root@HOSTNAME:~# nvidia-smi
Wed Jun 19 15:35:03 2019
+-----------------------------------------------------------------------------+
| NVIDIA-SMI 430.14       Driver Version: 430.14       CUDA Version: 10.2     |
|-------------------------------+----------------------+----------------------+
| GPU  Name        Persistence-M| Bus-Id        Disp.A | Volatile Uncorr. ECC |
| Fan  Temp  Perf  Pwr:Usage/Cap|         Memory-Usage | GPU-Util  Compute M. |
|===============================+======================+======================|
|   0  GeForce RTX 2080    Off  | 00000000:01:00.0 Off |                  N/A |
| 25%   32C    P8    18W / 215W |    125MiB /  7979MiB |      0%      Default |
+-------------------------------+----------------------+----------------------+

+-----------------------------------------------------------------------------+
| Processes:                                                       GPU Memory |
|  GPU       PID   Type   Process name                             Usage      |
|=============================================================================|
|    0      1156      C   python2                                      115MiB |
+-----------------------------------------------------------------------------+
root@HOSTNAME:~# 
``` 
