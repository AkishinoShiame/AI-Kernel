# AWWW_wav_to_spectro.py English Explane

```python

# coding:utf-8
import wave
import matplotlib
matplotlib.use('Agg')
from pylab import *
import os
import matplotlib.pyplot as plt

path = "upload/"

def wav2sep(filename):
    # Get the raw sound data from a WAVE file.
    wf = wave.open("uploads/" + filename, "rb")
    data = wf.readframes(wf.getnframes())
    data = frombuffer(data,dtype="int16")
    length = float(wf.getnframes()) / wf.getframerate()  # the langth of the sound（Sec.）

    # Size of the FFT sample
    N = 512

    # For FFT used hamming window
    hammingWindow = np.hamming(N)

    # Drawing the spectrogram 
    pxx, freqs, bins, im = specgram(data, NFFT=N, Fs=wf.getframerate(), noverlap=0, window=hammingWindow)
    axis('off') # axis([0, length, 0, wf.getframerate() / 2])
    #xlabel("time [second]")
    #ylabel("frequency [Hz]")
    subplots_adjust(bottom=0)
    subplots_adjust(top=1)
    subplots_adjust(right=1)
    subplots_adjust(left=0)
    plt.savefig('test.jpg')

```

# AWWW_wav_to_spectro.py 日本語説明

```python

# coding:utf-8
import wave
import matplotlib
matplotlib.use('Agg')
from pylab import *
import os
import matplotlib.pyplot as plt

path = "upload/"

def wav2sep(filename):
    # WAVEファイルから波形データを取得
    wf = wave.open("uploads/" + filename, "rb")
    data = wf.readframes(wf.getnframes())
    data = frombuffer(data,dtype="int16")
    length = float(wf.getnframes()) / wf.getframerate()  # 波形長さ（秒）

    # FFTのサンプル数
    N = 512

    # FFTで用いるハミング窓
    hammingWindow = np.hamming(N)

    # スペクトログラムを描画
    pxx, freqs, bins, im = specgram(data, NFFT=N, Fs=wf.getframerate(), noverlap=0, window=hammingWindow)
    axis('off') # axis([0, length, 0, wf.getframerate() / 2])
    #xlabel("time [second]")
    #ylabel("frequency [Hz]")
    subplots_adjust(bottom=0)
    subplots_adjust(top=1)
    subplots_adjust(right=1)
    subplots_adjust(left=0)
    plt.savefig('test.jpg')

```

# AWWW_wav_to_spectro.py 中文解說

```python

# coding:utf-8
import wave
import matplotlib
matplotlib.use('Agg')
from pylab import *
import os
import matplotlib.pyplot as plt

path = "upload/"

def wav2sep(filename):
    # 從WAVE檔中取得聲音/語音的資訊 
    wf = wave.open("uploads/" + filename, "rb")
    data = wf.readframes(wf.getnframes())
    data = frombuffer(data,dtype="int16")
    length = float(wf.getnframes()) / wf.getframerate()  # 計算出聲音/語音的長度（秒單位）

    # FFT的樣本數
    N = 512

    # FFT所使用的漢明窗函數窗
    hammingWindow = np.hamming(N)

    # 進行聲紋圖的描繪
    pxx, freqs, bins, im = specgram(data, NFFT=N, Fs=wf.getframerate(), noverlap=0, window=hammingWindow)
    axis('off') # axis([0, length, 0, wf.getframerate() / 2])
    #xlabel("time [second]")
    #ylabel("frequency [Hz]")
    subplots_adjust(bottom=0)
    subplots_adjust(top=1)
    subplots_adjust(right=1)
    subplots_adjust(left=0)
    plt.savefig('test.jpg')

```
