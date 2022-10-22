#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int max = 0,i=0;
	int a[3] = { 0 };
	while (i < 3) {
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	if (a[1] > a[0]) {
		max = a[1];
		a[1] = a[0];
		a[0] = max;
	}
	if (a[2] > a[1]) {
		max = a[2];
		a[2] = a[1];
		a[1] = max;
	}
	if(a[1] > a[0]) {
		max = a[1];
		a[1] = a[0];
		a[0] = max;
	}
	i = 0;
	while (i < 3) {
		printf("%d ", a[i]);
		i++;
	}
	return 0;
}