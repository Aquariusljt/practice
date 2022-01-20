// 123.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"


int main()
{
	char a[10][10] = { 0 }, b[10][10] = { 0 }, c[10][10] = { 0 };
	int i, j, k;
	printf("Please input the string 1\n");
	for (i = 0; i < 10; i++) {
		gets(a[i]);
		if (strcmp(a[i],"")==0)
			break;
	}
	printf("Please input the string 2\n");
	for (i = 0; i < 10; i++) {
		gets(b[i]);
		if (strcmp(b[i], "") == 0)
			break;
	}
	for(k=0,i=0;i<10;i++)
		for (j = 0; j < 10; j++) {
			if (strcmp(a[i], b[j]) == 0)
				strcpy(c[k++], a[i]);
		}
	for (i = 0; i < k; i++) {
		if(strcmp(c[i],"")!=0)
			puts(c[i]);
	}
	system("pause");
    return 0;
}

