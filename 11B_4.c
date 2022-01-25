// 11B4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"
#include "ctype.h"

void fun(char xx[])
{
	int i, j, t = 0;
	for (i = 0; i<strlen(xx); i++) {
		if (isdigit(xx[i]))
			t++;
	}
	xx[strlen(xx) + t] = '\0';
	for (i = strlen(xx)-1;i>-1; i--)
		for (j = strlen(xx) + t - 1; j > -1; i--, j--) {
			xx[j] = xx[i];
			if (isdigit(xx[i])) {
				xx[j - 1] = '$';
				j--;
			}
		}
}

int main()
{
	char xx[80];
	int i;
	gets(xx);
	fun(xx);
	puts(xx);
	system("pause");
	return 0;
}
