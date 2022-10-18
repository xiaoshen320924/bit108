#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int gra = 0;
	while (~scanf("%d", &gra)) {
		if (gra >= 90 && gra <= 100)
			printf("Perfect\n");
	}
	return 0;
}