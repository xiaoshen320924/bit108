#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�������Ƿ�����ĸ
int main() {
	char c = '0';
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}