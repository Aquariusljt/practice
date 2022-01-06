#include "stdio.h"
#include "stdlib.h"

typedef struct NODE
{
	int data;//������
	struct NODE* prior;//ָ����ָ���
	struct NODE* next;//ָ����ָ��ǰ��
}node;

node* initList()//������㣬����ͷ����ַ
{
	node* h;//����ͷ���
	h = (node*)malloc(sizeof(node));//�����ڴ�
	h->next = NULL;//ͷ���ָ�����ÿ�
	h->prior = NULL;
	return h;//����ͷ����ַ
}

node* Insertnextnode(node* h,int n)//β�巨�����½�㣬����ͷ����ַ
{
	node* p1;//�½��
	node* p0;//��ǰ���
	p1 = (node*)malloc(sizeof(node));//�����ڴ�
	p0 = (node*)malloc(sizeof(node));//�����ڴ�
	p0 = h;
	while (p0->next != NULL)//ͨ��ѭ��ʹp0ָ��β���
		p0 = p0->next;
	p1->data = n;//����������
	p0->next = p1;//p0��ǰ�������½��
	p1->prior = p0;//�½���������p0
	p1->next = NULL;//�½��ָ�����ÿ�
	return h;//����ͷ����ַ
}

void PrintList(node* h)//���˫���������ݣ���ǰ���󣩣��޷���ֵ
{
	node* p;//ָʾ��ǰ���
	p = (node*)malloc(sizeof(node));//�����ڴ�
	p = h->next;//ͷ��㲻������ݣ��ӵ�һ����㿪ʼ�������
	while (p != NULL)//ͨ��ѭ���������
	{
		printf("%d <=> ", p->data);//�������
		p = p->next;//������һ�����
	}
	printf("NULL\n");
}

int main() 
{
	node *n;//����ͷ���
	int i;//ѭ������
	int a;//������
	n = initList();//����initList��������һ��˫������
	for (i = 0; i < 10; i++)//Ϊ˫����������10���½��
	{
		printf("Please input the data:");//��ʾ����
		scanf_s("%d", &a);//��������������
		n = Insertnextnode(n, a);//Ϊ���������½�㣬�����ݼ��뵽�½��
	}
	PrintList(n);//���˫����������
	return 0;
}