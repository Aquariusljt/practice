//#include "stdio.h"
//
//#define N 10
//
//
//int strcmp(char str1[], char str2[])//比较字符串str1,str2的大小
//{
//	int i;//循环变量
//	char ch1, ch2;//分别接收str1和str2的字符
//	for (i = 0; str1[i] || str2[i]; i++)//当两个字符串中的元素都读取完毕时结束
//	{
//		ch1 = str1[i];//接收str1的字符
//		ch2 = str2[i];//接收str2的字符
//		if (ch1 != ch2)//当ch1和ch2不同时，ch1和ch2的差值就是两字符串的差值
//			break;
//	}
//	return ch1-ch2;//返回两字符串的差值
//}
//
//int main()
//{
//	int i, n;//循环变量，字符串的差值
//	char str1[N], str2[N];//字符串1，字符串2
//	printf("Please input the string1:");
//	gets(str1);//输入字符串1
//	printf("Please input the string2:");
//	gets(str2);//输入字符串2
//	n = strcmp(str1, str2);//调用strcmp函数(自行编制的)比较两字符串的大小并返回其差值
//	printf("%d", n);//输出字符串的差值
//	return 0;
//}