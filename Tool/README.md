# Tools

### Tool_JiebaCut_PreProcess.py
In order to use train the text data, you must first process the word-cut. This tool supports to process the Chinese wordcut from a input and output to a file.

Usage:

```
python3 Tool_JiebaCut_PreProcess.py -i <inputfile> -o <outputfile>
```

もし、対話の訓練をやりたいなら。まず、文を単語に割り切ることが必要です。 このツールは文を単語に割り切るの機能です。ファイルをインプットすると、対応なアウトプットを作る。

使い方：
```
python3 Tool_JiebaCut_PreProcess.py -i <inputfile> -o <outputfile>
```

若是要訓練文字對話則必須進行原始對話文本的斷詞。本工具提供文本斷詞段字的功能，將文本以文字檔方式進行輸入後，即可以結巴斷詞進行處理並產生對應的輸出檔案供訓練使用。

使用方法：
```
python3 Tool_JiebaCut_PreProcess.py -i <inputfile> -o <outputfile>
```
