// test2.cpp: 定义控制台应用程序的入口点。
//

#include"stdafx.h" 
#include<math.h> 
int complex(char op, double a, double b, double c, double d, double *p, double *q)
{
	double m, n;
	p = &m;
	q = &n;
	switch (op)
	{
	case '+':
		m = (a + c);
		n = (b + d);
		printf("%.1lf+%.1lfi", m, n);
		break;
	case '-':
		m = a - c;
		n = b - d;
		printf("%.1lf+%.1lfi", m, n);
		break;
	case '*':
		m = (a*c - b*d);
		n = b*c + a*d;
		printf("%.1lf+%.1lfi", m, n);
		break;
	case '/':
		m = (a*c + b*d) / (c*c + d*d);
		n = (b*c - a*d) / (c*c + d*d);
		printf("%.1lf+%.1lfi", m, n);
		break;
	default:
		break;
	}
	return 0;
}
int main()
{
	double *p;
	double *q;
	char op;
	double a;
	double b, c, d;
	printf("input a,b,c,d:\n");
	scanf_s("%lf%lf%lf%lf%c", &a, &b, &c, &d);
	scanf_s("%c", &op);
	complex(op, a, b, c, d, p, q);
	return 0;
}