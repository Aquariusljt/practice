//#include "stdio.h"
//#define N 15
//
//int main()
//{
//	int i, j;//循环变量
//	int arr[N] = { 0 };//放置数据的数组
//	int t = 0;//用于交换两个数，其数据类型应与数组的数据类型相同
//	for (i = 0; i < N; i++)
//		scanf_s("%d", &arr[i]);
//	for (i = 0; i < N; i++)//进行N轮比较
//	{
//		for (j = 0; j < N-i-1; j++)//第i+1轮比较需要进行N-i-1次比较，i=0时进行的第一次比较
//			if (arr[j] > arr[j+1])//相邻两数两两比较，较大者往后(高序数)排
//			{
//				t = arr[j];//交换两数
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//	}
//	for (i = 0; i < N; i++)//打印排完序后的数组
//		printf("%5d", arr[i]);
//	return 0;
//}