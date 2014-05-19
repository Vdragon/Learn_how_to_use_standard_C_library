# 學習如何使用標準Ｃ函式庫<br />Learning how to use standard C library
## 這是什麼<br />What is this?
一言以蔽之，這是一個介紹如何使用標準Ｃ函式庫設計程式的來源程式碼(source code)倉庫(repository)。

### 什麼是來源程式碼<br />What is source code?
#### 1. 機器語言<br />1. Machine language  
我們的電腦(computer)（中華人民共和國譯為「計算機」）透過由其中央處理元件(central processing unit(CPU))電路不斷地載入(load)、解碼(decode)並執行(execute)我們先前根據其電路設計編碼(encode)後提供給他的程式代碼(code)來解決我們的問題(problem)。這些人類不易理解、編寫但該處理電路可以直接載入處理的程式語言我們稱之為機器語言(machine language)。因為處理電路不同其能識別的機器語言就會不同故以機器語言撰寫的程式的可移植性(portability)就非常低。

機器語言是程式語言中最低階的語言。

#### 2. 高階程式語言<br />2. High-level programming language
隨著時代的演進就出現不依賴特定處理器架構(processor architecture)的高階程式語言如Ｃ、Ｃ＋＋、Java、Python等，這些程式語言相較於機器語言容易為人所理解、編寫但不能直接載入到處理器中執行。要執行該程式需先透過特殊的工具先將該程式「翻譯(translate)[1]」為機器語言的程式。  

[1] 這個程序其實有非常多種類型（編譯(compile)、組譯(interpret)、虛擬機器(virtual machine)等），這邊暫且不提

#### 3. 來源程式碼與目標程式碼<br />3. Source code and target code
我們將翻譯為機器語言的程式碼稱為目標程式碼，翻譯前較高階程式語言的程式碼為來源程式碼

## 授權條款<br />License
本程式碼倉庫中的程式內容採用 GPL 3.0 或其更新版本之授權條款，非程式內容採用 CC BY-SA 4.0 或更新版本的授權條款。