//#include "stdio.h"
//
//int main()
//{
//	int i, j;//循环变量
//	int m = 0, n = 0;//数组对角线之和m,数组次（反）对角线之和m,
//	int arr1[4][4];//4x4的数组
//	for (i = 0; i < 4; i++)//行序号循环
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf_s("%d", &arr1[i][j]);//列序号循环
//			if (i + j == 3)
//				n += arr1[i][j];//求数组对角线之和
//			else if (i == j)
//				m += arr1[i][j];//求数组反对角线之和
//		}
//	}
//	//for (i = 0; i < 4; i++)//用于检测数组是否被正确输入
//	//{
//	//	for (j = 0; j < 4; j++)
//	//		printf("%4d", arr1[i][j]);
//	//	printf("\n");
//	//}
//	printf("%d %d", m, n);//输出m,n
//	return 0;
//}