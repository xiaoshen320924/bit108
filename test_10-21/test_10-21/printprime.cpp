#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印100-200之间的素数
int main() {
	int i = 101;
	
	while (i > 100 && i < 200) {
		int j = 2;
		bool a = true;
		while (j < 10) {//100-200之间的素数，只要满足因子不存在 2，3，5，7，9即可。
			if (i % j == 0)
				a = false;//如果有其他因子，置a为false，下面不打印
			j++;
		}
		if (a) {
			printf("%d ", i);
		}
		i += 2;//素数首先是奇数，减少循环次数
	}
	return 0;
}