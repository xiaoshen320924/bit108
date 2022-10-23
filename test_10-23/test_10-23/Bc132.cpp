#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a[10][10] = { 0 };
	int N = 0, M = 0;
	int sum = 0;
	scanf("%d %d", &N, &M);
	int i = 0;
	while (i < N) {
		int j = 0;
		while (j < M) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > 0)
				sum = sum + a[i][j];
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return 0;
}