// 95.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int *count(char *ch_p) {
	static int t = 0;
	char ch;
	while (*ch_p) {
		ch = *ch_p++ |= 32;
		if (ch == 'a' || ch == 'o' || ch == 'i'
			|| ch == 'e' || ch == 'u' || ch == 'y') 
			t++;
	}
	return &t;
}
void main(void) {
	char c[500];
	int a;
	printf("Please input the characters:");
	gets(c);
	a = *count(c);
	printf("Changed:%s\nVowel letters:%d\n", c, a);
	system("pause");
}
