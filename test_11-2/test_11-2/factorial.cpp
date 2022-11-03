#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fac(int i)
{
	if (i == 1)
		return 1;
	else
	{
		return i * Fac(i - 1);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int n = Fac(i);
	printf("%d\n", n);
	return 0;
}