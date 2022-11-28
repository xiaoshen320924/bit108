#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int judge(int* arr,int n1)
{	
	if ((*arr) >= *(arr + 1))
	{
		n1 = n1 - 1;
		while (n1)
		{
			if ((*arr) >= *(arr + 1))
			{
				arr++;
				n1--;
			}
			else
				return 0;
		}
		return 1;
	}
	if ((*arr) <= *(arr + 1))
	{
		n1 = n1 - 1;
		while (n1)
		{
			if ((*arr) <= *(arr + 1))
			{
				arr++;
				n1--;
			}
			else
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int r = judge(arr, n);
	if (r == 0)
	{
		printf("unsorted");
	}
	else
	{
		printf("sorted");
	}
	return 0;
}