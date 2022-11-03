#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void reverse_string(char* string)
//{
//	char a[100] = { 0 };
//	int count = 0, i = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//
//	for (i = 0; i <= count -1 ; i++)
//	{
//		string--;
//		a[i] = *(string);
//		
//	}
//	int j = 0;
//	for (j = 0; j <count+1; j++)
//	{
//		printf("%c", a[j]);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}