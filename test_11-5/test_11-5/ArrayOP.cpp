#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void init(int i,int* a)
{
	int j = 0;
	for (j = 0; j < i; j++)
	{
		a[j] = 0;
	}
}

void print(int i, int* a)
{
	int j = 0;
	for (j = 0; j < i; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
}

void reverse(int i, int* a)
{
	int j = 0;
	while (j < i)
	{
		int temp = 0;
		temp = a[i-1];
		a[i-1] = a[j];
		a[j] = temp;
		j++;
		i--;
	}
}

int main()
{
	int j = 0;
	int arr[] = { 1,2,3,4,5 };
	int i = sizeof(arr) / sizeof(arr[0]);
	print(i, arr);
	reverse(i, arr);
	print(i, arr);
	init(i, arr);
	print(i, arr);
	return 0;
}