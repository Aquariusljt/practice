//#include "stdio.h"
//
//void main()
//{
//	int i, j, t;//循环变量i，j，t用于指示是否是质数
//	for (i = 3; i < 100; i++)//历遍100以内
//	{
//		t = 1;
//		for (j = 2; j < i; j++)//历遍2~i-1,验证i是否为质数
//			if (i % j == 0)
//				t = 0;
//		if (t == 1)//t=1，证明是质数
//			printf("%d ", i);
//	}
//}