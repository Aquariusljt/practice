//#include "stdio.h"
//
//#define N 4
//
//void trans(int** p,int n)//矩阵的二级指针，矩阵维数
//{
//	int t;//交换变量
//	int i, j;//循环变量
//	for(i=0;i<n;i++)
//		for (j = i+1; j < n; j++)//交换j大于i的部分
//		{
//			t = p[i][j];
//			p[i][j] = p[j][i];
//			p[j][i] = t;
//		}
//}
//
//int main()
//{
//	int i, j;//循环变量
//	int arr[N][N] = { 0 };//二维数组
//	int* pa[N];//指针数组
//	int** ppa;//二级指针
//	for (i = 0; i < N; i++)//pa指向二维数组arr的行首
//		pa[i] = arr[i];
//	ppa = pa;//ppa指向指针数组pa
//	for (i = 0; i < N; i++)//输入矩阵元素
//		for (j = 0; j < N; j++)
//			scanf_s("%d", &arr[i][j]);
//	//for (i = 0; i < N; i++)//检验
//	//{
//	//	for (j = 0; j < N; j++)
//	//		printf("%5d", ppa[i][j]);
//	//	printf("\n");
//	//}
//	trans(ppa, N);//调用函数trans实现n维矩阵转置
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%5d", ppa[i][j]);
//		printf("\n");
//	}
//	return 0;
//}