//#include "stdio.h"
//
//
//void main() 
//{
//	int a = 0;
//	int m, d = 0;
//	printf("月份：");
//	scanf_s("%d", &m);
//	printf("日期：");
//	scanf_s("%d", &d);
//	a = 30 * (m-1) + d;//粗略计算总天数
//	switch (m)//根据月份调整总天数
//	{
//	case(1):
//		a += 0;
//		break;
//	case(2):
//		a += 1;
//		break;
//	case(3):
//		a -= 1;
//		break;
//	case(4):
//		a += 0;
//		break;
//	case(5):
//		a += 0;
//		break;
//	case(6):
//		a += 1;
//		break;
//	case(7):
//		a += 1;
//		break;
//	case(8):
//		a += 2;
//		break;
//	case(9):
//		a += 3;
//		break;
//	case(10):
//		a += 3;
//		break;
//	case(11):
//		a += 4;
//		break;
//	case(12):
//		a += 4;
//		break;
//	default:
//		;
//	}
//	a += 3;//2009年1月1号是周四
//	a %= 7;//星期为7进制
//	switch (a)//判断星期几
//	{
//	case(0):
//		printf("Sunday");
//		break;
//	case(1):
//		printf("Monday");
//		break;
//	case(2):
//		printf("Tuesday");
//		break;
//	case(3):
//		printf("Wednesday");
//		break;
//	case(4):
//		printf("Thursday");
//		break;
//	case(5):
//		printf("Friday");
//		break;
//	case(6):
//		printf("Saturday");
//		break;
//	default:
//		;
//	}
//}