#include "stdio.h"
#include "stdlib.h"

typedef struct NODE//定义结构类型-单链表
{
	int data;//数据域
	struct NODE* next;//指针域
}node;

node* InitList()//创建一个单链表
{
	node* h;//定义一个头结点
	h = (node*)malloc(sizeof(node));//为头结点申请空间
	h->next = NULL;//初始化头结点指针域指向NULL
	return h;
}

void DestoryList(node *h)//销毁一个单链表
{
	node* p;
	node* q;
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h;//p指向头结点
	while (p != NULL)
	{
		q = (node*)malloc(sizeof(node));//为p结点申请内存
		q = p;
		p = p->next;
		free(q);
	}
	free(p);
	free(h);
}

node* Insertnextnode(node* h,int a)//单链表尾插法增加结点，新数据输入到该节点的数据域中
{
	node* p;//指示当前结点
	node* q;//新结点
	int j = 0;//指示当前结点的位序
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	q = (node*)malloc(sizeof(node));//为新结点申请内存
	p = h;
	while (p->next != NULL)//通过循环让p指向尾结点
		p = p->next;
	q->data = a;//新数据输入到新结点的数据域中
	p->next = q;//p的指针域指向新结点
	q->next = NULL;//新结点的指针域指向NULL
	return h;//返回头结点
}

void PrintList(node* h)//输出单链表
{
	node* p;//指示当前结点
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h->next;//头结点不存放数据，所以p指向首先指向第一个节点
	while (p != NULL)//将各结点的数据依次输出（仅有头结点的链表不会进入循环，也不输出任何数据）
	{
		printf("%d -> ", p->data);//输出当前结点的数据
		p = p->next;//p指向下一个结点
	}
	printf("NULL\n");
}

void ListDelete(node* h,int i)//删除单链表中某一结点
{
	node* p;//p结点指示当前结点

	int j = 0;//指示结点的位序(头结点位序为0)
	if (i == 0)//头结点不能删除
		return;//因此直接返回到调用的函数
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h;//p指向头结点
	while (p != NULL && j < i-1)//通过循环找到第i-i个结点
	{
		p = p->next;//指向下一个结点
		j++;//位序移动
	}
	node* q;//新结点指针
	q = p->next;//新结点指针指向i结点(需要删除的结点)
	p->next = q->next;//第(i-1)结点的指针域直接指向第i+1结点，即跳过i结点
	free(q);//释放q结点占用的内存
}

void ListInsert(node* h, int i, int n)//插入新的值到单链表中某一结点
{
	node* p;//p结点指示当前结点
	int j = 0;//指示结点的位序(头结点位序为0)
	if (i == 0)//不能插入到头结点的位置
		return;//直接返回到调用的函数
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h;//p指向头结点
	while (p != NULL && j < i - 1)//通过循环找到第i-i个结点
	{
		p = p->next;//指向下一个结点
		j++;//位序移动
	}
	if (p == NULL)//非法插入
		return;//直接返回到调用的函数
	node* q;//新结点指针
	q = (node*)malloc(sizeof(node));//为新结点申请内存
	q->data = n;//将需要加入的值存入新结点的数据域
	q->next = p->next;//原i结点成为新结点的后继
	p->next = q;//第(i-1)结点成为新结点的前驱
}

int GetElem(node* h, int n)//按值查找单链表中某一元素，返回该数值的位序
{
	node* p;//p结点指示当前结点
	int j = 0;//指示结点的位序(头结点位序为0)
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h;//p指向头结点
	while (p != NULL && p->data != n)//通过循环找到第i-i个结点
	{
		p = p->next;//指向下一个结点
		j++;//位序移动
		if (p == NULL)
			return -1;//返回-1表示链表中无此值
	}
	return j;//返回结点位序
}

int LocateElem(node* h, int i)//按位查找单链表中某一元素，返回该位序结点中的数据
{
	node* p;//p结点指示当前结点
	int j = 0;//指示结点的位序(头结点位序为0)
	p = (node*)malloc(sizeof(node));//为p结点申请内存
	p = h;//p指向头结点
	while (p != NULL && j < i)//通过循环找到第i个结点
	{
		p = p->next;//指向下一个结点
		j++;//位序移动
		if (p == NULL)
			return -65536;//返回-65536表示链表中无此结点
	}
	return p->data;//返回结点的数据
}

int main() 
{
	node* h;//定义一个单链表的头结点
	int a = 0;//存放要输入的数据
	int i;//循环变量
	h = InitList();//调用InitiList函数创建一个单链表
	for (i = 0; i < 10; i++)//将10个数据加入到单链表中
	{
		printf("Please input a data:");
		scanf_s("%d", &a);//输入需要加入到单链表中的数据
		Insertnextnode(h, a);//单链表尾插法增加结点
		PrintList(h);//输出单链表中的数据
	}
	printf("\n");
	//ListDelete(h, 0);//从单链表中删除第i个结点
	//PrintList(h);//输出单链表中的数据
	//ListInsert(h, 11, 11);//在单链表中的第i个结点插入新数据
	//PrintList(h);//输出单链表中的数据
	//DestoryList(h);//调用DestoryList函数销毁单链表
	//PrintList(h);//输出单链表中的数据
	//printf("%d\n", GetElem(h, 7));//查找数值为7的结点，输出其位序
	//printf("%d\n", LocateElem(h, 11));//查找第11结点的数据，输出
	return 0;
}