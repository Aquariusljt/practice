//#include "stdio.h"
//
//void main()
//	{
//	int a, i, j, max = 0;//a是输入的数据，i是循环变量，j是输入数据量,max用于存放当前数据中的最大值
//	int t = 0;记录最大值数据的序号
//		printf("please input j:");//需要的数据量
//		scanf_s("%d", &j);
//		for (i = 0; i < j; i++)//循环j次，j即数据量
//		{
//			scanf_s("%d", &a);
//			if (a > max)//比较当前数据与原最大值，如果新数据大于原最大值则最大值为新数据
//			{
//				max = a;
//				t = i + 1;
//			}
//
//		}
//		printf("maximun is %d\n", max);//输出数据中最大值
//		printf("t is %d", t);//最大值的序号（按输入的先后顺序排序）
//	}
