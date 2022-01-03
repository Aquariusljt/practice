#include "stdio.h"
#include "stdlib.h"

#define N 10

struct node//结点
{
	int data;//数据区
	struct node* next;//指针区
};

struct node* creatlist()//创建链表
{
	struct node* h, * p, * q;//头节点h,新结点p,尾结点q;
	int a;//需要输入的数据
	h = (struct node*)malloc(sizeof(struct node));//头结点申请内存
	p = q = h;//一开始头结点，新结点，尾结点指向同一处
	scanf_s("%d", &a);//输入数据
	while (a)//输入的数据不为0
	{
		p = (struct node*)malloc(sizeof(struct node));//为新结点申请内存
		p->data = a;//新数据输入到新结点
		q->next = p;//尾结点指针区指向新结点p
		q = p;//新结点成为新的尾结点
		scanf_s("%d", &a);//输入下一个数据
	}
	p->next = NULL;//尾结点无后继，不需要指向任何位置
	return h;//返回头结点h的地址
}

void printlist(struct node* h)//输出链表(接收头结点地址)
{
	struct node* p;//定义指针，指向当前结点
	p = h->next;//指针指向头结点的指针区
	while (p != NULL)//当前结点不是尾结点
	{
		printf("->%d ", p->data);//输出当前结点的数据
		p = p->next;//通过当前结点的指针区指向下一个结点
	}
	printf("\n");
	return;//无返回值
}

int main()
{
	struct node* head;//定义一个接收头结点的指针
	head = creatlist();//调用creatlist函数，接收链表中头结点的地址
	printlist(head);//调用printflist,输出链表
	return 0;
}