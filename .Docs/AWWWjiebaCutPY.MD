# AWWW_jiebaCut.py English Explane

```python

import jieba               # Import the been customized for traditional chinese use jieba word cut system
#import sys

# jieba custom setting.
# jieba.set_dictionary('jieba_dict/dict.txt.big')

#file_save  = open('TestSeg.txt','w')

"""  # testing scripts
ret = open("taiwa20170709", "r").read()
seglist = jieba.cut(ret, cut_all=False)
print(" ".join(seglist))
"""
def func_cut(sentence):
    seglist = jieba.cut(sentence, cut_all=False)        # let jieba to cut chinese sentence to words 
    return " ".join(seglist)                            # using white space for word spilting



"""   # testing scripts
print("Writing files ...")
#for word in seglist:
#    file_save.write(word+" ")
sys.stdout = file_save
print(" ".join(seglist))
#sys.stdout = orig_stdout
print("Finished writing!")

#ret.close()
file_save.close()
"""

```

# AWWW_jiebaCut.py 日本語説明

```python

import jieba                         # 台湾が使うの中国語を特化したのjiebaシステム、言葉を単語に切るの機能。
#import sys

# jieba custom setting.
# jieba.set_dictionary('jieba_dict/dict.txt.big')

#file_save  = open('TestSeg.txt','w')

"""  # テスト用のスクリプト
ret = open("taiwa20170709", "r").read()
seglist = jieba.cut(ret, cut_all=False)
print(" ".join(seglist))
"""
def func_cut(sentence):
    seglist = jieba.cut(sentence, cut_all=False)          #jiebaを使って、言葉を切る。
    return " ".join(seglist)                              #切れた単語と単語の中に、空白を入れる。



"""   # テスト用のスクリプト
print("Writing files ...")
#for word in seglist:
#    file_save.write(word+" ")
sys.stdout = file_save
print(" ".join(seglist))
#sys.stdout = orig_stdout
print("Finished writing!")

#ret.close()
file_save.close()
"""

```

# AWWW_jiebaCut.py 中文解說

```python

import jieba                                  #匯入針對繁體中文所用的詞彙進行改良過的結巴斷詞系統
#import sys

# jieba custom setting.
# jieba.set_dictionary('jieba_dict/dict.txt.big')

#file_save  = open('TestSeg.txt','w')

"""   #測試用程式片段
ret = open("taiwa20170709", "r").read()
seglist = jieba.cut(ret, cut_all=False)
print(" ".join(seglist))
"""
def func_cut(sentence):
    seglist = jieba.cut(sentence, cut_all=False)       # 使用結巴斷詞將句子切割成常用的詞彙組合
    return " ".join(seglist)                           # 指定空白為所有斷詞後,詞與詞間的依據



"""   #測試用程式片段
print("Writing files ...")
#for word in seglist:
#    file_save.write(word+" ")
sys.stdout = file_save
print(" ".join(seglist))
#sys.stdout = orig_stdout
print("Finished writing!")

#ret.close()
file_save.close()
"""

```
