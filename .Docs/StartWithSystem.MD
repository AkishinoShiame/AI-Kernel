# Start with System

To make the AI Kernel started with the system when Ubuntu OS boot up. Needs the systemd to trigger.

Also for the Python works and for debug(log) windows can be trace, decide to start the python script with screen command.

First create scripts to one time open main AWWW_web.py server script, create two scripts below.

`# vim Start_SV_NoTag.sh`

```bash
#start NoTag chatbot Python Server
cd /path/to/Chatbot-Server/NoTag/
source /root/.bashrc
python3 AWWW_web.py
```

`# vim Start_SV_WithTag.sh`

```bash
#start WithTag chatbot Python Server
cd /path/to/Chatbot-Server/WithTag/
source /root/.bashrc
python3 AWWW_web.py
```

Then we needs to make the scripts can be execute, add the attribute to the sh files.

`# chmod +x Start_SV_*.sh`

After this prepration, we needs to create a script execute above start-server script with screen command for the custom service running.

Here call it 'start-all.sh'. for the service been correctly referenced this script, we create it under '/usr/bin/'.

`# cd /usr/bin/`

`# vim start-all.sh`

```bash
#start all shell script
cd /path/to/Start_SV_*.sh/
screen -S NoTagServer -d -m /path/to/Start_SV_*.sh/Start_SV_NoTag.sh
screen -S WithTagServer -d -m /path/to/Start_SV_*.sh/Start_SV_WithTag.sh
```

And needs to let start-all.sh been executable.

`# chmod +x start-all.sh`

Finally create the custom service for python server scripts and NVidia DIGITS to run on startup.

Needs to create in both '/lib/systemd/system/' and '/etc/systemd/system/'.

`# cd /lib/systemd/system/`

`# vim aikernel.service`

```bash
[Unit]
Description=AIkernel use service.

[Service]
Type=forking
ExecStart=/bin/bash /usr/bin/start-all.sh

[Install]
WantedBy=multi-user.target
```

`# vim digits.service`

```bash
[Unit]
Description="Start NVidia DIGITS server. port 5000."

[Service]
Environment=PATH=/usr/local/cuda-10.1/bin/:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games$
Environment=CAFFE_ROOT=/root/caffe
Environment=LD_LIBRARY_PATH=/usr/local/cuda-10.1/bin/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
ExecStart=/bin/bash /path/to/DIGITS/digits-devserver
WorkingDirectory=/path/to/DIGITS/

[Install]
WantedBy=multi-user.target
```

Then make them both workable.

`# cp aikernel.service /etc/systemd/system/aikernel.service`

`# cp digits.service /etc/systemd/system/digits.service`

`# chmod 644 /etc/systemd/system/aikernel.service`

`# chmod 644 /etc/systemd/system/digits.service`

Test the service can normally start.

`# systemctl start aikernel`

`# systemctl start digits`

`# screen -ls`

`# ps aux | grep digits`

The last, if everything works properly, using enable to make it run with startup.

`# systemctl enable aikernel`

`# systemctl enable digits`

That's it!!

`=================================Separate=Line========================================`

# システムと一緒に実行


AI KernelをUbuntu OSシステムが開いの間に実行したいなら、Systemdを使ってカスタムサービスを動います。

ちなみに、Pythonスクリプトを実行するの同時に、ログを見たいから。あとは簡単なデバッグをできるように、screenのコメントと一緒に使います。

初めてのスクリプトは一回ですべでのAWWW_web.pyサーバースクリプトを実行できるため、下の二つスクリプトを作ります。

`# vim Start_SV_NoTag.sh`

```bash
#start NoTag chatbot Python Server
cd /コードを置いてる/のディレクトリ/Chatbot-Server/NoTag/
source /root/.bashrc
python3 AWWW_web.py
```

`# vim Start_SV_WithTag.sh`

```bash
#start WithTag chatbot Python Server
cd /コードを置いてる/のディレクトリ/Chatbot-Server/WithTag/
source /root/.bashrc
python3 AWWW_web.py
```

こうして、スクリプトをシステムに実行できるように、実行の属性をshファイルに追加する。

`# chmod +x Start_SV_*.sh`

この準備が完了のち、これからの仕事ができる。　カスタムサービスを出来るために、一つスクリプトを全部のstart-serverスクリプトをscreenの環境に一気に実行する。 

ここは'start-all.sh'を命名する。　カスタムサービスを正しい実行できるように、このスクリプトを'/usr/bin/'の場所に作る。

`# cd /usr/bin/`

`# vim start-all.sh`

```bash
#start all shell script
cd /コードを置いてる/のディレクトリ/Start_SV_*.sh/
screen -S NoTagServer -d -m /コードを置いてる/のディレクトリ/Start_SV_*.sh/Start_SV_NoTag.sh
screen -S WithTagServer -d -m /コードを置いてる/のディレクトリ/Start_SV_*.sh/Start_SV_WithTag.sh
```

そうして実行の属性をstart-all.shファイルに追加する。

`# chmod +x start-all.sh`

こうやって、pythonサーバースクリプトとNVidia DIGITSのはスクリプトはカスタムサービスを作たら、スタートアップの時に実行できる。

