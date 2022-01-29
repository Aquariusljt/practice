// 74.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"

double integral(double a, double b, long n) 
{
	long i;
	double h, s, x;
	h = (b - a) / n;
	s = (cos(a)+sin(a) + cos(b)+sin(b)) / 2;
	x = a;
	for (i = 1; i < n; i++) {
		x += h;
		s += cos(x) + sin(x);
	}
	return s*h;
}

int main()
{
	double a, b, r;
	long n;
	printf("Please input area(a,b) and n\n");
	printf("a:");
	scanf_s("%lf",&a);
	printf("b:");
	scanf_s("%lf", &b);
	printf("n:");
	scanf_s("%ld", &n);
	r = integral(a, b, n);
	printf("result:%lf",r);
	system("pause");
    return 0;
}

