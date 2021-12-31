#include "stdio.h"

void main()
{
	int i, j;
	long s = 0, m = 1;
	for (i = 1; i <= 5; i++)
	{
		m = 1;
		for (j = 1; j <= i; j++)
			m = m * j;//求j阶乘
		s = s + m;//求阶乘之和
	}
	printf("%1d", s);
}