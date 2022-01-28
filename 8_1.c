// 81.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h" 
void fun(char op, double a, double b, double c, double d, double *p, double *q)
{
	double m, n;
	p = &m;
	q = &n;
	switch (op)
	{
	case '+':
		m = a + c;
		n = b + d;
		printf("%.1lf+%.1lfi", m, n);
		break;
	case '-':
		m = a - c;
		n = b - d;
		printf("%.1lf+%.1lfi", m, n);
		break;
	case '*':
		m = a*c - b*d;
		n = b*c + a*d;
		printf("%.1lf+%.1lfi", m, n);
		break;
	default:
		break;
	}
}
int main()
{
	char op;
	double a, b, c, d;
	double *p=0, *q=0;
	scanf_s("(%lf+%lfi)%c(%lf+%lfi)", &a, &b, &op, &c, &d);
	fun(op, a, b, c, d, p, q);
	printf("(%lf+%lfi)%c(%lf+%lfi)=%lf+%lf", a, b, op, c, d, &p, &q);
	return 0;
}
