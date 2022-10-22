#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a > b) {
		while (b > 0) {
			if (a % b == 0) {
				printf("%d", b);
				break;
			}		
			b--;
		}
	}
	if (a < b) {
		while (a > 0) {
			if (b % a == 0) {
				printf("%d ", a);
				break;
			}		
			a--;
		}
	}	
	return 0;
}