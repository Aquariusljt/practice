//#include "stdio.h"
//
//#define N 5
//
//int main()
//{
//	int i, j;
//	int n = 0;
//	int arr1[N] = { 0 };
//	int arr2[N] = { 0 };
//	int arr3[2*N] = { 0 };
//	printf("Please input the number in arr1\n");
//	for (i = 0; i < N; i++)//输入arr1
//		scanf_s("%d", &arr1[i]);
//	printf("Please input the number in arr2\n");
//	for (i = 0; i < N; i++)//输入arr2
//		scanf_s("%d", &arr2[i]);
//	for (i = 0, j = 0; i < N && j < N; i++)
//	{
//		for (; j < N && i < N;) 
//			if (arr1[i] < arr2[j])//arr1元素小于arr2元素，arr1的元素进入arr3，arr1下标(i)+1，arr2下标(j)不变
//			{
//				arr3[n++] = arr1[i++];
//			}
//			else//arr2当前元素小于(或等于)arr1元素，arr2的元素进入arr3，arr2下标(j)+1，arr1下标(i)不变
//				arr3[n++] = arr2[j++];
//		break;//如果arr2元素全部进入arr3，可以直接退出大循环
//	}
//	if (i == N && j != N)//当数组arr1全部进入arr3时，arr2剩余元素依次进入arr3的剩余位置
//		for (; j < N; j++)
//			arr3[n++] = arr2[j];
//	if (j == N && i != N)//当数组arr2全部进入arr3时，arr1剩余元素依次进入arr3的剩余位置
//		for (; i < N; i++)
//			arr3[n++] = arr1[i];
//	printf("The arr3 is:\n");
//	for (i = 0; i < 2*N; i++)//输出arr3
//		printf("%3d", arr3[i]);
//	return 0;
//}