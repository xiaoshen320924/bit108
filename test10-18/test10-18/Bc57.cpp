#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�涨YYYYXX��ʽ���룬YYYY������ݣ�XX�����·ݣ������Ӧ����
int main() {
    int year = 0, month = 0;
    scanf("%4d%2d", &year, &month);
    if (month >= 3 && month <= 5) {
        printf("spring");
    }
    else if (month >= 6 && month <= 8) {
        printf("summer");
    }
    else if ((month >= 9 && month <= 11)) {
        printf("autumn");
    }
    else {
        printf("winter");
    }
    return 0;
}