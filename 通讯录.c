//#include "stdio.h"
//
//#define N 10
//
//struct telephone//定义结构变量telephone
//{
//	char name[20];//姓名
//	char mobile[12];//手机号
//	char phone[12];//座机号
//};
//
//int input(struct telephone* p)
//{
//	int i;//循环变量
//	for (i = 0; i < N; i++)//输入通讯录数据，每次循环表示输入第(i+1)个人的数据
//	{
//		printf("Name?Enter \"xxx\" to end");//通过输入xxx表示输入结束
//		gets(p[i].name);//姓名
//		if (strcmp(p[i].name, "xxx") == 0)//通过输入xxx表示输入结束
//			return i;//返回通讯录中的人数
//		printf("Mobile?");//电话号
//		gets(p[i].mobile);
//		printf("Telephone?");//座机号
//		gets(p[i].phone);
//	}
//	return i;//返回通讯录中的人数
//}
//
//void display(struct telephone *p,int n)
//{
//	int i;//循环变量
//	for (i = 0; i <n; i++) //依次输出通讯录中的数据
//		printf("%-20s %-12s %-12s\n", p[i].name,p[i].mobile, p[i].phone);
//}
//
//int main()
//{
//	struct telephone tx[N];//struct telephone型数组
//	int n;//用于接收通讯录中的人数
//	n = input(tx);//调用input函数进行通讯录数据输入并返回通讯录人数
//	if (n >= 0)//通讯录不为空
//		display(tx, n);//输出通讯录中的数据
//	return 0;
//}