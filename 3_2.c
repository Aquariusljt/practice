//#include "stdio.h"
//
//
//void main()
//{
//	float x;
//	double y = 0;//x���룬y˰
//	printf("����:");
//	scanf_s("%f", &x);
//	if (x - 2000 <= 0)
//		y = 0;
//	else
//	{
//		x -= 2000;//����2000�Ĳ���
//		if (x <= 500)
//			y = 0.05 * x;//˰=˰��*��������
//		else if (x <= 2000 && x > 500)
//			y = 0.10 * x;
//		else if (x <= 5000 && x > 2000)
//			y = 0.15 * x;
//		else if (x <= 20000 && x > 5000)
//			y = 0.20 * x;
//		else if (x > 20000)
//			y = 0.25 * x;
//	}
//	printf("˰:%f", y);
//}