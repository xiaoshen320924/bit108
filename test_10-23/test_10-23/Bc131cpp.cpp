#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
//比较两个数组是否一致
int main() {
    int m[10][10] = { 0 };
    int n[10][10] = { 0 };
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int i = 0;
    while (i < a) {
        int j = 0;
        while (j < b) {
            scanf("%d", &m[i][j]);
            j++;
        }
        i++;
    }
    int k = 0;
    bool rel = true;
    while (k < a) {
        int t = 0;
        while (t < b) {
            scanf("%d", &n[k][t]);
            if (n[k][t] != m[k][t]) {
                rel = false;
                break;
            }
            t++;
        }
        k++;
    }
    if (rel) {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}