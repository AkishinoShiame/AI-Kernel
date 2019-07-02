# AWWW_pic_pred.py English Explane

```python

import subprocess
import os

def pred(filename):
	bashCommand = "curl localhost/models/images/classification/classify_one.json -XPOST -F job_id=20170612-135113-88f4 -F image_file=@/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/test.jpg" # This is using NVidia DIGITS API to perform predict, job_id is assign for trained jobs.
	delfilename = "test.jpg"                                                                  # the Pic needs to be predict
	path = "/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/uploads/"
	pathname = os.path.abspath(os.path.join(path, filename))
	output = subprocess.check_output(['bash','-c', bashCommand])                                 # let python can call system for bash command.
	os.remove(delfilename)                                                                    # delete the upload picture.
	if pathname.startswith(path):
		os.remove(pathname)
	return output

```

# AWWW_pic_pred.py 日本語説明

```python

import subprocess
import os

def pred(filename):
	bashCommand = "curl localhost/models/images/classification/classify_one.json -XPOST -F job_id=20170612-135113-88f4 -F image_file=@/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/test.jpg"  # これはNVidia DIGITS APIを使って、資料を予測する。 job_idは訓練したのモデルを提供する。
	delfilename = "test.jpg"                                                                  # ここは予測したいの画像。
	path = "/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/uploads/"
	pathname = os.path.abspath(os.path.join(path, filename))
	output = subprocess.check_output(['bash','-c', bashCommand])                                 # ここはPythonをシステムシェルスクリプトを使えためのコード。
	os.remove(delfilename)                                                                    # 使用したの画像を消す。
	if pathname.startswith(path):
		os.remove(pathname)
	return output

```

# AWWW_pic_pred.py 中文解說

```python

import subprocess
import os

def pred(filename):
	bashCommand = "curl localhost/models/images/classification/classify_one.json -XPOST -F job_id=20170612-135113-88f4 -F image_file=@/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/test.jpg"  # 這行是調用NVidia DIGITS所提供的API，其中job_id是拿來告知已經訓練好的模型資料。
	delfilename = "test.jpg"                                                                 #這邊定義了想要拿來辨識的聲紋圖名稱
	path = "/home/akishinoshiame/AkishinoProject_flask_beta1/WithTag/uploads/"
	pathname = os.path.abspath(os.path.join(path, filename))
	output = subprocess.check_output(['bash','-c', bashCommand])                                #此處由Python去調用系統進行linux shell的指令執行
	os.remove(delfilename)                                                                   #將使用過的聲紋圖刪除，避免佔用系統
	if pathname.startswith(path):
		os.remove(pathname)
	return output

```
