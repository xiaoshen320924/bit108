#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Feb(int n)
{
	int  c = 1;
	if (n <= 2)
	{
		return c;//n<=2时直接输出1
	}
	else
	{
		c = Feb(n - 1) + Feb(n - 2);//n>3时，递归调用Feb函数，意思简单明了。调用求出前两项的值。
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Feb(n);
	printf("%d", r);
	return 0;
}


//int main()
//{
//	int n = 0;
//	int a = 1, b = 1, c = 1;//初始化三个变量，a,b始终表示位于c前面的两项
//	scanf("%d", &n);//用户输入想要输出的第几个斐波那契数
//	if (n <= 2)
//	{
//		printf("1",n);
//	}//因为第一、二项比较特殊，我们用if分支语句将其做单独处理
//	 //目的是当要求输出第一、第二个斐波那契数时，直接输出结果1
//	else
//	{
//		//否则进行下面的操作
//		while (n > 2)//循环判断条件，只有n>2时才执行操作
//		{
//			c = a + b;//a,b作为c前面的两项，将他们的和赋给c
//			a = b;
//			b = c;    //再将b值给a,c值给b,c任然紧跟a,b后面。这么做相当于给a,b,c整体往后移。
//			n--;
//		}
//	}
//	printf("%d",c);
//	return 0;
//}