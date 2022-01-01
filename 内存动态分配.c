//#include "stdio.h"
//#include "stdlib.h"
//
//
//int main()
//{
//	int n = 0;//内存中的元素个数，键盘输入
//	int i;//循环变量
//	int* p;//指向所申请的内存(首地址)的指针
//	int sum = 0, sqr = 0;//用于求和和求平方的变量
//	printf("Please input the number of array:");//需要申请的内存中元素个数
//	scanf_s("%d", &n);
//	p = (int*)calloc(n, sizeof(int));//动态申请内存，内存大小=元素个数*每个元素的大小(calloc在申请内存的同时会将内存数据初始化)
//	if (p == 0)//申请内存失败
//	{
//		printf("not able to allocate memory.\n");
//		exit(1);
//	}
//	for (i = 0; i < n; i++)//输入所需要的数据到内存中的相应位置
//	{
//		printf("Please input the values of array[%d]:",i);
//		scanf_s("%d", p + i);
//	}
//	for (i = 0; i < n; i++)//内存中的数据计算
//	{
//		sqr = (*(p + i)) * (*(p + i));//求元素值的平方
//		sum += sqr;//求平方和
//	}
//	printf("the array:");//显示内存中的数据
//	for (i = 0; i < n; i++)
//		printf("%5d", *(p + i));
//	free(p);//释放内存
//	printf("\n");
//	printf("sum=%d", sum);//输出计算结果
//	return 0;
//}