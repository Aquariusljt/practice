//#include "stdio.h"
//
//
//void main()
//{
//	float x;
//	double y = 0;//x收入，y税
//	printf("收入:");
//	scanf_s("%f", &x);
//	if (x - 2000 <= 0)
//		y = 0;
//	else
//	{
//		x -= 2000;//超出2000的部分
//		if (x <= 500)
//			y = 0.05 * x;//税=税率*超出部分
//		else if (x <= 2000 && x > 500)
//			y = 0.10 * x;
//		else if (x <= 5000 && x > 2000)
//			y = 0.15 * x;
//		else if (x <= 20000 && x > 5000)
//			y = 0.20 * x;
//		else if (x > 20000)
//			y = 0.25 * x;
//	}
//	printf("税:%f", y);
//}