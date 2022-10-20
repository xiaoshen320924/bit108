#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int t = 0;
	while (scanf(" %d", &t)!=EOF) {
		if (t == 0) {
			printf("0.5\n");
		}
		else if (t < 0) {
			printf("0\n");
		}
		else
			printf("1\n");
	}
	return 0;
}