カスタムサービスは'/lib/systemd/system/'と'/etc/systemd/system/'この二つの場所に存在して、実行できる。

`# cd /lib/systemd/system/`

`# vim aikernel.service`

```bash
[Unit]
Description=AIkernel use service.

[Service]
Type=forking
ExecStart=/bin/bash /usr/bin/start-all.sh

[Install]
WantedBy=multi-user.target
```

`# vim digits.service`

```bash
[Unit]
Description="Start NVidia DIGITS server. port 5000."

[Service]
Environment=PATH=/usr/local/cuda-10.1/bin/:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games$
Environment=CAFFE_ROOT=/root/caffe
Environment=LD_LIBRARY_PATH=/usr/local/cuda-10.1/bin/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
ExecStart=/bin/bash /コードを置いてる/のディレクトリ/DIGITS/digits-devserver
WorkingDirectory=/コードを置いてる/のディレクトリ/DIGITS/

[Install]
WantedBy=multi-user.target
```

そうして、カスタムサービスを実行できるように、下のスクリプトも実行する。

`# cp aikernel.service /etc/systemd/system/aikernel.service`

`# cp digits.service /etc/systemd/system/digits.service`

`# chmod 644 /etc/systemd/system/aikernel.service`

`# chmod 644 /etc/systemd/system/digits.service`

今はカスタムサービスを実行できるかなと、試してます。

`# systemctl start aikernel`

`# systemctl start digits`

`# screen -ls`

`# ps aux | grep digits`

最後はもし、前の実行結果は問題ないなら、enableを使って、スタートアップの時にカスタムサービスを実行する。

`# systemctl enable aikernel`

`# systemctl enable digits`

以上は全部の設定です。

`====================================キリ=セン==========================================`

# 於系統開機時一起執行

為了讓AI Kernel在Ubuntu OS開機時跟系統一起啟動，將必須藉由systemd來觸發。

同時為了方便讓python程式在執行時還能觀察狀況，將結合screen所產生的環境進行程式執行。

接下來要產生可以一次執行AWWW_web.py伺服器主程式的腳本，將建立以下兩個腳本。

`# vim Start_SV_NoTag.sh`

```bash
#start NoTag chatbot Python Server
cd /路徑/到/Chatbot-Server/NoTag/
source /root/.bashrc
python3 AWWW_web.py
```

`# vim Start_SV_WithTag.sh`

```bash
#start WithTag chatbot Python Server
cd /路徑/到/Chatbot-Server/WithTag/
source /root/.bashrc
python3 AWWW_web.py
```

接著我們要增加可執行的屬性讓此兩個腳本可被系統直接執行。

`# chmod +x Start_SV_*.sh`

完成這些準備後，我們需要把以上兩個腳本可以一次用screen的環境作動，以利後續的客製化service可執行主程式。

所以我使用'start-all.sh'為它的名稱。 為了讓後續建立的客製化服務可正確的參照到這些腳本，我們把它放在'/usr/bin/'的目錄下。

`# cd /usr/bin/`

`# vim start-all.sh`

```bash
#start all shell script
cd /路徑/到/Start_SV_*.sh/
screen -S NoTagServer -d -m /路徑/到/Start_SV_*.sh/Start_SV_NoTag.sh
screen -S WithTagServer -d -m /路徑/到/Start_SV_*.sh/Start_SV_WithTag.sh
```

接著我們要讓start-all.sh可被執行。

`# chmod +x start-all.sh`

接下來即可建立客製化服務以讓系統可以開機時讓以上伺服器腳本與NVidia DIGITS服務能開機啟動。

客製化的服務必須同時存在於'/lib/systemd/system/'與'/etc/systemd/system/'路徑下。

`# cd /lib/systemd/system/`

`# vim aikernel.service`

```bash
[Unit]
Description=AIkernel use service.

[Service]
Type=forking
ExecStart=/bin/bash /usr/bin/start-all.sh

[Install]
WantedBy=multi-user.target
```

`# vim digits.service`

```bash
[Unit]
Description="Start NVidia DIGITS server. port 5000."

[Service]
Environment=PATH=/usr/local/cuda-10.1/bin/:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games$
Environment=CAFFE_ROOT=/root/caffe
Environment=LD_LIBRARY_PATH=/usr/local/cuda-10.1/bin/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
ExecStart=/bin/bash /路徑/到/DIGITS/digits-devserver
WorkingDirectory=/路徑/到/DIGITS/

[Install]
WantedBy=multi-user.target
```

接著讓兩個客製化的服務可正確被啟動。

`# cp aikernel.service /etc/systemd/system/aikernel.service`

`# cp digits.service /etc/systemd/system/digits.service`

`# chmod 644 /etc/systemd/system/aikernel.service`

`# chmod 644 /etc/systemd/system/digits.service`

接著用以下指令測試這些服務可被正常執行。

`# systemctl start aikernel`

`# systemctl start digits`

`# screen -ls`

`# ps aux | grep digits`

最後，若一切順利，則只需用enable來告知系統開機必須啟動這兩個服務。

`# systemctl enable aikernel`

`# systemctl enable digits`

這樣就大功告成了!!
