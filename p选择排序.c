//#include "stdio.h"
//#define N 8
//
//int main()
//{
//	int i, j;//循环变量
//	int t = 0;//用于交换两个数，其数据类型应与数组的数据类型相同
//	int k = 0;
//	int arr[N] = { 0 };//存放数据的数组
//	for (i = 0; i < N; i++)//输入数据存放到数组里
//		scanf_s("%d", &arr[i]);
//	//for (i = 0; i < N; i++)//打印数组，检测数据是否正确存放到数组里
//	//	printf("%5d", arr[i]);
//	printf("\n");
//	for (i = 0; i < N-1; i++)
//	{
//		k = i;//i为本轮参与比较的数中第一个数的下标
//		for (j = i + 1; j < N; j++)//找出最小数，记录它的下标
//			if (arr[k] > arr[j])
//				k = j;
//		if (i != k)//如果i不是此轮最小数的下表，交换arr[i](此轮第一个数)和arr[k](此轮最小数)的位置
//		{
//			t = arr[i];
//			arr[i] = arr[k];
//			arr[k] = t;
//		}
//	}
//	for (i = 0; i < N; i++)//打印排完序后的数组
//		printf("%5d", arr[i]);
//	return 0;
//}