# AWWW_wav_to_STT.py English Explane

```python

#!/usr/bin/env python3
# Requires PyAudio and PySpeech.

import speech_recognition as sr                          # Using python speech recognition library for the easy access.
from os import path


def input_filename (filename):
    # Read from wav
    AUDIO_FILE = path.join(path.join(path.dirname(path.realpath(__file__)), "uploads/" ), filename)


    r = sr.Recognizer()
    """  # recorder for testing
    with sr.Microphone() as source:
        print("Say something!")
        audio = r.listen(source)
    """
    # audio = wave.open(filename, "rb")
    print(AUDIO_FILE)
    with sr.AudioFile(AUDIO_FILE) as source:
        audio = r.record(source)                           # read the entire audio file

    # Speech recognition using Google Speech Recognition
    try:
        # for testing purposes, we're just using the default API key
        # to use another API key, use `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
        # instead of `r.recognize_google(audio)`
        #print("You said: " + r.recognize_google(audio, language='zh-TW'))
        return r.recognize_google(audio, language='zh-TW')
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))
#    return r.recognize_google(audio, language='zh-TW')
""" # this is for audio testing purposes
if __name__ == "__main__":
    input_filename("test.wav")
"""

```

# AWWW_wav_to_STT.py 日本語説明

```python

#!/usr/bin/env python3
# Requires PyAudio and PySpeech.

import speech_recognition as sr                          # 簡単アクセスの為にpythonのspeech recognitionライブラリを使う。
from os import path


def input_filename (filename):
    # Read from wav
    AUDIO_FILE = path.join(path.join(path.dirname(path.realpath(__file__)), "uploads/" ), filename)


    r = sr.Recognizer()
    """  # テストの為に録音する
    with sr.Microphone() as source:
        print("Say something!")
        audio = r.listen(source)
    """
    # audio = wave.open(filename, "rb")
    print(AUDIO_FILE)
    with sr.AudioFile(AUDIO_FILE) as source:
        audio = r.record(source)                           # 音声の全部を導入する。

    # 音声認識をする、Google Speech Recognitionを使う。
    try:
        # テストだから、ここはデフォルトのAPI key設定を使う。
        # カスタマイズのAPI keyを使うとき、`r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`にコードを変わる。
        # これだけじゃなくで： `r.recognize_google(audio)`
        #print("You said: " + r.recognize_google(audio, language='zh-TW'))
        return r.recognize_google(audio, language='zh-TW')
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))
#    return r.recognize_google(audio, language='zh-TW')
"""  # 音声テストのスクリプト
if __name__ == "__main__":
    input_filename("test.wav")
"""

```

# AWWW_wav_to_STT.py 中文解說

```python

#!/usr/bin/env python3
# Requires PyAudio and PySpeech.

import speech_recognition as sr                         # 為了方便調用，使用python的speech recognition的函示庫
from os import path


def input_filename (filename):
    # Read from wav
    AUDIO_FILE = path.join(path.join(path.dirname(path.realpath(__file__)), "uploads/" ), filename)


    r = sr.Recognizer()
    """   # 錄音程式，拿來測試用
    with sr.Microphone() as source:
        print("Say something!")
        audio = r.listen(source)
    """
    # audio = wave.open(filename, "rb")
    print(AUDIO_FILE)
    with sr.AudioFile(AUDIO_FILE) as source:
        audio = r.record(source)  # 讀取整個完整的聲音檔

    # 使用Google Speech Recognition的雲端API進行語音轉文字
    try:
        # 在此使用預設API key來作為測試用途。
        # 若要用其他的API key使用並替換這個程式碼 `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
        # 而非使用 `r.recognize_google(audio)`
        #print("You said: " + r.recognize_google(audio, language='zh-TW'))
        return r.recognize_google(audio, language='zh-TW')
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))
#    return r.recognize_google(audio, language='zh-TW')
"""  #  這是在測試時使用的程式碼
if __name__ == "__main__":
    input_filename("test.wav")
"""

```
