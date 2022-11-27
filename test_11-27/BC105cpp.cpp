#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int judge(int arr[10][10],int str[10][10],int n,int m )
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] != str[i][j])
//				return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0, m = 0;
//	int  arr[10][10] = { 0 };
//	int  str[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n;i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &str[i][j]);
//		}
//	}
//	int r=judge(arr, str,n,m);
//	if (r == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}