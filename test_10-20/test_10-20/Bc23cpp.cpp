#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������� seconds ������ת����Сʱ�����Ӻ��롣
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