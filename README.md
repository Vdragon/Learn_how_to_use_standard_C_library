# 學習如何使用標準Ｃ函式庫<br />Learning how to use standard C library
## 這是什麼<br />What is this?
一言以蔽之，這是一個介紹如何使用標準Ｃ函式庫設計程式的來源程式碼(source code)倉庫(repository)。

### 什麼是來源程式碼<br />What is source code?
#### 1. 機器語言<br />1. Machine language  
我們的電腦(computer)（中華人民共和國譯為「計算機」）透過由其中央處理元件(central processing unit(CPU))電路不斷地載入(load)、解碼(decode)並執行(execute)我們先前根據其電路設計編碼(encode)後提供給他的程式（代）碼(code)來解決我們的問題(problem)。這些人類不易理解、編寫但該處理電路可以直接載入處理的程式語言我們稱之為機器語言(machine language)。因為處理電路不同其能識別的機器語言就會不同故以機器語言撰寫的程式的可移植性(portability)就非常低。

`````
55 89 e5 83 e4 f0 83 ec 10 c7 04 24 a8 e9 0b 08 e8 e7 62 00 00 b8 00 00 00 00 c9 c3
`````
▲此為印出「Hello programming language world!」一行文字於螢幕上之部份 x86 處理器架構機器語言程式碼

機器語言是程式語言中最低階的語言。

#### 2. 高階程式語言<br />2. High-level programming language
隨著時代的演進就出現不依賴特定處理器架構(processor architecture)的高階程式語言如Ｃ、Ｃ＋＋、Java、Python等，這些程式語言的程式碼相較於機器語言的程式碼容易為人所理解、編寫但不能直接載入到處理器中執行。要執行該程式碼需先透過特殊的工具先將該程式碼「翻譯(translate)[1]」為功能相同之機器語言的程式碼。  

[1] 這個程序其實有非常多種類型（編譯(compile)、組譯(interpret)、虛擬機器(virtual machine)等），這邊暫且不提

`````
#include <stdio.h>

int main(void){
	printf("Hello programming language world!");
	return 0;
}
`````
▲此為印出「Hello programming language world!」一行文字於螢幕上之Ｃ程式語言程式碼

#### 3. 來源程式碼與目標程式碼<br />3. Source code and object code
我們將翻譯為機器語言的程式碼稱為目標程式碼(object code)，翻譯成機器語言前較高階程式語言的程式碼為來源程式碼(source code)

### 什麼是倉庫<br />What is a repository
顧名思義，倉庫就是儲藏東西的場所。由於目標程式碼可由來源程式碼翻譯產生我們通常只會在程式碼倉庫中保存來源程式碼。

## 授權條款<br />License
除非另外獨立標示，本程式碼倉庫中的程式內容採用 GPL 3.0 或其更新版本之授權條款，非程式內容採用 CC BY-SA 4.0 或更新版本的授權條款。