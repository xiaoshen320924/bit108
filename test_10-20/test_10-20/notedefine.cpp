#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define 定义符号和宏 
#define M 100
#define MAX(x,y) (x>y?x:y)//宏的名字 宏的参数 宏体
int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int a = 10, b = 20;
	int m = Max(a, b);
	int n = MAX(a, b);//看到宏，宏会被宏体替换
	printf("%d\n", m);
	printf("%d\n", n);
	return 0;
}