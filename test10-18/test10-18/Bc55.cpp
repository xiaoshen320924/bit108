#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断闰年，闰年分为世纪闰年和普通闰年。
int main() {
	int year = 0;
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("yes");
	}
	else if (year % 4 == 0&&year%100!=0){
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}