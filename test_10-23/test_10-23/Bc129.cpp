#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
¾ØÕóÔªËØ¶¨Î»
int main() {
	int m[5][5] = { 0 };
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int i = 0;
	while (i < a) {
		printf("%d%d%d%d%d%d%d\n", i, i, i, i, i, i, i);
		int j = 0;
		while (j < b) {
			printf("%d%d%d%d%d%d\n", j, j, j, j, j, j);
			scanf("%d", &m[i][j]);
			j++;
		}
		i++;
	}
	printf("----------");
	scanf("%d %d", &a, &b);
	printf("%d\n", m[a - 1][b - 1]);
	return 0;
}