// 11A4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define M 10
#define N 5

void  line_sort(int a[][4], int b[], int n)
{
	int i, j, sum, t, min;
	int c[M];
	for (i = 0; i < n; i++) {
		for (sum=0,j = 0; j < 4; j++) {
			sum += a[i][j];
		}
		b[i] = sum;
	}
	for (i = 0; i<n - 1; i++) {
		min = i;
		for (j = i + 1; j<n; j++)
			if (b[j]<b[min]) min = j;
		if (min != i) {
			t = b[min]; b[min] = b[i]; b[i] = t;
			for (j = 0; j<4; j++) {
				t = a[min][j]; a[min][j] = a[i][j]; a[i][j] = t;
			}
		}
	}

}

int main()
{
	int a[N][4] = { 1,4,5,7,3,5,7,8,9,10,2,3,1,3,4,2,1,2,1,1 }, b[5] = { 0,0,0,0,0 }, n = N;
	int i, j;
	line_sort(a, b, n);
	for (i = 0; i < N; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", a[i][j]);
		}
		if (j = 4)
			printf("\n");
	}
	printf("\n");
	for (i = 0; i < N; i++) 
		printf("%5d", b[i]);
	system("pause");
	return 0;
}

