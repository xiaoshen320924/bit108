#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a <= c) {
		printf("true");
	}
	else {
		printf("false");
	}
	return 0;
}
//输入三个数判断第一个数是否在第二、三个数中间。