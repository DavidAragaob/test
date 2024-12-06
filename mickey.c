#include<stdio.h>

int main(void){

	int age;
	
	printf("年齢を入力->");
	scanf("%d", &age);
	
	if (age >=18){
		printf("大人です。");
	}
	else {
		printf("大人じゃないです。");
	}

return 0;
}