#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输出数组中最大数所在行列
int main() {
	int m[10][10] = { 0 };
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int i = 0;
	while (i < a) {
		printf("%d%d%d%d%d%d%d\n",i,i,i,i,i,i,i);
		int j = 0;
		while (j < b) {
			printf("%d%d%d%d%d%d\n",j,j,j,j,j,j);
			scanf("%d", &m[i][j]);
			j++;
		}
		i++;
	}
	int max = m[0][0];
	int k = 0;
	int line = 0, row = 0;
	while (k < a) {
		int t = 0;
		while (t < b) {
			if (m[k][t] >=max) {
				max = m[k][t];
				line = k + 1;
				row = t + 1;
			}
			t++;
		}
		k++;
	}
	printf("%d %d",line, row);
	return 0;
}