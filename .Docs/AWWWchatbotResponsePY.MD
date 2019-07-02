# AWWW_chatbot_response.py English Explane

```python3

from chatbot import chatbot #Using this line to import the DeepQA chatbot main service

def Chat_with_Bot(sentence_in, AkishinoProjectBot):
    # AkishinoProjectBot = chatbot.Chatbot()      # uncommand to using for main function testing 
    # AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon']) # uncommand to using for main function testing, assign for the trained model
    # --modelTag    taiwa20170709
    # --test        daemon
    answer = AkishinoProjectBot.daemonPredict(sentence=sentence_in)  # This part is asking Chatbot to reply for "sentence_in"
    # AkishinoProjectBot.daemonClose()
    return answer



if __name__ == "__main__":
    print(Chat_with_Bot(" 負面 過得 不 太 好 "))  # this part is using for testing.

```

# AWWW_chatbot_response.py 日本語説明

```python3

from chatbot import chatbot       # これを使ったら、DeepQAチャットボットのメインシステムが使用できる。

def Chat_with_Bot(sentence_in, AkishinoProjectBot):
    # AkishinoProjectBot = chatbot.Chatbot()      # メインを試したいなら、ここのコメントを消します。 
    # AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])  # メインを試したいなら、ここのコメントを消します。 ここは訓練したのモデルを定義する。
    # --modelTag    taiwa20170709
    # --test        daemon
    answer = AkishinoProjectBot.daemonPredict(sentence=sentence_in)   # ここはチャットボットの返事を貰って用、"sentence_in"として対応な答え。
    # AkishinoProjectBot.daemonClose()
    return answer



if __name__ == "__main__":
    print(Chat_with_Bot(" 負面 過得 不 太 好 "))  # ここはテストのために使う。

```

# AWWW_chatbot_response.py 中文解說

```python3

from chatbot import chatbot                   # 匯入DeepQA的聊天機器人程式，來進行調用

def Chat_with_Bot(sentence_in, AkishinoProjectBot):
    # AkishinoProjectBot = chatbot.Chatbot()       # 如果要用主程式測試聊天機器人能運作，必須由此宣告
    # AkishinoProjectBot.main(['--modelTag', 'taiwa20170709', '--test', 'daemon'])  # 此處告知聊天機器人所需調用的已訓練model。
    # --modelTag    taiwa20170709
    # --test        daemon
    answer = AkishinoProjectBot.daemonPredict(sentence=sentence_in)  # 這邊會根據sentence_in作為輸入，得到對應的回覆。
    # AkishinoProjectBot.daemonClose()
    return answer



if __name__ == "__main__":
    print(Chat_with_Bot(" 負面 過得 不 太 好 "))  # 這邊是拿來測試聊天機器人可正常運作的主函示。

```