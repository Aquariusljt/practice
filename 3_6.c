#include "stdio.h"

void main()
{
	int a, b, c, i, A, B, C, I;
	for (i = 100; 1 < 1000; i++) 
	{
		I = i;
		a = i % 10;
		i /= 10;
		b = i % 10;
		i /= 10;
		c = i % 10;
		i /= 10;
		A = a * a * a;
		B = b * b * b;
		C = c * c * c;
		i = I;
		if (I == A + B + C)
			printf("%d ", i);
	}
}