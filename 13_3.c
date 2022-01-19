// 133.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

typedef struct ps {
	long  id;
	char name[10];
	char sex[2];

}PS;

int delete(PS *p1, int m, PS *p2, int n)
{
	int i, j, t, k, flag;
	long p3[10];
	char a[10];
	for(t=0,i=0;i<m;i++)
		for (j = 0;j<n; j++) {
			if (p1[i].id==p2[j].id)
				p3[t++] = p1[i].id;
		}
	for (i = 0, k = 0; i < m; i++) 
		for (flag = 1, j = 0; j < t; j++) {
			if (p3[j] == p1[i].id)
				flag = 0;
			if (flag)
				p1[k++].id = p1[i].id;
		}
	return m - t;
}

int merge(PS *p1, int m, PS *p2, int n)
{
	int i, j, t, flag;
	long temp;
	for(i=0,t=0,flag=1;i<m;i++)
		for (j = 0; j<n; j++) {
			if (p1[i].id == p2[j].id)
				flag = 0;
			if (flag)
				p1[m + t] = p2[j], t++;
		}
	for(i=0;i<m+t-1;i++)
		for(j=0;j<m+t-1;j++)
			if (p1[j].id < p1[j + 1].id) {
				temp = p1[j].id;
				p1[j].id = p1[j + 1].id;
				p1[j + 1].id = temp;
				i++;
			}
	return m + t;
}

void sort(PS *p, int n)
{
	PS t;
	int i, j;
	for (i = 0; i<n - 1; i++)
		for (j = 0; j<n - i - 1; j++)
			if (strcmp(p[j].sex, p[j + 1].sex)>0 ||
				strcmp(p[j].sex, p[j + 1].sex) == 0 && strcmp(p[j].name, p[j + 1].name)>0) {
				t = p[j]; p[j] = p[j + 1]; p[j + 1] = t;
			}
}

void display(PS *p, int n)
{
	int i;
	printf("ID NAME SEX\n");
	for (i = 0; i<n; i++)
		printf("%ld %s %s\n", p[i].id, p[i].name, p[i].sex);
}

int main()
{
	PS a[10] = { { 101, "tom","m" },{ 103,"mary","f" },{ 104,"mark","m" },
	{ 105,"julia","f" },{ 106, "sara","f" } },
		b[10] = { { 102, "mark","m" },{ 104,"mark","m" } };
	int m = 5, n = 2;
	puts("a:");
	display(a, m);
	puts("b:");
	display(b, n);
	m = delete(a, m, b, n);
	puts("a:");
	display(a, m);
	n = merge(b, n, a, m);
	puts("b:");
	display(b, n);
	sort(a, m);
	puts("a:");
	display(a, m);
	system("pause");
	return 0;

}

