// 71.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int find(int n)
{
	int d, k;
	k = n;
	for (d = 0; n > 0; n /= 10)
		d = d * 10 + n % 10;
	if (d ==9 * k)
		return d;
	else
		return 0;
}

int main()
{
	int x, n;
	for (n = 1000; n <= 1111; n++) {
		x = find(n);
		if (x != 0)
			printf("%d----%d\n", n, x);
	}
	system("pause");
    return 0;
}

