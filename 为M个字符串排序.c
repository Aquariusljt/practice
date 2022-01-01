//#include "stdio.h"
//
//#define M 5
//#define N 15
//
//int main()
//{
//	int i, j;//循环变量
//	char str[M][N] = { 0 };//存放M个字符串的字符型数组
//	char* s[M];//M个字符型指针，指向str中每个字符串，这些指针构成一个(字符型指针)数组
//	char* t;//用于交换的指针变量
//	int min;//记录最小字符串下标的变量
//	for (i = 0; i < M; i++)//为字符型指针数组赋值，使其指向str中的每一个字符串
//		s[i]=str[i];
//	for (i = 0; i < M; i++)//循环输入字符串到str中
//		gets(str[i]);
//	for (i = 0; i < M; i++)//字符串选择排序
//	{
//		min = i;//标记最小字符串(每次循环开始时都默认该循环中第一个字符串最小)
//		for (j = i + 1; j < M; j++)//寻找本循环中最小的字符串，记录其下标
//			if (strcmp(s[min], s[j]) > 0)
//				min = j;
//		{//最小字符串移动到本循环的第一个位置
//			t = s[min];
//			s[min] = s[i];
//			s[i] = t;
//		}
//	}
//	for (i = 0; i < M; i++)//输出排序后的字符串
//		printf("%s\t", s[i]);
//	return 0;
//}