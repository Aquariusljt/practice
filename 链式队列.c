#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//定义结构类型结点
{
	int data;//数据域
	struct LinkNode* next;//指针域
}LinkNode;

typedef struct LinkQueue//定义结构类型队列
{
	LinkNode* front;//头指针
	LinkNode* rear;//尾指针
}LinkQueue;

LinkQueue* InitQueue()//初始化一个队列
{
	LinkNode* h;
	LinkQueue *q;//申明一个队列q
	h = (LinkNode*)malloc(sizeof(LinkNode));//头结点申请内存
	q = (LinkQueue*)malloc(sizeof(LinkQueue));//队列申请内存
	h->next = NULL;//头结点指针域置空
	q->front = h;//头指针指向头结点
	q->rear = h;//尾指针指向尾结点
	return q;//返回q
}

void enQueue(LinkQueue* q, int a)//元素入队列
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	q->rear->next = p;//尾结点链接p
	p->data = a;//数据进入p的数据域
	p->next = NULL;//p指针域置空
	q->rear = p;//尾指针指向p
	return;//返回调用函数
}

bool deQueue(LinkQueue* q, int *a)//元素出队列
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (q->front->next == NULL)//队列判空
		return false;//出队列失败
	p= q->front->next;//p指向第一个结点(处于队头的结点)
	*a = p->data;//取出头结点数据域的数据
	q->front->next = p->next;//头结点连接到第二个结点(队头后面一个结点)
	free(p);//释放p占用的内存
	return true;//出队列成功
}

void PrintQueue(LinkQueue* q)//显示队列中所有元素的排列情况
{
	LinkNode* p;
	p = q->front->next;
	while (p != NULL)
	{
		printf("%d <-- ", p->data);
		p = p->next;
	}
	printf("虚位以待\n");
}

int main()
{
	int i;//循环变量
	int a = 0;//数据变量
	int arr[5] = { 0 };
	LinkQueue* q;//申明队列
	q = InitQueue();//初始化队列
	for (i = 0; i < 5; i++)//循环使元素入队列
	{
		printf("Please input the data:");
		scanf_s("%d", &a);//输入需要入栈的数据
		enQueue(q, a);//入队列
		PrintQueue(q);
	}
	for (i = 0; i < 5; i++)//循环使元素出队列
	{
		deQueue(q, &a);//出队列
		arr[i] = a;//出队列的元素的数据
		PrintQueue(q);
	}
	return 0;
}