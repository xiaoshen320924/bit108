#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i = 0,j=0;
	while (scanf(" %d", &i) != EOF) {
		while (j < i) {
			printf("*");
			j++;
		}
		j = 0;
		printf("\n");
	}
	return 0;
}