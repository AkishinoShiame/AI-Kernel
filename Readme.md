# AI Kernel

This project implement a server-client structure application with NLP, emotion recognition and Virtual Agent.

## Details 
|    --Respository's name--            |      --description--                                                            |
| ------------------------------------:|:------------------------------------------------------------------------------- |
| AI-Kernel-Datasets                   | Datasets of the Speech Spectrogram with emotion tag.                            |
| AI-Kernel-Server-Structure           | The server code and main part of structure, using python.                       |
| AI-Kernel-Chatbot-App                | The main part of client structure, using unity to build up for multi-plaftform. |
| AI-Kernel-Chatbot-IOS-Project-IOS-12 | The IOS project (Opened with Xcode) of Virtual Elderly Chatbot App.             |

###### Test data was random picked from all Counts data.

## Structures

![alt text](/StructureMap.png)

 Client : Unity ==> Xcode Proj ==> IOS app ( if want, can have a try on android.)

## Important !!!

Please cites this peper belows if you used this respositories.

Lee, M. C., Yeh, S. C., Chiu, S. Y., & Chang, J. W. (2017, June). [A Deep Convolutional Neural Network Based Virtual Elderly Companion Agent.](http://dl.acm.org/citation.cfm?id=3083220)

```
Ming Che Lee, Sheng Cheng Yeh, Sheng Yu Chiu, Jia Wei Chang.
 "A Deep Convolutional Neural Network Based Virtual Elderly Companion Agent",
 MMSys'17 Proceedings of the 8th ACM on Multimedia Systems Conference,
 Pages 235-238, June 20 - 23, 2017, Taipei, Taiwan. (EI, SIGMM, accept rate: 28%)
```

## Release Note

> This project becomes production around 令和1年6月 . 
>
> The project is been given a formal name called "AI Kernel". 

#### 2017.09.01

> First beta release, finished all the function and codes makes both server and client works. 
>
> The version of the Server using python 2 on NVidia DIGITS server and python 3 on Chatbot Server. 
>
> Client version using Unity 5.6.2f1 version build to iOS 11 (beta) version. 
>
> HardWare tested: 
>
> Server: i7-4790 (3.6 GHz), 16GB RAM, Nvidia 1050Ti 4G DDR5 GPU. 
>
> Client: iPhone SE. 
>
> Check for details in [Here](https://github.com/AkishinoShiame/Graduated-Project). 

#### 2018.12.24

> Rebuild the release and update the codes if needed. 
>
> Discuess with new enviorment to build the service.  

#### 2019.04.17

> Trying rebuild the server part.
>
> HardWare as the link:
>
> [Japanese](.Docs#%E3%83%8F%E3%83%BC%E3%83%89%E3%82%A6%E3%82%A7%E3%82%A2%E3%81%AE%E6%BA%96%E5%82%99) [English](.Docs#hardware-prepration) [Chinese](.Docs#%E7%A1%AC%E9%AB%94%E9%85%8D%E7%BD%AE) 

#### 2019.06.17

> Update the release documentation of this project. 
>
> Read the Document from [Here](.Docs#content--%E7%9B%AE%E6%AC%A1--%E7%9B%AE%E9%8C%84) 
>
> Found there are some update for the latest verison of NVidia DIGITS (v6.1.1). Fixed the NVidia API part code. 
>
> Found error when convert spectrogram to jpg format. Changing codes to use PNG format instead. 
>
> May have a update release of the server code in recent future. 

#### 2019.07.02

> Update the Server code locate in [this folder](Virtual-Elderly-Chatbot-Server-Structure) 
>
> Set-up a V2.0 release(May be final). Which can found in [Here](https://github.com/AkishinoShiame/Virtual-Elderly-Chatbot-Server-Structure/releases/tag/V2.0). 
>
> May have added update & release for builds on Unity and IOS 12 in recent future.
>
> Update @ 22:49 JPT with IOS 12 release project 
>
> Create production Release.

## [DOCs](.Docs#content--%E7%9B%AE%E6%AC%A1--%E7%9B%AE%E9%8C%84)

Create and update documentation in "令和Update" release.

## Video DEMO

#### Demoムービ

[![alt Demoムービー](https://i.ytimg.com/vi/OdDjb4pAgkU/sddefault.jpg)](https://youtu.be/OdDjb4pAgkU "Demoムービー０１")
