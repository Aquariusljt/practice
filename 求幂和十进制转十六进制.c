#include "stdio.h"

double pow(double x,int y)//求整数幂
{
	if (y > 1)
		x = x * pow(x, y - 1);
	else if (y == 0)
		x = 1.0;
	return x;
}

void itoah(int x)//十进制无符号整型转化成十六进制并输出
{
	int a = 0;
	int b = 0;
	int i;
	char str[8] = { 0 };
	printf("%d(DEX) is ", x);
	for (i = 0; x > 0; i++, x /= 16)
	{
		b = x % 16;
		a = 16 * a + b;
		if (b < 10)
			str[i] = 48 + b;
		else
			str[i] = 64 - 9 + b;
	}
	for (i--; i >= 0; i--)
		printf("%c", str[i]);
	printf("(HEX)\n");
}

int main()
{
	double x = 0;
	int y = 0;
	double z = 0;
	printf("Please input the x:");
	scanf_s("%lf", &x);
	printf("Please input the y:");
	scanf_s("%d", &y);
	z = pow(x, y);//求整数幂
	printf("the result is %lf", z);
	printf("Please input the y:");
	scanf_s("%d", &y);
	itoah(y);//十进制转十六进制并输出
	return 0;
}