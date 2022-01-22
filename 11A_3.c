// 11A3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define M 10

int main()
{
	int a[M][M], i, j, n, k = 1, t1, t2;
	for (i = 0; i<M; i++)
		for (j = 0; j < M; j++) {
			a[i][j] = 0;
		}
	printf("Please input n(n<10)\n");
	printf("n=");
	scanf_s("%d", &n);
	t1 = n, t2 = -1;
	i = 0, j = 0;
	while (k <= n*n) {
		for (; j < t1; j++) {
			if (a[i][j] == 0) {
				a[i][j] = k;
				k++;
			}
		}
		i++, j--;
		for (; i < t1; i++) {
			if (a[i][j] == 0) {
				a[i][j] = k;
				k++;
			}
		}
		i--, j--;
		for (; j > t2; j--) {
			if (a[i][j] == 0) {
				a[i][j] = k;
				k++;
			}
		}
		i--, j++;
		for (; i > t2+1; i--) {
			if (a[i][j] == 0) {
				a[i][j] = k;
				k++;
			}
		}
		j++, i++, t1--, t2++;
	}
	for (i = 0; i<n; i++)
		for (j = 0; j < n; j++) {
			printf("%5d", a[i][j]);
			if (j == n - 1)
				printf("\n");
		}
	system("pause");
	return 0;
}

