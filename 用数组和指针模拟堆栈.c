//#include "stdio.h"
//
//#define N 10
//
//int main()
//{
//	int arr[N] = { 0 };
//	int *p = arr;//p指向数组arr首地址
//	for (*p = arr; p < arr+N; p++)//数据入栈,p依次指向数组arr中的每一个元素
//		scanf_s("%d", p);
//	p--;//此时p指向数组中最后一个元素
//	for (; p >= arr; p--)//数据出栈,p从后往前依次指向数组arr中的每一个元素
//		printf("%3d", *p);
//	return 0;
//}