#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ100-200֮�������
int main() {
	int i = 101;
	
	while (i > 100 && i < 200) {
		int j = 2;
		bool a = true;
		while (j < 10) {//100-200֮���������ֻҪ�������Ӳ����� 2��3��5��7��9���ɡ�
			if (i % j == 0)
				a = false;//������������ӣ���aΪfalse�����治��ӡ
			j++;
		}
		if (a) {
			printf("%d ", i);
		}
		i += 2;//��������������������ѭ������
	}
	return 0;
}