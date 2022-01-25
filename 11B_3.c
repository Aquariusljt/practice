// 11B3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	char a[80] = {0}, ch;
	int b[26] = {0}, i;
	gets(a);
	for (i = 0; a[i]!= 0; i++) {
		if (isalpha(a[i])) {
			ch = a[i];
			if (ch <= 90)
				ch += 32;
			b[ch - 97]++;
		}
	}

	for (i = 0; i < 26; i++) {
		if (b[i] != 0) {
			printf("%c:%d ",97+i, b[i]);
		}
	}
	system("pause");
    return 0;
}

