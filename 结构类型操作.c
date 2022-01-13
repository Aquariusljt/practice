#include "stdio.h"


typedef struct
{
	int id;
	char name[10];
	char sex[2];
}PS;

int delete(PS* p1, int m, PS* p2, int n)
{
	int i, j, k;
	j = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (p1[i].id == p2[j].id)
			{
				for (k = i; k < m - 1; k++)
				{
					p1[k].id = p1[k + 1].id;
					strcpy(p1[k].name, p1[k + 1].name);
					strcpy(p1[k].sex, p1[k + 1].sex);
				}
				m -= 1;
			}
	return m;
}

int merge(PS* p1, int m, PS* p2, int n)
{
	int i, j, k;
	j = 0;
	for (i = 0; i < m; i++)
	{
		for (; j < n; j++)
		{
			if (p1[i].id < p2[j].id)
			{
				for (k = m; k > i + 1; k--)
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i + 1].id = p2[j].id;
				strcpy(p1[i + 1].name, p2[j].name);
				strcpy(p1[i + 1].sex, p2[j].sex);
				m += 1;
				i++;
				j++;
				break;
			}
			else if (p1[i].id > p2[j].id)
			{
				for (k = m; k > i; k--)
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i].id = p2[j].id;
				strcpy(p1[i].name, p2[j].name);
				strcpy(p1[i].sex, p2[j].sex);
				m += 1;
				i++;
				j++;
				break;
			}
		}
	}
	for (i = m; j < n; j++)
	{
		p1[i].id = p2[j].id;
		strcpy(p1[i].name, p2[j].name);
		strcpy(p1[i].sex, p2[j].sex);
		m += 1;
		i++;
	}
	return m;
}

void sort(PS* p, int n)
{
	int i, j;
	int t;
	char tname[10];
	char tsex[2];
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - j - 1; i++)
		{
			if (strcmp(p[i].sex, p[i + 1].sex) > 0)
			{
				t = p[i].id;
				strcpy(tname, p[i].name);
				strcpy(tsex, p[i].sex);
				p[i].id = p[i + 1].id;
				strcpy(p[i].name, p[i + 1].name);
				strcpy(p[i].sex, p[i + 1].sex);
				p[i + 1].id = t;
				strcpy(p[i + 1].name, tname);
				strcpy(p[i + 1].sex, tsex);
			}
			else if (strcmp(p[i].sex, p[i + 1].sex) == 0 && strcmp(p[i].name, p[i + 1].name) > 0)
			{
				t = p[i].id;
				strcpy(tname, p[i].name);
				strcpy(tsex, p[i].sex);
				p[i].id = p[i + 1].id;
				strcpy(p[i].name, p[i + 1].name);
				strcpy(p[i].sex, p[i + 1].sex);
				p[i + 1].id = t;
				strcpy(p[i + 1].name, tname);
				strcpy(p[i + 1].sex, tsex);
			}
		}
}

void display(PS* p, int n)
{
	int i;
	printf("ID \tNAME     \tSEX\n");
	for (i = 0; i < n; i++)
		printf("%3d\t%-9s\t%s\n", p[i].id, &p[i].name, &p[i].sex);
}

int main()
{
	int m, n;
	PS p1[10] = { { 101, "tom","m" }, { 103,"mary","f" }, { 104,"mark","m" },
	{ 105,"julia","f" }, { 106, "sara","f" } };
	PS p2[10] = { {102, "mark","m"},{104,"mark","m"} };
	m = 5;
	n = 2;
	printf("a:\n");
	display(p1, m);
	printf("b:\n");
	display(p2, n);
	m = delete(p1, m, p2, n);
	printf("a:\n");
	display(p1, m);
	n = merge(p2, n, p1, m);
	printf("b:\n");
	display(p2, n);
	sort(p1, m);
	printf("a:\n");
	display(p1, m);
	return 0;
}