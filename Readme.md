這是三個檔案是我暑修資料結構與物件導向課程的作業，分別是:

1. 有理數運算
2. 有理數運算符重載
3. linked list

# HW1 有理數運算

## 描述

這個作業就是用 C++ 程式來進行有理數的算術運算。程式讀取一組命令和有理數，執行指定的運算（加法、減法、乘法、除法），並打印結果。該實現包括一個 `Rational` class，其負責處理算術運算並簡化有理數。

## 功能

- 有理數的加法
- 有理數的減法
- 有理數的乘法
- 有理數的除法
- 簡化有理數

## 程式結構

- `main.cpp`: 主程式入口，負責讀取使用者的輸入命令和有理數，然後根據命令選擇性地調用 `Rational` class 中的方法來進行加法、減法、乘法或除法運算。
- `rational.h`: `Rational` class 的聲明。
- `rational.cpp`: `Rational` class 的方法實現。包括加法、減法、乘法、除法運算，以及有理數的簡化和打印功能。

## 使用方式

1. 確保已經安裝了 [VSCode](https://code.visualstudio.com/) 和 [MinGW](http://www.mingw.org/) 或其他 C++ 編譯器。
2. 從 GitHub 倉庫`clone`此項目：

   ```bash
   git clone https://github.com/Rae-C429/Datastructure-Oop.git

   ```

3. 打開 VSCode 並導入項目。

4. 編譯程式：
   ```bash
   g++ -o rational main.cpp rational.cpp
   ```
5. 執行程式：
   ```bash
   ./rational
   ```
6. 按提示輸入命令和有理數進行運算。

# HW2 有理數運算符重載

## 描述

這個作業擴展了第一個作業，通過重載 C++ 運算符來實現更多有理數的操作。包括二元算術運算符、賦值運算符、關係運算符和一元算術運算符。

## 功能

- 加法、減法、乘法、除法運算符的重載
- 複合賦值運算符（+=、-=、\*=、/=）
- 關係運算符（>、<、>=、<=、==、!=）
- 前置和後置遞增運算符（++、--）
- 負號運算符（一元減號）

## 程式結構

- `main.cpp`: 主程式入口，讀取使用者的輸入命令和有理數，並根據命令使用 Rational class 中的運算符重載來執行相應的操作。
- `rational.h`: `Rational` class 的聲明，包括運算符重載的聲明。
- `rational.cpp`: `Rational` class 中各運算符的實現，包括二元算術運算符、賦值運算符、關係運算符、一元算術運算符的實作。

## 使用方式

1. 確保已經安裝了 [VSCode](https://code.visualstudio.com/) 和 [MinGW](http://www.mingw.org/) 或其他 C++ 編譯器。
2. 從 GitHub 倉庫`clone`此項目：

   ```bash
   git clone https://github.com/Rae-C429/Datastructure-Oop.git

   ```

3. 打開 VSCode 並導入項目。

4. 編譯程式：
   ```bash
   g++ -o rational main.cpp rational.cpp
   ```
5. 執行程式：
   ```bash
   ./rational
   ```
6. 按提示輸入命令和有理數進行運算。

# HW3 linked list

## 描述

這個作業是實現一個 linked list，可以存儲不同類型的資料。通過模板（template）來實現泛型化，支持插入、刪除、打印等基本操作。

## 功能

- 在尾端添加元素（整數和浮點數）
- 在前端添加元素（整數和浮點數）
- 在指定位置插入元素（整數和浮點數）
- 刪除尾端元素
- 刪除前端元素
- 刪除指定位置的元素
- 打印目前串列中的所有元素

## 程式結構

- `main.cpp`: 主程式入口，讀取使用者的輸入命令和數據，並根據命令對鏈表執行相應的操作。
- `mylist.h`: 定義鏈表節點類（`myListNode`）和鏈表類（`myList`），包括所有成員函數的聲明和定義。

## 使用方式

1. 確保已經安裝了 [VSCode](https://code.visualstudio.com/) 和 [MinGW](http://www.mingw.org/) 或其他 C++ 編譯器。
2. 從 GitHub 倉庫`clone`此項目：

   ```bash
   git clone https://github.com/Rae-C429/Datastructure-Oop.git

   ```

3. 打開 VSCode 並導入項目。

4. 編譯程式：
   ```bash
   g++ -o main main.cpp
   ```
5. 執行程式：
   ```bash
   ./main
   ```
6. 按提示輸入命令和有理數進行運算。
