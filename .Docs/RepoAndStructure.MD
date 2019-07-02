# Repo & Structure

Explan the main function & structure of this AI kernel system.

## Repository

```
AI Kernel (Graduated-Project) 
├── Chinese-Speech-Emotion-Datasets    - The datasets used by this system. 
├── Virtual-Elderly-Chatbot-App    - Unity project for create client APPs used.
│    └── Assets
│        ├── EasyTTS    - Plugins buy from Unity Store.If you want to reuse this project, please buy the plugin again.
│        ├── Scripts
│        │   ├── ChangeScene.cs    - The function for changing Screen from main to other function
│        │   ├── EasyTTSUtil.cs    - The function of the Text to Speech Plugin.
│        │   ├── GonWe.cs    - Create Text to Speech function for calling
│        │   ├── LoadAndChangeModel.cs    - Make main scene record bottom and anime model work.
│        │   ├── RecordAndUpload.cs    - Create record and upload function for bottom to work, co-work with Server API.
│        │   ├── SavWav.cs    - Function to save record as temp WAV file, upload used only.
│        │   ├── Scene_Menu
│        │   │   └── SwapScroolTex.cs    - Let the anime model for selective option.
│        │   ├── ScriptsForIPAndEmotion.cs    - For the config if the server IP chanes or Emotion reply debug.
│        │   ├── SpeechSound.cs    - Perform different pre-record sound for question asking.
│        │   └── WebcamBG.cs    - Background to simulate as AR.
│        └── Scripts.meta
├── Virtual-Elderly-Chatbot-IOS-Project-IOS-12    - The Xcode project build from Unity Project. 
└── Virtual-Elderly-Chatbot-Server-Structure    - The main server of this AI kernel service.
     ├── NoTag                        - The pure ChatBot. 
     │     ├── AWWW_chatbot_response.py    - Function of chatbot interaction reply. 
     │     ├── AWWW_jiebaCut.py    - Function of sentence split to words applied on Chinese language.
     │     ├── AWWW_pic_pred.py    - Function of speech spectrogram for NVidia DIGITS to predict the emotions. 
     │     ├── AWWW_wav_to_STT.py    - Function of using Google Speech API to perform speech to text job. 
     │     ├── AWWW_wav_to_spectro.py    - Function of making wav speech sound to spectrogram for NVidia DIGITS. 
     │     └── AWWW_web.py    - Main web server for AI kernel API.
     └── WithTag                        - The emotion added ChatBot.  
            ├── AWWW_chatbot_response.py    - Function of chatbot interaction reply. 
            ├── AWWW_jiebaCut.py    - Function of sentence split to words applied on Chinese language. 
            ├── AWWW_pic_pred.py    - Function of speech spectrogram for NVidia DIGITS to predict the emotions.    
            ├── AWWW_wav_to_STT.py    - Function of using Google Speech API to perform speech to text job.    
            ├── AWWW_wav_to_spectro.py    - Function of making wav speech sound to spectrogram for NVidia DIGITS. 
            └── AWWW_web.py    - Main web server for AI kernel API.
```

## System Structure

