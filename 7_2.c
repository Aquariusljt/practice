// 72.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"
int prime(int n)
{
	int t, i, r;
		r = sqrt(n);
		for (t = 1, i = 2; t&&i <= r; i++)
			if (n%i == 0)
				t = 0;
		if (t)
			return n;
		else
			return 0;
}
int main()
{
	int a, b, m, n, t, x, y;
	printf("Please input the m and n\n");
	printf("m:");
	scanf_s("%d", &m);
	printf("n:");
	scanf_s("%d", &n);
	t = 0;
	for (a = m; a <= n; a++) {
		x = prime(a);
		if (x != 0) {
			b = a + 2;
			y = prime(b);
			if (y != 0) {
				printf("(%d,%d) ", x, y);
				t++;
			}
		}
	}
	if (t == 0)
		printf("No twin prime between m and n");
	else
		printf("t=%d", t);
	system("pause");
	return 0;
}

