//#include "stdio.h"
//
//#define N 3
//
//float mean(int a[],int n)//计算数组(a[],含有n个元素的)的平均值
//{
//	int i;//循环变量
//	float aver = 0;//用于计算平均值
//	for (i = 0; i < n; i++)
//		aver += a[i];//元素求和
//	aver /= n;//和除以元素个数得到平均值
//	return aver;//返回平均值
//}
//
//int main()
//{
//	int n;//用于计算数组元素个数
//	int i;//循环变量
//	int arr[N] = { 0 };//整型数组，全部初始化为0
//	float aver = 0;//用于接收数组元素的平均值
//	for (i = 0; i < N; i++)//数组元素循环输入
//		scanf_s("%d", &arr[i]);
//	n = (sizeof(arr) / sizeof(arr[0]));//计算数组元素个数
//	aver = mean(arr, n);//调用mean函数(数组名，元素个数)，返回平均值
//	printf("%f", aver);//显示平均值
//	return 0;
//}