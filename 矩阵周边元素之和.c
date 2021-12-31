//#include "stdio.h"
//
//
//int main()
//{
//	int arr[5][5] = { 0 };//矩阵初始化
//	int i, j;//循环变量
//	int sum = 0;//求和变量
//	for (i = 0; i < 5; i++)//二维数组的二重循环输入
//		for (j = 0; j < 5; j++)
//			scanf_s("%d", &arr[i][j]);
//	for (i = 0; i < 5; i++)
//	{
//		if (i == 0 || i == 4)//对矩阵第一行和最后一行中的全部元素求和
//		{
//			for(j=0;j<5;j++)
//				sum = sum + arr[i][j];
//		}
//		else//对矩阵其余行仅对行首行尾元素求和
//		{
//			sum = sum + arr[i][0] + arr[i][4];
//		}
//	}
//	for (i = 0; i < 5; i++)//矩阵输出(验证矩阵输入是否正确)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//	printf("%d", sum);//输出矩阵周长元素之和
//	return 0;
//}