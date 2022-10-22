#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int i = 0;
//	double sc[5] = { 0.0 };
//	while (i < 5)
//	{
//		int j = 0;
//		double sum = 0.0;
//		while (j < 5)
//		{
//			scanf("%lf", &sc[j]);
//			sum = sum + sc[j];
//			j++;
//		}
//		j = 0;
//		while (j < 5)
//		{
//			printf("%.1lf ", sc[j]);
//			j++;	
//		}
//		printf("%.1lf\n",sum);
//		i++;
//	}
//	return 0;
//}


struct stu {
	char name[20];
	int age;
	char sex[5];
};
void Print(struct stu* ps) {
	printf("%s %d %s", ps->name, ps->age, ps->sex);//printf("%s %d %s",(*ps).name,...);
	//结构体变量—>成员名
}
int main(){
	struct stu s = {"zhangsan",20,"nan"};
	Print(&s);
	return 0;
}
