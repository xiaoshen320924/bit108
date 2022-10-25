#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0, left = 0, mid = 0, right = 9;
	printf("请输入十个有序整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int num = 0;
	printf("请输入要查找的数字：\n");
	scanf("%d", &num);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > num)
		{
			right = mid - 1;
		}
		else if (a[mid] < num)
		{
			left = mid + 1;
		}
		else 
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
			
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}