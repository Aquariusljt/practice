// 106.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"

int prime(int n, int a[])
{
	int i, t, k, p = 0;
	int r, max, flag;
	int b[100];
	for (i = 0; i < n; i++) {
		max = a[0];
		if (a[i] > max)
			max = a[i];
	}
	for (i = 0; i < n; i++) {
		r = sqrt(max);
		for (flag = 1, k = 2; flag&&k <= max; k++)
			if (a[i] % k == 0) {
				flag = 0;
				p++;
			}
		if (flag) {
			for (t = 0; t<p; t++) {
				b[t] = a[i];
			}
		}
	}
	return b[p - 1];
}

int mpsort(int n, int x[])
{
	int a[100], b[100];
	int max, l;
	int i, t = 0, k=0;
	int low, high;
	for (i = 0; i < n; i++); {
		if (x[i] % 2 == 0) {
			k++;
			for (t=0; t<k; t++)
				a[t] = x[i];
		}
	}
	for (i = 0; i < t; i++) {
		max = a[0];
		if (a[i] > max)
			max = a[i];
	}
	l = prime(n, x);
	for (i = 0; i < n; i++) {
		if (x[i] = max);
		low = i;
		if (x[i] = l);
		high = l;
	}
	for (i = 0; i < high - low + 1; i++) {
		b[i] = x[low];
	}
	for (i = 0; i < high - low; i++) {
		int y;
		if (b[i] > b[i + 1]) {
			y = b[i];
			b[i] = b[i + 1];
			b[i + 1] = y;
		}
	}
	return high - low + 1;
}

int main()
{
	int a, i, n;
	int x[100];
	printf("amount=");
	scanf_s("%d", &n);
	printf("\n");
	for (i = 0; i<n; i++)
		scanf_s("%d", &x[i]);
	a = mpsort(n, x);
	for (i = 0; i < n; i++) {
		printf("%d  ", x[i]);
		if ((i + 1) % 8 == 0)
			printf("\n");
	}
	printf("%d", n);
	system("pause");
	return 0;
}