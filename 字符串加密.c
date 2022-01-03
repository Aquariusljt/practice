//#include "stdio.h"
//
//#define N 10
//
//void crypt(char str[],int len,int n)//加密字符串，字母移动n位
//{
//	int i;//循环变量
//	for (i = 0; i < len; i++)
//	{
//			if (str[i] <= 'Z' && str[i] >= 'A')//ABCD…WXYZABCD…,65='A'
//				str[i] = (str[i] - 65 + n) % 26 + 65;
//			if (str[i] <= 'z' && str[i] >= 'a')//abcd…wxyzabcd…,97='a'
//				str[i] = (str[i] - 97 + n) % 26 + 97;
//	}
//}
//
//int main()
//{
//	int n;//加密字符串，字母移动n位
//	int len = 0;//字符串长度
//	char str[N] = { 0 };//字符型数组存放字符串
//	gets(str);//输入字符串
//	str[N-1] = '\0';
//	len = strlen(str);//求字符串有效长度
//	printf("Moving distance:");//输入字符串需要移动的距离
//	scanf_s("%d", &n);
//	crypt(str, len, n);//调用函数crypt加密长度为len字符串str，字母移动n位
//	printf("%s", str);//给出加密处理后的字符串
//	return 0;
//}