![alt System Structure](https://i.imgur.com/l45h0UP.png)

`=================================Separate=Line========================================`

# リポジトリと構造

このAI kernelシステムのメイン構造と機能を説明する。

## リポジトリ

```
AI Kernel (Graduated-Project) 
├── Chinese-Speech-Emotion-Datasets    - このシステムを使うの訓練資料。　
├── Virtual-Elderly-Chatbot-App    - クライアントのアプリを作る、Unityのプロジェクト。　
│    └── Assets
│        ├── EasyTTS    -　Unityストアに買ったのプラグインです。もし利用が必要の場合は、ストアにもう一度買ってください。
│        ├── Scripts
│        │   ├── ChangeScene.cs    - メイン画面を変わえるの機能。
│        │   ├── EasyTTSUtil.cs    - 文字を音声に答えするのプラグイン。
│        │   ├── GonWe.cs    - 文字に音声を変換とスピーチを出す可能の機能。
│        │   ├── LoadAndChangeModel.cs    - メイン画面が録音ボタンとアニメモデルが動けますの機能。
│        │   ├── RecordAndUpload.cs    - 録音とサーバーにアップロードできるの機能、サーバーのAPIと一緒に共同作業。
│        │   ├── SavWav.cs    - WAVEファイルに音声を保存する。
│        │   ├── Scene_Menu
│        │   │   └── SwapScroolTex.cs    - アニメモデルが選択可能な機能。
│        │   ├── ScriptsForIPAndEmotion.cs    - サーバーIPを変わえるとデバッグの感情認識資料を表現する。るとデバッグの感情認識資料を表現する。
│        │   ├── SpeechSound.cs    - 幾つの問題を用意したそうして変わって出来るな機能。
│        │   └── WebcamBG.cs    - アプリにAR感の機能を作る。
│        └── Scripts.meta
├── Virtual-Elderly-Chatbot-IOS-Project-IOS-12    - UnityのプロジェクトをビルドしたのXcodeプロジェクト。　
└── Virtual-Elderly-Chatbot-Server-Structure    - このAI Kernelサービスのメインプログラム。　
     ├── NoTag                        - 普通のチャットボット。　
     │     ├── AWWW_chatbot_response.py    - チャットボットの返事を出る機能。　
     │     ├── AWWW_jiebaCut.py    - 中国語の対話を単語するの機能。　
     │     ├── AWWW_pic_pred.py    - スペクトログラム画像をNVidia DIGITSに感情を分別するの機能。　
     │     ├── AWWW_wav_to_STT.py    - Google Speech APIを利用して、音声資料を文字に変換する機能。　
     │     ├── AWWW_wav_to_spectro.py    - NVidia DIGITSを使うために、音声データをスペクトログラム画像に変換する機能。　
     │     └── AWWW_web.py    - AI kernelのメインウェブサービスのアプリケーションプログラミングインタフェース。　
     └── WithTag                        - 感情認識が付きのチャットボット。　
            ├── AWWW_chatbot_response.py    - チャットボットの返事を出る機能。　 
            ├── AWWW_jiebaCut.py    - 中国語の対話を単語するの機能。　
            ├── AWWW_pic_pred.py    - スペクトログラム画像をNVidia DIGITSに感情を分別するの機能。　
            ├── AWWW_wav_to_STT.py    - Google Speech APIを利用して、音声資料を文字に変換する機能。　   
            ├── AWWW_wav_to_spectro.py    - NVidia DIGITSを使うために、音声データをスペクトログラム画像に変換する機能。　
            └── AWWW_web.py    - AI kernelのメインウェブサービスのアプリケーションプログラミングインタフェース。　
```

## システムの構造

![alt システムの構造](https://i.imgur.com/LFFbMR0.png)

`====================================キリ=セン==========================================`

# GitHub源與架構

本文件將解釋AI kernel系統的構造與相關功能。

## GitHub源

```
AI Kernel (Graduated-Project) 
├── Chinese-Speech-Emotion-Datasets    - 此系統所使用的訓練資料集。 
├── Virtual-Elderly-Chatbot-App    - 使用Unity所建置客戶端程式的專案。 
│    └── Assets
│        ├── EasyTTS    - 從Unity商店購買下來的文字轉語音插件，如有要重複使用此專案請依規定購買此套件。
│        ├── Scripts
│        │   ├── ChangeScene.cs    - 轉換場景的程式碼，提供主畫面跟其他功能畫面的切換。
│        │   ├── EasyTTSUtil.cs    - 文字轉語音插件隨附的程式碼
│        │   ├── GonWe.cs    - 產生可被呼叫的文字轉語音功能。
│        │   ├── LoadAndChangeModel.cs    - 使主畫面的錄音按鈕與虛擬角色可動的功能
│        │   ├── RecordAndUpload.cs    - 錄音與上傳給伺服端的功能，並取得回傳資訊。將伺服器API串接與連動。
│        │   ├── SavWav.cs    - 提供暫時性把錄製的語音轉成WAVE檔以供一次性上傳使用。
│        │   ├── Scene_Menu
│        │   │   └── SwapScroolTex.cs    - 切換虛擬人物角色的程式碼。
│        │   ├── ScriptsForIPAndEmotion.cs    - 提供伺服器更換IP與測試情感有被正確回傳的功能。
│        │   ├── SpeechSound.cs    - 提供預設的問題，提供與播放預錄好得引導問句。
│        │   └── WebcamBG.cs    - 產生如同有AR感覺的背景。
│        └── Scripts.meta
├── Virtual-Elderly-Chatbot-IOS-Project-IOS-12    - 由Unity編譯與建置出的Xcode專案，為產生IOS手機程式用。
└── Virtual-Elderly-Chatbot-Server-Structure    - 產生本AI kernel所必須的主程式。
     ├── NoTag                        - 純粹的聊天機器人。 
     │     ├── AWWW_chatbot_response.py    - 提供聊天機器人產生回覆的程式。 
     │     ├── AWWW_jiebaCut.py    - 結巴斷詞，將整個中文句子進行斷詞以供聊天機器人作動。 
     │     ├── AWWW_pic_pred.py    - 將聲紋圖經由本程式傳至NVidia DIGITS進行情感判別。 
     │     ├── AWWW_wav_to_STT.py    - 利用Google Speech API所提供的服務進行語音轉文字的功能。 
     │     ├── AWWW_wav_to_spectro.py    - 將錄製的語音檔轉換成聲紋圖給NVidia DIGITS使用的功能。 
     │     └── AWWW_web.py    - 產AI kernel的主要API服務的網頁伺服器主程式。 
     └── WithTag                        - 具備感情偵測的聊天機器人。 
            ├── AWWW_chatbot_response.py    - 提供聊天機器人產生回覆的程式。 
            ├── AWWW_jiebaCut.py    - 結巴斷詞，將整個中文句子進行斷詞以供聊天機器人作動。 
            ├── AWWW_pic_pred.py    - 將聲紋圖經由本程式傳至NVidia DIGITS進行情感判別。 
            ├── AWWW_wav_to_STT.py    - 利用Google Speech API所提供的服務進行語音轉文字的功能。
            ├── AWWW_wav_to_spectro.py    - 將錄製的語音檔轉換成聲紋圖給NVidia DIGITS使用的功能。 
            └── AWWW_web.py    - 產AI kernel的主要API服務的網頁伺服器主程式。 
```

## 系統架構

![alt 系統架構](https://i.imgur.com/wHAjpPK.png)
