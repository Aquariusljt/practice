// 151.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define M 80

int rev_num(int n)
{
	int rev;

	for (rev = 0; n>0; n /= 10) rev = rev * 10 + n % 10;
	return rev;
}


int prime(int n)
{
	int i;

	for (i = 2; i<n; i++)
		if (n%i == 0) return 0;
	return 1;
}


int rev_prime(int m, int n, int x[])
{
	int i, j, k, t = 0;
	for (i = m; i <= n; i++) {
		k = rev_num(i);
		if (prime(k)) x[t++] = k;
	}
	return t;
}


int main()
{
	FILE *fp;
	int i, m, n, count, a[M];
	printf("input m=");
	scanf_s("%d", &m);
	printf("input n(m<n)=");
	scanf_s("%d", &n);
	count = rev_prime(m, n, a);
	if ((fp = fopen("out.txt", "w")) == NULL){
		puts("Can't open file.\n");
		exit(1);
	}
	for (i = 0; i<count; i++)
		fprintf(fp, "%d ", a[i]);
	fclose(fp);
	return 0;
}
