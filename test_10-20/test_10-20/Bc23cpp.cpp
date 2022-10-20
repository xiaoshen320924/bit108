#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定秒数 seconds ，把秒转化成小时、分钟和秒。
int main() {
	int seconds=0;
	int a = 0, b = 0, c = 0;
	scanf("%d", &seconds);
	a = seconds / 3600;
	b = (seconds % 3600) / 60;
	c = seconds - a * 3600 - b * 60;
	printf("%d %d %d", a, b, c);
	return 0;
}