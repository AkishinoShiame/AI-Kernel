# AWWW_web.py English Explane

## NoTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory, session    # Base Server Library, using Flask
from werkzeug import secure_filename        # Library to Reject some extension been upload
# belows include self-define libs and func
from AWWW_wav_to_spectro import wav2sep      # Import Function of making wav speech sound to spectrogram for NVidia DIGITS.
from AWWW_wav_to_STT import input_filename    # Import Function of using Google Speech API to perform speech to text job
from AWWW_jiebaCut import func_cut          # Import Function of sentence split to words applied on Chinese language.
from AWWW_chatbot_response import Chat_with_Bot    # Import Function of chatbot interaction reply. 
from AWWW_pic_pred import pred               # Import Function of speech spectrogram for NVidia DIGITS to predict the emotions.
# aboves include self-define libs and func
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # Initial Chatbot
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # Define for trained model 


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # server config define


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # Setup acception of available filetype.


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # Save the upload file to server, upload folder
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　Translate wav file to Spectrogram for emotion recognition.
            # below finished word translate and cutting
            
            asking = func_cut(input_filename(filename))
            responsing = Chat_with_Bot(asking, AkishinoProjectBot)
            print(responsing)
            
            #above print the predition of response without tag
            ans = pred(filename)    # for the emotion predict result.
            # below decode json from nvidia digits output
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
			# below for debug used code. 
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
			# below formalized the correct output for web return.
            return (ans.decode('utf8') + "|" + responsing)
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload NoTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=6060)    # Main server start, using port 6060 for NoTag. Port can be change for the needs.
```

## WithTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory, session    # Base Server Library, using Flask
from werkzeug import secure_filename        # Library to Reject some extension been upload
# belows include self-define libs and func
from AWWW_wav_to_spectro import wav2sep      # Import Function of making wav speech sound to spectrogram for NVidia DIGITS.
from AWWW_wav_to_STT import input_filename    # Import Function of using Google Speech API to perform speech to text job
from AWWW_jiebaCut import func_cut          # Import Function of sentence split to words applied on Chinese language.
from AWWW_chatbot_response import Chat_with_Bot    # Import Function of chatbot interaction reply. 
from AWWW_pic_pred import pred               # Import Function of speech spectrogram for NVidia DIGITS to predict the emotions.
# aboves include self-define libs and func
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # Initial Chatbot
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # Define for trained model 


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # server config define


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # Setup acception of available filetype.


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # Save the upload file to server, upload folder
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　Translate wav file to Spectrogram for emotion recognition.
            # below finished word translate and cutting
            
            asking = func_cut(input_filename(filename))
            # responsing = Chat_with_Bot(asking)
            # print(responsing)
            
            # below for the emotion predict result.
            ans = pred(filename)
            # below decode json from nvidia digits output
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
            # below doing respone with tagging
            responsing = " "
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
                responsing = Chat_with_Bot("自然 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
                responsing = Chat_with_Bot("負面 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
                responsing = Chat_with_Bot("正面 " + asking, AkishinoProjectBot)
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
			# below formalized the correct output for web return.
            return (ans.decode('utf8') + "|" + responsing)
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload WithTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=4040)    # Main server start, using port 6060 for WithTag. Port can be change for the needs.
```

# AWWW_web.py 日本語説明

## NoTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory, session    # サーバー基盤なライブラリ、Flaskを使う。
from werkzeug import secure_filename        # 安全確保の為、不適切なファイルアップロードをブロックするなライブラリ
# この下は自己定義な機能とライブラリ
from AWWW_wav_to_spectro import wav2sep      # NVidia DIGITSを使うために、音声データをスペクトログラム画像に変換する機能を登録する。
from AWWW_wav_to_STT import input_filename    # Google Speech APIを利用して、音声資料を文字に変換する機能を登録する。
from AWWW_jiebaCut import func_cut          # 中国語の対話を単語するの機能を登録する。
from AWWW_chatbot_response import Chat_with_Bot    # チャットボットの返事を出る機能を登録する。　 
from AWWW_pic_pred import pred               # スペクトログラム画像をNVidia DIGITSに感情を分別するの機能を登録する。
# この上は自己定義な機能とライブラリ
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # チャットボットを初期化
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # 訓練したのモデルを定義する。


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # サーバーの設定を定義する。


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # アップロードできるのファイルタイプを制限される。


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # uploadのフォルダにサーバーまでアップロードしたの音声録音をほぞんする。
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　感情認識の為に音声をスペクトログラム画像に変換する。
            # 下は音声を文字に変換すると単語で単位を切り分けの機能。
            
            asking = func_cut(input_filename(filename))
            responsing = Chat_with_Bot(asking, AkishinoProjectBot)
            print(responsing)
            
            # 上はチャットボットが感情認識付けないの返事を出す。
            ans = pred(filename)
            # 下はjsonの形にnvidia digitsからの結果を正しい変換する。
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
			# 下は試して用のコード
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
			# 下は資料を正しいフォマードに変更する、そうして、サーバーからの返事。
            return (ans.decode('utf8') + "|" + responsing)
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload NoTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=6060)    # メインサービスが始まるのコード、ポート6060を使って感情認識がないの返事を出す。ポートは好きな場合によって変更できる。
```

## WithTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory    # サーバー基盤なライブラリ、Flaskを使う。
from werkzeug import secure_filename        # 安全確保の為、不適切なファイルアップロードをブロックするなライブラリ
# この下は自己定義な機能とライブラリ
from AWWW_wav_to_spectro import wav2sep      # NVidia DIGITSを使うために、音声データをスペクトログラム画像に変換する機能を登録する。
from AWWW_wav_to_STT import input_filename    # Google Speech APIを利用して、音声資料を文字に変換する機能を登録する。
from AWWW_jiebaCut import func_cut          # 中国語の対話を単語するの機能を登録する。
from AWWW_chatbot_response import Chat_with_Bot    # チャットボットの返事を出る機能を登録する。　 
from AWWW_pic_pred import pred               # スペクトログラム画像をNVidia DIGITSに感情を分別するの機能を登録する。
# この上は自己定義な機能とライブラリ
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # チャットボットを初期化
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # 訓練したのモデルを定義する。


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # サーバーの設定を定義する。


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # アップロードできるのファイルタイプを制限される。


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # uploadのフォルダにサーバーまでアップロードしたの音声録音をほぞんする。
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　感情認識の為に音声をスペクトログラム画像に変換する
            # 下は音声を文字に変換すると単語で単位を切り分けの機能。
            
            asking = func_cut(input_filename(filename))
            # responsing = Chat_with_Bot(asking)
            # print(responsing)
            
            # 下は感情認識の結果をNvidia　DIGITSのサーバーに問い合わす。
            ans = pred(filename)
            # 下はjsonの形にnvidia digitsからの結果を正しい変換する。
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
            #　下はチャットボットが感情認識付けての返事を出す。
            responsing = " "
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
                responsing = Chat_with_Bot("自然 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
                responsing = Chat_with_Bot("負面 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
                responsing = Chat_with_Bot("正面 " + asking, AkishinoProjectBot)
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
			# 下は資料を正しいフォマードに変更する、そうして、サーバーからの返事。
            return (ans.decode('utf8') + "|" + responsing)
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload WithTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=4040)    # メインサービスが始まるのコード、ポート4040を使って感情認識するな返事を出す。ポートは好きな場合によって変更できる。
```

# AWWW_web.py 中文解說

## NoTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory, session    # 伺服器基礎所需用的函示庫、使用Flask。
from werkzeug import secure_filename        # 基本資安，防止具不正確副檔名的檔案被上傳
# 以下是自定義的函示庫與功能
from AWWW_wav_to_spectro import wav2sep      # 匯入將錄製的語音檔轉換成聲紋圖給NVidia DIGITS使用的功能。
from AWWW_wav_to_STT import input_filename    # 匯入利用Google Speech API所提供的服務進行語音轉文字的功能。
from AWWW_jiebaCut import func_cut          # 匯入結巴斷詞，將整個中文句子進行斷詞以供聊天機器人作動。
from AWWW_chatbot_response import Chat_with_Bot    # 匯入提供聊天機器人產生回覆的程式。 
from AWWW_pic_pred import pred               # 匯入將聲紋圖經由本程式傳至NVidia DIGITS進行情感判別。 
# 以上是自定義的函示庫與功能
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # 初始化聊天機器人程式
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # 定義所要使用，已經訓練好的模型


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # 定義伺服器相關設定


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # 限制可上傳的檔案形式


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # 將上傳至伺服器的聲音檔存至upload資料夾
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　將語音轉換成聲紋圖以供情感判別使用
            # 底下的程式碼提供語音轉文字與語句斷詞的功能
            
            asking = func_cut(input_filename(filename))
            responsing = Chat_with_Bot(asking, AkishinoProjectBot)
            print(responsing)
            
            # 上方的程式碼用以產出不含感情輸入的機器人回覆
            ans = pred(filename)
            # 底下為將nvidia digits回傳的輸出用正確的json格式進行轉換
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
			# 底下為測試用程式碼
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
            return (ans.decode('utf8') + "|" + responsing)    # 把前面處理好的資料進行整理與格式正規化並回傳
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload NoTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=6060)    # 伺服器的主函示，使用6060port進行不帶情感的回覆。Port可根據需求進行更換
```

## WithTag/AWWW_web.py

```python
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 12 17:18:16 2016
@author: winpython
"""

import os
from flask import Flask, request, send_file, send_from_directory    # 伺服器基礎所需用的函示庫、使用Flask。
from werkzeug import secure_filename        # 基本資安，防止具不正確副檔名的檔案被上傳
# 以下是自定義的函示庫與功能
from AWWW_wav_to_spectro import wav2sep      # 匯入將錄製的語音檔轉換成聲紋圖給NVidia DIGITS使用的功能。
from AWWW_wav_to_STT import input_filename    # 匯入利用Google Speech API所提供的服務進行語音轉文字的功能。
from AWWW_jiebaCut import func_cut          # 匯入結巴斷詞，將整個中文句子進行斷詞以供聊天機器人作動。
from AWWW_chatbot_response import Chat_with_Bot    # 匯入提供聊天機器人產生回覆的程式。 
from AWWW_pic_pred import pred               # 匯入將聲紋圖經由本程式傳至NVidia DIGITS進行情感判別。 
# 以上是自定義的函示庫與功能
import numpy as np
import json
from chatbot import chatbot
AkishinoProjectBot = chatbot.Chatbot()        # 初始化聊天機器人程式
AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])    # 定義所要使用，已經訓練好的模型


app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads/'
app.config['ALLOWED_EXTENSIONS'] = set(['wave', 'wav'])      # 定義伺服器相關設定


def allowed_file(filename):
    return '.' in filename and \
        filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']    # 限制可上傳的檔案形式


@app.route("/", methods=['get', 'POST'])
def index():
    if request.method == 'POST':
        file = request.files['file']
         
        if file and allowed_file(file.filename):
            filename = secure_filename(file.filename)
            file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))    # 將上傳至伺服器的聲音檔存至upload資料夾
            # return redirect(url_for('uploaded_file',filename = filename))
            wav2sep(filename)                              #　將語音轉換成聲紋圖以供情感判別使用
            # 底下的程式碼提供語音轉文字與語句斷詞的功能
            
            asking = func_cut(input_filename(filename))
            # responsing = Chat_with_Bot(asking)
            # print(responsing)
            
            #底下將以轉換好的聲紋圖吐給NVidia DIGITS做情感辨識
            ans = pred(filename)
            # 底下為將nvidia digits回傳的輸出用正確的json格式進行轉換
            jsondec = json.loads(ans.decode('utf8'))
            jsondec = jsondec['predictions']
            jsondec = str(jsondec).replace("[", "")
            jsondec = str(jsondec).replace("]", "")
            jsondec = "{" + jsondec + "}"
            jsondec = jsondec.replace("',", "':")
            jsondec = jsondec.replace("'", '"')
            jsondec = json.loads(jsondec)
            maxpred = (max(jsondec['Natural'], jsondec['Negative'], jsondec['Positive']))
            # 下方的程式碼用以產出具備感情輸入的機器人回覆
            responsing = " "
            if maxpred == jsondec['Natural']:
                print("自然 : " + str(jsondec['Natural']))
                responsing = Chat_with_Bot("自然 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Negative']:
                print("負面 : " + str(jsondec['Negative']))
                responsing = Chat_with_Bot("負面 " + asking, AkishinoProjectBot)
            elif maxpred == jsondec['Positive']:
                print("正面 : " + str(jsondec['Positive']))
                responsing = Chat_with_Bot("正面 " + asking, AkishinoProjectBot)
            else:
                print("???_black-man")
            
            #print(ans.decode('utf8').replace("\n"," "))
            
            # return ans.decode('utf8')
            return (ans.decode('utf8') + "|" + responsing)    # 把前面處理好的資料進行整理與格式正規化並回傳
    return'''
    <doctype html>
    <title>test upload</title>
    <h1>Upload WithTag</h1>
    <form action="" method="post" enctype=multipart/form-data>
        <p><input type=file name=file>
           <input type=submit name=upload></p>
    </form>
    '''

@app.route("/<filename>")
def uploaded_file(filename):
    return send_from_directory(app.config['UPLOAD_FOLDER'],filename)

if __name__ == "__main__" :
    app.run(host='0.0.0.0',port=4040)    # 伺服器的主函示，使用4040port進行包含情感的機器回覆。Port可根據需求進行更換
```
