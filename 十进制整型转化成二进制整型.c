#include "stdio.h"

#define N 10

int ERROR = 0;

int dtob1(int a)
{
	int i;//循环变量
	int aa = a;//备份a
	int arr[16] = { 0 };//相当于将其初始化为0(16位二进制)，整型数组表示
	int b = 0;
	for (i = 0; a!=0; i++)//将a的余数(从前往后)依次存放到数组arr中
	{
		arr[i] = a % 2;
		a /= 2;
	}
	if (i >= 16)//说明数值溢出！
		ERROR = -1;
	for (i = 15; i >= 0; i--)//将a的余数(从后往前)依次输出成整型数,若数值溢出(超过16位)则舍弃16位之后的部分
		b = b * 10 + arr[i];
	return b;//返回转化(二进制)后的整型数
}

char* dtob2(char str[],int a)
{
	int i;//循环变量
	for (i = 0; i < 16; i++)//将a的余数从后往前依次存放,操作16次表示(16位二进制),若数值溢出(超过16位)则无视16位之后的部分
	{
		if (a % 2)//余数为1赋值字符'1'
			str[15-i] = '1';
		else
			str[15-i] = '0';//余数为1赋值字符'0'
		a /= 2;
	}
	str[i] = '\0';
	return str;//返回数组首地址
}

int main() 
{
	int n = 0;//需要转化成二进制的十进制整数
	int dn1;//将十进制整数转化为二进制整数，以十进制整型表示
	char str[17];//将十进制整数转化为(16位)二进制整数，以字符串的形式表示
	char* dn2 = str;//用于传递数组的指针
	int i = 0;//循环变量
	scanf_s("%d", &n);//需要转化成二进制的十进制整数
	dn1 = dtob1(n);//调用函数dtob1将十进制整数转化为二进制整数，以十进制整型表示
	printf("use method 1\n");
	printf("%d(DEC) =\n%d(BIN)\n", n, dn1);//方法一的结果
	dn2 = dtob2(str,n);//调用函数dtob2将十进制整数转化为(16位)二进制整数，以字符串的形式表示
	printf("use method 2\n");
	printf("%d(DEC) =\n%s(BIN)\n", n, dn2);//方法二的结果
	printf("use method 2\n");
	printf("%d(DEC) =\n", n);
	for (i = 0; i < 16; i++)//方法二的结果，每4位之间空一格
	{
		if ((i % 4) == 0 && i)//首字符前不输出空格
			printf(" ");//每4位输出一个空格
		printf("%c", dn2[i]);
	}
	printf("(BIN)\n");
	if (ERROR == -1)//数值溢出提示
		printf("数值溢出\n");
	return 0;
}