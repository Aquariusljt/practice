#include "stdio.h"
#include "stdlib.h"

const int N = 10;


struct node//结点
{
	int data;//数据区
	struct node* next;//指针区
};

struct node* creatlist(int n)//创建链表,为每一个结点赋随机值(0~99)
{
	struct node* h, * p, * q;//头节点h,新结点p,尾结点q;
	int i;//循环变量
	h = (struct node*)malloc(sizeof(struct node));//头结点申请内存
	p = q = h;//一开始头结点，新结点，尾结点指向同一处
	srand((unsigned)time(NULL));//产生随机数种子,此语句放在不同位置有不同的含义！
	for (i = 0; i < n; i++)
	{
		p = (struct node*)malloc(sizeof(struct node));//为新结点申请内存
		p->data = rand()%100;//为新结点的数据域赋一个随机值
		q->next = p;//尾结点指针区指向新结点p
		q = p;//新结点成为新的尾结点
	}
	p->next = NULL;//尾结点无后继，不需要指向任何位置
	return h;//返回头结点h的地址
}

void printlist(struct node* h)//输出链表(接收头结点地址)
{
	struct node* p;//定义指针，指向当前结点
	p = h->next;//指针指向头结点的指针区
	while (p)//当前结点不是尾结点
	{
		printf("->%d ", p->data);//输出当前结点的数据
		p = p->next;//通过当前结点的指针区指向下一个结点
	}
	printf("\n");
	return;//无返回值
}

int fun(struct node* h)//将一个链表中个结点数据域为偶数的数值累加
{
	int sum = 0;//求和变量
	struct node* p;//定义指针，指向当前结点
	p = h->next;//通过头结点的指针区指向第一个结点
	while (p)//当前结点不是尾结点
	{
		if((p->data) % 2 == 0)//数据域为偶数的数值累加
			sum += p->data;
		p = p->next;//通过当前结点的指针区指向下一个结点
	}
	return sum;//将求和结果返回
}

int main()
{
	struct node* head;//定义一个接收头结点的指针
	int sum = 0;//用于接收链表中各结点的数据域为偶数的值的加和
	head = creatlist(N);//调用creatlist函数，接收链表中头结点的地址
	printlist(head);//调用printflist,输出链表
	sum = fun(head);//接收求和结果(偶数值求和)
	printf("%d\n", sum);//输出链表中各结点的数据域为偶数的值的加和结果
	return 0;
}