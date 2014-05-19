#include <stdio.h> // stdio.h 提供了 printf、scanf 函式的定義
#include <stdlib.h> // stdlib.h 提供了 EXIT_SUCCESS、EXIT_FAILURE 常數的定義

int main(int argc, char * argv[]){ // 圓弧括號內之內容暫且不提
	int input;
	printf("請輸入一個正整數："); scanf("%d", &input);
	if(input <= 0){
		printf("程式發生錯誤！\n");
		return EXIT_FAILURE;
		}
	printf("12345 除以 %d 的商為 %d\n", input, 12345 / input);
	return EXIT_SUCCESS; // EXIT_SUCCESS 代表此作業系統定義之代表程式正常結束的狀態代碼(status code)
}
