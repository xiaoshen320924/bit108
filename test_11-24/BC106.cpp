#define _CRT_SECURE_NO_WARNINGS 1
//иохЩ╫геп╤о
#include<stdio.h>
int main()
{
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	int i = 0, j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (j = 0; j < n; j++)
	{
		for (i = j + 1; i < n; i++)
		{
			num += arr[i][j];
		}
	}
	if (num == 0)
	{
		printf("YES");

	}
	else
	{
		printf("NO");
	}
	return 0;
}