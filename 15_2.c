// 152.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"

char *insert(char *p)
{
	{
		int i, j;
		i = 0;
		while (p[i]) {
			if (isdigit(p[i])) {
				for (j = strlen(p); j >= i; j--) 
					p[j + 1] = p[j];
				p[j + 1] = '-';
				for (i = i + 2; p[i]; i++)
					if (isdigit(p[i])==0)
						break;
			}
			else
				i++;
		}
		return p;
	}
}

int main()
{
	FILE  *fp;
	char s[] = "AB1CD12EF123GH";
	int n;
	insert(s);
	fp = fopen("data.out", "w");
	if (fp == NULL) {
		puts("Can't open file .");
		exit(1);
	}
	fprintf(fp, "%s", s);
    return 0;
}

