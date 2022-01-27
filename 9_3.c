// 93.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"

double f(double x) 
{
	return x*x / 4 - sin(x);
}
double root(double a, double b) 
{
	double c, r=0, eps = 1e-6;
	c = (a + b) / 2;
	if (fabs(f(a)) < eps)
		r = a;
	else if (fabs(f(b)) < eps)
		r = b;
	else {
		while (fabs(f(c)) > eps) {
			if (f(a)*f(c) < 0)
				r = root(a, c);
			else if (f(b)*f(c) < 0)
				r = root(c, b);
		}
	}
	return r;
}

int main()
{
	double x;
	int flag;
	if (f(1)*f(2) > 0)
		flag = 0;
	else
		flag = 1;
	if (flag==0)
		printf("No one root between 1 and 2");
	else
		x = root(1, 2);
		printf("root=%lf", x);
	system("pause");
    return 0;
}

