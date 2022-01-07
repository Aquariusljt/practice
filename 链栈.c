#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//定义结构类型结点
{
	int data;//数据域
	struct LinkNode* next;//指针域
}LinkNode;

LinkNode* InitSlack()//初始化一个栈
{
	LinkNode* h;//申明一个头结点
	h = (LinkNode*)malloc(sizeof(LinkNode));//头结点申请内存
	h->next = NULL;//头结点指针域置空
}

bool StackEmpty(LinkNode* h)//栈的判空
{
	if (h->next == NULL)//头结点指向NULL即为空栈
		return true;
	else 
		false;
}

void Push(LinkNode* h,int a)//元素入栈
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (h->next == NULL)//栈判空，空栈时元素入栈操作不同
	{
		h->next = p;//头结点链接p
		p->data = a;//数据进入p的数据域
		p->next = NULL;//p指针域置空
		return;//返回调用函数
	}
	p->next = h->next;//p连接上第一个结点(原本处于栈顶的结点)
	p->data = a;//数据进入p的数据域
	h->next = p;//头结点连接新加入的结点p
	return;
}

bool Pop(LinkNode* h, int* a)//元素出栈
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (h->next == NULL)//栈判空，空栈时没有元素出栈
		return false;//元素出栈失败
	p = h->next;//p指向栈顶结点
	h->next = p->next;//头结点连接上第二个结点
	*a = p->data;//从栈顶的数据域取出数据
	free(p);//释放p结点内存
	return true;//出栈成功
}

bool GetTop(LinkNode* h, int* a)//取栈顶元素，不移除结点
{
	LinkNode* p;
	if (h->next == NULL)//栈判空，空栈时栈顶没有元素
		return false;//取栈顶元素失败
	p = h->next;//p指向栈顶结点
	*a = p->data;//从栈顶的数据域取出元素
	return true;//取栈顶元素成功
}

void PrintSlack(LinkNode* h)//输出链栈中的所有元素
{
	LinkNode* p;//指示当前结点
	p = h->next;//指向第一个结点
	while (p != NULL)//依次输出每一个结点的数据
	{
		printf("%d -> ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

int main()
{
	int i;//循环变量
	int a = 0;//数据变量
	int arr[5] = { 0 };
	LinkNode* h;//申明头结点
	h = InitSlack();//初始化栈
	for (i = 0; i < 5; i++)//循环使元素入栈
	{
		printf("Please input the data:");
		scanf_s("%d", &a);//输入需要入栈的数据
		Push(h, a);//入栈
		PrintSlack(h);
	}
	for (i = 0; i < 5; i++)//循环使元素出栈
	{
		if (GetTop(h, &a) == true)//获取栈顶元素
			printf("栈顶元素: %d \n", a);//展示当前栈顶元素
		else//取栈顶元素失败
		{
			printf("空栈!\n");
			break;
		}
		Pop(h, &a);//元素出栈
		arr[i] = a;//用数组接收出栈元素
		PrintSlack(h);
	}
	if (GetTop(h, &a) == true)//获取栈顶元素
		printf("栈顶元素: %d \n", a);//展示当前栈顶元素
	else//取栈顶元素失败
		printf("空栈!\n");
	for (i = 0; i < 5; i++)//展示所有出栈元素
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 0; i < 5; i++)//循环使元素入栈
	{
		Push(h, arr[i]);//数组元素入栈
		PrintSlack(h);
	}
	return 0;
}