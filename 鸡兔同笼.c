//#include "stdio.h"
//
//
//int main()
//{
//	int a = 0;//a=head
//	int b = 0;//b=feet
//	int x = 0;//x=chicken
//	int y = 0;//y=rabbit
//	printf("头=");
//	scanf_s("%d", &a);
//	printf("脚=");
//	scanf_s("%d", &b);
//	if (b < (2 * a) || b % 2 == 1)//输入值合法性检测
//	{
//		printf("非法输入，请重新输入\n");
//			printf("头=");
//		scanf_s("%d", &a);
//		printf("脚=");
//		scanf_s("%d", &b);
//	}
//	x = (4*a - b) / 2;//compute chicken
//	y = (b - 2*a) / 2;//compute rabbit
//	printf("鸡=%d,兔=%d",x,y);
//}