#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define ������źͺ� 
#define M 100
#define MAX(x,y) (x>y?x:y)//������� ��Ĳ��� ����
int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int a = 10, b = 20;
	int m = Max(a, b);
	int n = MAX(a, b);//�����꣬��ᱻ�����滻
	printf("%d\n", m);
	printf("%d\n", n);
	return 0;
}