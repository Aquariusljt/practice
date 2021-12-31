//#include "stdio.h"
//#include "math.h"
//
//void main()
//{
//	int x1, x2, x3, y1, y2, y3 = 0;//坐标数
//	int a1, a2, a3, b1, b2, b3 = 0;//坐标差值
//	float aera, p, a, b, c = 0;//三角形参量
//	printf("please input coordinate:(x1,y1) (x2,y2) (x3,y3):");//输入提示
//	scanf_s("(%d,%d) (%d,%d) (%d,%d)", &x1, &y1, &x2, &y2, &x3, &y3);//坐标输入
//	a1 = abs(x2 - x1);
//	b1 = abs(y2 - y1);
//	a2 = abs(x3 - x2);
//	b2 = abs(y3 - y2);
//	a3 = abs(x3 - x1);
//	b3 = abs(y3 - y1);
//	a = (float)sqrt(a1 * a1 + b1 * b1);//强制转换
//	b = (float)sqrt(a2 * a2 + b2 * b2);
//	c = (float)sqrt(a3 * a3 + b3 * b3);
//	p = (a + b + c) / 2;
//	aera = (float)sqrt(p * (p - a) * (p - b) * (p - c));//强制转换
//	printf("aera:%f", aera);
//}