//#include "stdio.h"
//
//#define M 3
//#define N 3
//
//int main()
//{
//	int arr[M][N] = { {1,3,3},{4,6,6},{7,9,9} };//数组初始化
//	float b[M] = { 0 };//存放数组arr中每一行的平均值
//	int (*p)[N] = arr;//行指针p
//	float sum;//求和变量
//	float aver;//平均值变量
//	int i, j;//循环变量
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (j = 0; j < N; j++)
//			sum += p[i][j];//求行元素和
//		aver = sum / N;//求行平均值
//		b[i] = aver;//行平均值存放到数组b中
//	}
//	for (i = 0; i < M; i++)//输出数组b
//		printf("%f ", b[i]);
//	return 0;
//}