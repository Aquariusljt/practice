//#include "stdio.h"
//
//struct COMPLEX//定义结构类型复数
//{
//	float real;//实部
//	float imaginary;//虚部
//};
//
//
//struct COMPLEX ADD(struct COMPLEX n1, struct COMPLEX n2)//加法
//{
//	struct COMPLEX n3;//用于记录结果的复数
//	n3.real = n1.real + n2.real;//实部相加
//	n3.imaginary= n1.imaginary + n2.imaginary;//虚部相加
//	return n3;//返回复数n3
//}
//
//struct COMPLEX SUBTRACT(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//用于记录结果的复数
//	n3.real = n1.real - n2.real;//实部相减
//	n3.imaginary = n1.imaginary - n2.imaginary;//虚部相减
//	return n3;//返回复数n3
//}
//
//struct COMPLEX MULTI(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//用于记录结果的复数
//	n3.real = n1.real * n2.real - n1.imaginary * n2.imaginary;//实部相乘 - 虚部相乘,对于（a+bi * c+di），实部=a*c-b*d
//	n3.imaginary = n1.real * n2.imaginary + n1.imaginary * n2.real;//n1的实部 * n2的虚部 + n1的虚部 * n2的实部,对于（a+bi * c+di），虚部=a*d-b*c
//	return n3;//返回复数n3
//}
//
//struct COMPLEX DIV(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//用于记录结果的复数
//	n3.real = (n1.real * n2.real + n1.imaginary * n2.imaginary) / (n2.real * n2.real + n2.imaginary * n2.imaginary);//对于（a+bi / c+di），实部=(a*c+b*d)/(c*c+d*d)
//	n3.imaginary = (-n1.real * n2.imaginary + n1.imaginary * n2.real) / (n2.real * n2.real + n2.imaginary * n2.imaginary);//对于（a+bi / c+di），虚部=(-a*d+b*c)/(c*c+d*d)
//	return n3;//返回复数n3
//}
//
//int main()
//{
//	struct COMPLEX n1 = { 0,0 };//复数初始化0+0i
//	struct COMPLEX n2 = n1;
//	struct COMPLEX n3 = n1;
//	printf("Please input the real part of real 1\n");//输入n1的实部
//	scanf_s("%f", &n1.real);//输入n1的实部
//	printf("Please input the imaginary part of real 1\n");
//	scanf_s("%f", &n1.imaginary);//输入n1的虚部
//	printf("Please input the real part of real 2\n");
//	scanf_s("%f", &n2.real);//输入n2的实部
//	printf("Please input the imaginary part of real 2\n");
//	scanf_s("%f", &n2.imaginary);//输入n2的虚部
//	n3 = ADD(n1, n2);//调用ADD函数进行复数的加法运算
//	printf("The real 1 plus real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = SUBTRACT(n1, n2);//调用SUBTRACT函数进行复数的减法运算
//	printf("The real 1 minus real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = MULTI(n1, n2);//调用MULTI函数进行复数的乘法运算
//	printf("The real 1 multiply real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = DIV(n1, n2);//调用DIV函数进行复数的除法运算
//	printf("The real 1 divide real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	return 0;
//}