#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i = 1000;
	while (i >= 1000 && i <= 2000) {
		bool a = true;
		if (i % 100 == 0)
			if (i % 400 != 0)
				a = false;
		if (a) {
			printf("%d ", i);
		}
		i += 4;
	}
	return 0;
}