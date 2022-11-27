#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void swap(int* num,int n)
//{
//	int* left = num, * right = num + n;
//	while (left < right)
//	{
//		if ((*left) % 2 == 0)
//		{
//			int temp = 0;
//			if ((*right) % 2 == 0)
//				right--;
//			else
//			{
//				temp = *left;
//				*left = *right;
//				*right = temp;
//				right--;
//				left++;
//			}
//		}
//		else
//			left++;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("原数组——>");	
//	int i = 0;
//	int num[5] = { 4,8,2,1,3 };
//	n = sizeof(num) / sizeof(num[0]);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	swap(num, n);
//	printf("交换后——>");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", num[i]);
//	}
//	return 0;
//}