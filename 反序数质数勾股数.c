#include "stdio.h"
#include "stdbool.h"


int reverse(int a)//求反序数
{
	int b = 0;
	for (; a > 0; a /= 10)
		b = 10 * b + a % 10;
	return b;
}

bool prime(int a)//判断是否为质数
{
	int i;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}

bool Pythagorean(int a)//判断是否为勾股数(101-9999范围内),头两位数的平方和等于最后一位或两位数的平方和
{
	int x, y, z;
	x = y = z = 0;
	if (a > 100 && a < 1000)
	{
		z = a % 10;
		a /= 10;
	}
	else if (a >= 1000 && a < 10000)
	{
		z = a % 100;
		a /= 100;
	}
	y = a % 10;
	a /= 10;
	x = a % 10;
	x *= x;
	y *= y;
	z *= z;
	if (x == 0 || y == 0)
		return false;
	if (x + y == z)
		return true;
	else 
		return false;
}

int main() 
{
	int a = 0;//接收反序数
	int i = 0;//循环变量
	int t = 0;//计数变量
	for (i = 1000; i < 1111; i++)//历遍所有四位数,如果某个数的9倍是其反序数则输出该数字和其反序数
	{
		a = reverse(i);
		if (9 * i == a)
			printf(" %d---%d ", i, a);
	}
	printf("\n");
	for (i = 3; i < 20; i++)//寻找孪生素数(相差为2的一对素数)
	{
		if (prime(i) == true&& prime(i + 2) == true)
		{
				printf(" (%d,%d) ", i, i + 2);
				t += 1;
		}
	}
	printf("\n孪生素数对数: %d\n", t);
	for (i = 101; i < 10000; i++)//寻找勾股数
	{
		if (Pythagorean(i) == true)
			printf("%d ", i);
	}
	return 0;
}