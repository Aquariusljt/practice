// 124.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"

void sort(char **res, int n)
{
	char*temp;
	int i, j, k;
	for (i = 0; i < n - 1; i++) {
		k = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(res[k], res[j]) > 0)
				k = j;
		if (k != i) {
			temp = res[i];
			res[i] = res[k];
			res[k] = temp;
		}
	}
}

int FindNoVowel(char *str[], int num, char res[][20])
{
	int i, j, flag;
	num = 0;
	for (i = 0; i < 10; i++) {
		for (flag = 1,j = 0; str[i][j] != NULL; j++) {
			if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u') flag=0;
		}
		if (flag)
			strcpy(res[num++], str[i]);
	}
	for (i = 0; i<num; i++)
		strcpy(res[i], str[i]);
	sort(res, num);
	return num;
}

int main()
{
	char *str[10] = { "ftp","qq","msn","internet","web","google","bbs","mp3","blog","ibm" },res[10][20] = { 0 };
	int num = 0, i;
	num = FindNoVowel(str, num, res);
	for (i = 0; i < 10; i++) 
		puts(res[i]);
	printf("num=%d", num);
	system("pause");
	return 0;
}

