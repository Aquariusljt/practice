//#include "stdio.h"
//
//int main()
//{
//	int i, j, t;//循环变量i、j，交换变量t
//	int arr1[4][4] = { {35,73,65,50},{33,47,66,28},{42,19,25,60},{30,72,54,26} };//矩阵arr1
//	printf("the original matrix is :\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}//输出原矩阵
//	printf("the transfer matrix is :\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < i; j++)
//			t = arr1[i][j], arr1[i][j] = arr1[j][i], arr1[j][i] = t;
//	}//矩阵转置
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}//输出转置后的矩阵
//  return 0;
//}