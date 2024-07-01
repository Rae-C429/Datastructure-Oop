這是三個檔案是我暑修資料結構與物件導向課程的作業，分別是:

1.有理數運算

# HW1 有理數運算

這個項目實現了一個簡單的 C++ 程式，用於對有理數進行算術運算。

## 目錄

- [描述](#描述)
- [功能](#功能)
- [安裝](#安裝)
- [使用方式](#使用方式)
- [程式結構](#程式結構)
- [詳細介紹](#詳細介紹)
- [授權](#授權)

## 描述

程式讀取一組命令和有理數，執行指定的運算（加法、減法、乘法、除法），並打印結果。該實現包括一個 `Rational` 類，該類負責處理算術運算並簡化有理數。

## 功能

- 有理數的加法
- 有理數的減法
- 有理數的乘法
- 有理數的除法
- 簡化有理數

## 安裝

1. 確保已經安裝了 [VSCode](https://code.visualstudio.com/) 和 [MinGW](http://www.mingw.org/) 或其他 C++ 編譯器。
2. 從 GitHub 倉庫克隆此項目：
   ```bash
   git clone https://github.com/Rae-C429/Datastructure-Oop
   ```
3. 打開 VSCode 並導入項目。

## 使用方式

1. 編譯程式：
   ```bash
   g++ -o rational main.cpp rational.cpp
   ```
2. 執行程式：
   ```bash
   ./rational
   ```
3. 按提示輸入命令和有理數進行運算。

## 程式結構

- `main.cpp`: 主程式入口，讀取輸入並調用 `Rational` 類的方法。
- `rational.h`: `Rational` 類的聲明。
- `rational.cpp`: `Rational` 類的方法實現。

## 詳細介紹
