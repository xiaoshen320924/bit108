#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0, left = 0, mid = 0, right = 9;
	printf("������ʮ������������\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int num = 0;
	printf("������Ҫ���ҵ����֣�\n");
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
			
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}