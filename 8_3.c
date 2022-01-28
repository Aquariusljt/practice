// 83.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"

double integral(double a, double b, double(*p)(double), double n)
{
	double step = (b - a) / n;
	double sum = 0;
	for (double i = a; i <= b - step; i += step)
	{
		sum += 0.5*step*(p(i + step) + p(i));
	}
	return sum;
}
double cosx(double x)
{
	return cos(x);
}

double sinx(double x)
{
	return sin(x);
}

double line(double x)
{
	return (double)2 * x + 1;
}
int main()
{
	double a, b, n;
	printf("Please input a, b, n\n");
	printf("a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	printf("n=");
	scanf_s("%lf", &n);
	printf("integral cos:%lf\n", integral(a, b, &cosx, n));
	printf("integral sin:%lf\n", integral(a, b, &sinx, n));
	printf("integral 2x+1:%lf\n", integral(a, b, &line, n));
	system("pause");
	return 0;
}

