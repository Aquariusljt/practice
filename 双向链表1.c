#include "stdio.h"
#include "stdlib.h"

typedef struct NODE
{
	int data;//数据域
	struct NODE* prior;//指针域（指向后）
	struct NODE* next;//指针域（指向前）
}node;

node* initList()//创建结点，返回头结点地址
{
	node* h;//定义头结点
	h = (node*)malloc(sizeof(node));//申请内存
	h->next = NULL;//头结点指针域置空
	h->prior = NULL;
	return h;//返回头结点地址
}

node* Insertnextnode(node* h,int n)//尾插法增加新结点，返回头结点地址
{
	node* p1;//新结点
	node* p0;//当前结点
	p1 = (node*)malloc(sizeof(node));//申请内存
	p0 = (node*)malloc(sizeof(node));//申请内存
	p0 = h;
	while (p0->next != NULL)//通过循环使p0指向尾结点
		p0 = p0->next;
	p1->data = n;//输入新数据
	p0->next = p1;//p0向前连接上新结点
	p1->prior = p0;//新结点向后连接p0
	p1->next = NULL;//新结点指针域置空
	return h;//返回头结点地址
}

void PrintList(node* h)//输出双向链表数据（从前往后），无返回值
{
	node* p;//指示当前结点
	p = (node*)malloc(sizeof(node));//申请内存
	p = h->next;//头结点不存放数据，从第一个结点开始输出数据
	while (p != NULL)//通过循环遍历结点
	{
		printf("%d <=> ", p->data);//输出数据
		p = p->next;//进入下一个结点
	}
	printf("NULL\n");
}

int main() 
{
	node *n;//链表头结点
	int i;//循环变量
	int a;//新数据
	n = initList();//调用initList函数创建一个双向链表
	for (i = 0; i < 10; i++)//为双向链表增加10个新结点
	{
		printf("Please input the data:");//提示输入
		scanf_s("%d", &a);//键盘输入新数据
		n = Insertnextnode(n, a);//为链表增加新结点，新数据加入到新结点
	}
	PrintList(n);//输出双向链表数据
	return 0;
}