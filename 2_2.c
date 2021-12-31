#include "stdio.h"
#include "math.h"
const float pi = 3.14159f;

void main()
{
	float r1, r2, aera1, aera2 = 0;//外接圆和内切圆的半径和面积
	float a = 0;//正方形边长
	printf("please input a:");//输入提示
	scanf_s("%f", &a);//输入边长
	r1 = a / 2;
	r2 = (float)sqrt(2) * a / 2;
	aera1 = pi * r1 * r1;
	aera2 = pi * r2 * r2;
	printf("%f,%f", r1, r2);
	printf("内切圆面积=%f,外接圆面积=%f", aera1, aera2);//结果输出
}