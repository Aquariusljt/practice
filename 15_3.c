// 153.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "conio.h"
#include "stdlib.h"

#define M 50

typedef struct {
	char ch;
	unsigned num;
}DATA;


int rlc(char *s, DATA *dest)
{
	int i = 0, j, count, n = 0;
	char ch;

	while (s[i]) {
		ch = s[i];
		count = 0;
		for (; s[i] && ch == s[i]; i++) count++;
		dest[n].ch = ch; dest[n].num = count;
		n++;
	}
	return n;
}



int main()
{
	FILE  *fp1, *fp2;
	char s[256];
	DATA dest[200];
	int n, i = 0;
	fp1 = fopen("file1.txt", "r");
	if (fp1 == NULL) {
		puts("Can't read file .");
		exit(1);
	}
	fp2 = fopen("file2.txt", "w");
	if (fp2 == NULL) {
		puts("Can't write file .");
		exit(1);
	}
	while (!feof(fp1)) {
		s[i++] = fgetc(fp1);
	}
	s[i - 1] = '\0';
	n = rlc(s, dest);
	for (i = 0; i<n; i++)
		fprintf(fp2, "%c%u", dest[i].ch, dest[i].num);
	fclose(fp1);
	fclose(fp2);
	return 0;

}


