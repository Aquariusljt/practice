// 107.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define M 10 
#define N 10 
#define K M+N 
int com(int *a, int *b, int *c)
{
	static i, j, k, count;
	while (i<M && j<N)
		if (a[i] == b[j]) {
			i++;
			j++;
			count++;
		}
		else if (a[i]>b[j]) {
			c[k] = b[j];
			k++;
			j++;
		}
		else {
			c[k] = a[i];
			k++;
			i++;
		}
		while (i<M) {
			c[k] = a[i];
			k++;
			i++;
		}
		while (j<N) {
			c[k] = b[j];
			k++;
			j++;
		}
		return count;
}
int main()
{
	int a[M] = { 3,6,7,18,23,33,35,43,48,78 },
		b[N] = { 2,7,13,21,33,37,48,50,58,67 }, c[K] = { 0 }, count, i, j;
	count = com(a, b, c);
	for (i = 0; c[i] != 0; i++)
		printf("%d  ", c[i]);
	printf("\n count=%d\n", count);
	system("pause");
	return 0;
}