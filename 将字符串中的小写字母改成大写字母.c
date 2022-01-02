//#include "stdio.h"
//
//#define N 10
//
//void Upper(char **p)//将一系列字符串中小写字母改成大写字母,形参可以是二维数组的指针数组(char *p[3])或者二级指针(char **p)
//{
//	int i, j;//循环变量
//	for (i = 0; i < 3; i++)//依次对每一个字符串操作
//		for (j = 0; p[i][j]; j++)//对字符串中的每一个字符依次操作
//			if (p[i][j] >= 'a' && p[i][j] <= 'z')//如果是小写字母，转换成大写字母
//				p[i][j] -= 32;
//}
//
//int main() 
//{
//	int i;
//	char str[3][N] = { 0 };//存放3个字符串的字符型数组
//	char* ps[3] = { str[0],str[1],str[2] };//指针数组指向str
//	char** pps = ps;//二级指针指向指针数组ps
//	for (i = 0; i < 3; i++)//循环输入3个字符串
//		gets(str[i]);
//	Upper(pps);//调用函数Upper将字符串中的小写字母改成大写字母,实参可以是指针数组名(ps)也可以是二级指针(pps)
//	for(i=0;i<3;i++)//输出修改后的3个字符串
//		printf("%s\n", str[i]);
//	return 0;
//}