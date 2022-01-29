// 73.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int f(int n) 
{
	if (n < 1000) {
		int a, b, c;
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		if (a!= 0 && b != 0 && c != 0) {
			if (a*a + b*b == c*c)
				return n;
		}
		else
			return 0;
	}
	else if (n >= 1000) {
		int a, b, c, d, e;
		a = n / 1000;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		e = 10 * c + d;
		if (a != 0 && b != 0 && c != 0) {
			if (a*a + b*b == e*e)
				return n;
		}
		else
			return 0;
	}
}

int main()
{
	int m, n, x, y,test;
	test = f(345);
	printf("%d", test);
	printf("Please input m(100<m<10000) and n(100<n<10000),m<n\n");
	printf("m:");
	scanf_s("%d",&m);
	printf("n:");
	scanf_s("%d",&n);
	while ((m >= 10000) || (m <= 100)||(n >= 10000) || (n <= 100)||(m>=n)) {
		printf("m is invalid or n is invalid\n");
		printf("Please input m and n again");
		printf("Please input m(100<m<10000) and n(100<n<10000),m<n\n");
		printf("m:");
		scanf_s("%d",&m);
		printf("n:");
		scanf_s("%d",&n);
	}
	for (x = m; x <= n; x++) {
		y = f(x);
		if (y ==x && y < 1000) {
			int a, b, c;
			a = y / 100;
			b = y / 10 % 10;
			c = y % 10;
			printf("%d:%d*%d+%d*%d=%d*%d\n", y, a, a, b, b, c, c);
		}
		else if (y ==x && y > 1000) {
			int a, b, c, d, e;
			a = y / 1000;
			b = y / 100 % 10;
			c = y / 10 % 10;
			d = y % 10;
			e = 10 * c + d;
			printf("%d:%d*%d+%d*%d=%d*%d\n", y, a, a, b, b, e, e);
		}
	}
	system("pause");
    return 0;
}

