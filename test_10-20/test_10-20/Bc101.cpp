#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float sum = 0.0;
    float arr[5][5];
    int i = 0,j = 0;
    int m = 0, n = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%f ", &arr[i][j]);
        }
    }
    for (m = 0; m < 5; m++) {
        for (n = 0; n < 5; n++) {
            printf("%.1f ", arr[m][n]);
            sum = sum + arr[m][n];
        }
        printf("%.1f\n", sum);
        sum = 0.0;
    }
    return 0;
}