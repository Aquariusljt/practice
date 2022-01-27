// 91.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define ARRAY_NUM 20

void  itoah(int x)
{
	int num[ARRAY_NUM], k = 0, t = 0;
	int y;
	char c;
	if (x == 0)
		;
	else {
		y = x % 16;
		if (y >= 10) {
			c = y - 10 + 'A';
			num[k++] = c;
			t++;
		}
		else
		{
			c = y + '0';
			num[k++] = c;
			t++;
		}
		itoah(x / 16);
	}
	for (t = k - 1; t >= 0; t--)
		printf("%c", num[t]);
}

int main()
{
	int x;
	printf("Please input x\n");
	printf("x=");
	scanf_s("%d", &x);
	itoah(x);
	system("pause");
	return 0;
}