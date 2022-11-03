#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////非递归实现斐波那契数
//int PB(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int r = PB(n);
//		printf("%d\n", r);
//	}
//	return 0;
//}