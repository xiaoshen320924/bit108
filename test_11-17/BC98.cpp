#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ɾ��������ָ����Ԫ��
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int m = 0;
	scanf("%d", &m);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] !=  m)
		{
			a[j++] = a[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}