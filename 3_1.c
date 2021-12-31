//#include "stdio.h"
//#include "math.h"
//
//void main()
//{
//	float a, b, c;//三角形三条边
//	float p, s;//计算公式所需参量
//	float A, B, C;//三边的平方
//	int t = 0;//用t来判断是否是特殊三角形
//	scanf_s("%f%f%f", &a, &b, &c);//输入三角形的三条边
//	p = (a + b + c) / 2;
//	s = (float)sqrt(p * (p - a)*(p - b)*(p - c));//三角形面积计算公式
//	A = a * a;//求三边的平方
//	B = b * b;
//	C = c * c;
//	if (s == 0)//判断能否组成三角形
//		printf("不能组成三角形");
//	else
//	{
//
//		if (a == b || a == c || b == c)//判断是否是等腰三角形
//		{
//			t = 1;
//			if (a == b && a == c)//判断是否是等边三角形
//				printf("等边三角形");
//			else
//				printf("等腰三角形");
//		}
//		if (A == B + C || B == A + C || C == A + B)//判断是否是直角三角形
//		{
//			t = 1;
//			printf("直角三角形");
//		}
//		if (!t)//判断是否是特殊三角形
//			printf("普通三角形");
//		printf("%f", s);
//	}
//}