#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//int judge(int num)
//{
//	int num2 = num;
//	int n = 1;
//	int arr[6] = { 0 };
//	int i = 0, j = 0;
//	while (num / 10 != 0)
//	{
//		num /= 10;
//		n++;
//	}
//	num = num2;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = num % 10;
//		num = num / 10;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		arr[i]=pow(arr[i],n);
//	}
//	num = num2;
//	if (num == (arr[1] + arr[2] + arr[4] + arr[3] + arr[0] + arr[5]))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int r = judge(i);
//		if (r == 1)
//			printf("%d\n",i);
//
//	}
//	return 0;
//}