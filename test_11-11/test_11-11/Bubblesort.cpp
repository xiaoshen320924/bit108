#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Bubblesort(int arr[],int sz)
{
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j=0;j<sz-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 5,6,7,8,1,2,3,0,4,9 };	
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Bubblesort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}