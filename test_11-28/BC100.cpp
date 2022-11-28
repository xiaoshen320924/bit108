#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void connect(int* arr1, int* arr2,int* arr3,int n3,int n2,int n1)
//{
//	while (n3)
//	{
//		if ((*arr1) <= (*arr2))
//		{
//			*arr3++ = *arr1++;
//			n3--;
//			n1--;
//			while (n1 == 0&&n3 != 0)
//			{
//				*arr3++ = *arr2++;
//				n3--;
//			}
//		}
//		else
//		{
//			*arr3++ = *arr2++;
//			n3--;
//			n2--;
//			while (n2 == 0 && n3 != 0)
//			{
//				*arr3++ = *arr1++;
//				n3--;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int arr3[20] = { 0 };
//	int n1 = 0, n2 = 0, n3 = 0;
//	scanf("%d %d", &n1, &n2);
//	n3 = n1 + n2;
//	int i = 0;
//	for (i = 0; i < n1; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n2; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	connect(arr1, arr2, arr3, n3,n2,n1);
//	for (i = 0; i < n3; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}