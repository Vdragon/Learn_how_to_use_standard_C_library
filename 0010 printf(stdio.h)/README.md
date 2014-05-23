# 0010 printf(stdio.h)/
## 函式雛型<br />Function prototype
int printf(char format_control_string[], ...);

* ...
	* ... 代表此函式有可變數量的參數數量，於 printf 中 ... 的參數數量由 format_control_string 決定（見底下 format specifier）
* format_control_string 為指定(specify)輸出格式(format)的字元字串，除了一般字元內容之外另外可包含下列兩種會被另作解釋的特殊內容：
	* Escape sequence  
	  Escape sequence 為逃脫(escape)原本字元意義的字元序列(character sequence)，均以反斜線（\）符號為開頭，例如「\n」逃脫了原本代表「\」「n」接在一起的意思而代表的「換新行(new line)」
		* \n
			* 換新行(**n**ew line)
		* \a
			* 發出一個聲響(**a**larm)，可能是主機板內建之蜂鳴器的聲音或是作業系統指定的聲音
		* 其他
	* Format specifier  
	  Format specifier 為在 format_control_string 中可以將其後參數代入的格式指定字元序列，以 % 作為開頭（「%%」則可輸出「%」字元）
		* 格式
			* %[flags][width][.precision][length]specifier 
	  	* specifier
	  	  用來指定輸出內容的資料類型的字元
	  		* d 或是 i
	  			* 有正負號位的(signed)十進位(**d**ecimal)整數(**i**nteger)
  			* u
  				* 無正負號位的(**u**nsigned)十進位(decimal)整數(integer)
  			* f
  				* 浮點數(**f**loating-point number)
			* s
				* 字元字串(character **s**tring)（在Ｃ語言中即字元陣列所在的記憶體地址）
			* p
				* 記憶體地址（指標(**p**ointer)）
			* c
				* 字元(**c**haracter)
			
		* 格式
			* flags
			* width
			* field
			* precision
			* etc.
			
## 參考資料<br />Reference data
* printf - C++ Reference  
  http://www.cplusplus.com/reference/cstdio/printf/
  