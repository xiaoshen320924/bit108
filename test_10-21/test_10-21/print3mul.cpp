#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i = 3,j=1;
	while (i < 100&&j <33) {
		i = 3;
		j++;
		i *= j;
		printf("%d ", i);
	}
	return 0;
}