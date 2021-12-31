//#include "stdio.h"
//
//#define N 10
//
//int main()
//{
//	int i;//循环变量
//	char ch;//字符型交换变量
//	int len;//字符串长度变量
//	int n = N;
//	char str[N];//字符串数组
//	printf("Please input the string,the length of string no more than %d:",n);
//	gets(str);
//	len = strlen(str);//读取字符串长度
//	for (i = 0; i < len/2; i++)//将字符串依次逆序交换(只需要操作一半，操作全部等于不改变顺序！)
//	{
//		ch = str[i];
//		str[i] = str[len - i - 1];
//		str[len - i - 1] = ch;
//	}
//	for (i = 0; i < len; i++)//给出交换后的字符串
//		printf("%c", str[i]);
//	return 0;
//}