#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_primenum(int num)
{
	int i = 2;
	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int s = 0;
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_primenum(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}
	
