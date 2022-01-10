#include "stdio.h"
#include "stdbool.h"


int reverse(int a)//������
{
	int b = 0;
	for (; a > 0; a /= 10)
		b = 10 * b + a % 10;
	return b;
}

bool prime(int a)//�ж��Ƿ�Ϊ����
{
	int i;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}

bool Pythagorean(int a)//�ж��Ƿ�Ϊ������(101-9999��Χ��),ͷ��λ����ƽ���͵������һλ����λ����ƽ����
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
	int a = 0;//���շ�����
	int i = 0;//ѭ������
	int t = 0;//��������
	for (i = 1000; i < 1111; i++)//����������λ��,���ĳ������9�����䷴��������������ֺ��䷴����
	{
		a = reverse(i);
		if (9 * i == a)
			printf(" %d---%d ", i, a);
	}
	printf("\n");
	for (i = 3; i < 20; i++)//Ѱ����������(���Ϊ2��һ������)
	{
		if (prime(i) == true&& prime(i + 2) == true)
		{
				printf(" (%d,%d) ", i, i + 2);
				t += 1;
		}
	}
	printf("\n������������: %d\n", t);
	for (i = 101; i < 10000; i++)//Ѱ�ҹ�����
	{
		if (Pythagorean(i) == true)
			printf("%d ", i);
	}
	return 0;
}