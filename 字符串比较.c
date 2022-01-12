#include "stdio.h"
#include "stdbool.h"

int stringcmp(char* str1,char* str2)//比较两字符串大小，返回第一个不同字符之差
{
	int i;//循环变量i
	for (i = 0; str1[i] != '\0'; i++)//依次比照字符串中的每一个字符
		if (str1[i] != str2[i])
			break;
	return str1[i] - str2[i];
}

bool novowels(char* str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			return false;
	return true;
}

int main()
{
	int i, j, t;
	char str1[10][20] = { "while", "for", "switch", "if", "break", "continue" };
	char str2[10][20] = { "for", "case", "do", "else", "char", "switch" };
	char str3[10][20] = { "ftp", "qq", "msn", "internet", "web", "google", "bbs", "mp3", "blog", "ibm" };
	t = 0;
	for (i = 0; str1[i][0] != '\0'; i++)
	{
		for (j = 0; str2[j][0] != '\0'; j++)
			if (stringcmp(str1[i], str2[j]) == 0)
			{
				printf("%s\n", str1[i]);
				t += 1;
			}
	}
	printf("the number of matching strings is %d\n", t);
	t = 0;
	for (i = 0; str3[i][0] != '\0' && i < 10; i++)
	{
		if (novowels(str3[i]) == true)
		{
			printf("%s\t", str3[i]);
			t += 1;
		}
	}
	printf("\nthe number of strings which don't have vowels is %d\n", t);
	return 0;
}