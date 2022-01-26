// 104.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int gcd(int a[],int n)
{
	int i, r, t;
	int b[100];
	for (i = 0; i < n; i++) {
		b[i] = a[i];
	}
	for (i = 0; i < n-1; i++) {
		while ((r = b[i] % b[i + 1]) != 0) {
			b[i] = b[i + 1];
			b[i + 1] = r;
		}
	}
	t = b[i];
	return t;
}

int  Del_findgcd(int a[], int n, int *f)
{
	int i;
	for (i = 1;i<n; i+=2) {
		a[(i+1)/2] = a[i+1];
	}
	*f = gcd(a, (n + 1) / 2);
	return (n + 1) / 2;
}

int main()
{
	int a[10] = { 6,8,9,11,12,13,15,16,18,19 }, n = 10, i;
	int f=0;
	Del_findgcd(a, n, &f);
	for (i = 0; i < (n+1)/2; i++)
		printf("%d  ", a[i]);
	printf("max common divisor is %d", f);
	system("pause");
    return 0;
}

