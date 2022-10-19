#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断输入的是否是字母
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