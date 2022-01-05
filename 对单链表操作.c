#include "stdio.h"
#include "stdlib.h"

typedef struct NODE//����ṹ����-������
{
	int data;//������
	struct NODE* next;//ָ����
}node;

node* InitList()//����һ��������
{
	node* h;//����һ��ͷ���
	h = (node*)malloc(sizeof(node));//Ϊͷ�������ռ�
	h->next = NULL;//��ʼ��ͷ���ָ����ָ��NULL
	return h;
}

void DestoryList(node *h)//����һ��������
{
	node* p;
	node* q;
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h;//pָ��ͷ���
	while (p != NULL)
	{
		q = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
		q = p;
		p = p->next;
		free(q);
	}
	free(p);
	free(h);
}

node* Insertnextnode(node* h,int a)//������β�巨���ӽ�㣬���������뵽�ýڵ����������
{
	node* p;//ָʾ��ǰ���
	node* q;//�½��
	int j = 0;//ָʾ��ǰ����λ��
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	q = (node*)malloc(sizeof(node));//Ϊ�½�������ڴ�
	p = h;
	while (p->next != NULL)//ͨ��ѭ����pָ��β���
		p = p->next;
	q->data = a;//���������뵽�½�����������
	p->next = q;//p��ָ����ָ���½��
	q->next = NULL;//�½���ָ����ָ��NULL
	return h;//����ͷ���
}

void PrintList(node* h)//���������
{
	node* p;//ָʾ��ǰ���
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h->next;//ͷ��㲻������ݣ�����pָ������ָ���һ���ڵ�
	while (p != NULL)//�������������������������ͷ�������������ѭ����Ҳ������κ����ݣ�
	{
		printf("%d -> ", p->data);//�����ǰ��������
		p = p->next;//pָ����һ�����
	}
	printf("NULL\n");
}

void ListDelete(node* h,int i)//ɾ����������ĳһ���
{
	node* p;//p���ָʾ��ǰ���

	int j = 0;//ָʾ����λ��(ͷ���λ��Ϊ0)
	if (i == 0)//ͷ��㲻��ɾ��
		return;//���ֱ�ӷ��ص����õĺ���
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h;//pָ��ͷ���
	while (p != NULL && j < i-1)//ͨ��ѭ���ҵ���i-i�����
	{
		p = p->next;//ָ����һ�����
		j++;//λ���ƶ�
	}
	node* q;//�½��ָ��
	q = p->next;//�½��ָ��ָ��i���(��Ҫɾ���Ľ��)
	p->next = q->next;//��(i-1)����ָ����ֱ��ָ���i+1��㣬������i���
	free(q);//�ͷ�q���ռ�õ��ڴ�
}

void ListInsert(node* h, int i, int n)//�����µ�ֵ����������ĳһ���
{
	node* p;//p���ָʾ��ǰ���
	int j = 0;//ָʾ����λ��(ͷ���λ��Ϊ0)
	if (i == 0)//���ܲ��뵽ͷ����λ��
		return;//ֱ�ӷ��ص����õĺ���
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h;//pָ��ͷ���
	while (p != NULL && j < i - 1)//ͨ��ѭ���ҵ���i-i�����
	{
		p = p->next;//ָ����һ�����
		j++;//λ���ƶ�
	}
	if (p == NULL)//�Ƿ�����
		return;//ֱ�ӷ��ص����õĺ���
	node* q;//�½��ָ��
	q = (node*)malloc(sizeof(node));//Ϊ�½�������ڴ�
	q->data = n;//����Ҫ�����ֵ�����½���������
	q->next = p->next;//ԭi����Ϊ�½��ĺ��
	p->next = q;//��(i-1)����Ϊ�½���ǰ��
}

int GetElem(node* h, int n)//��ֵ���ҵ�������ĳһԪ�أ����ظ���ֵ��λ��
{
	node* p;//p���ָʾ��ǰ���
	int j = 0;//ָʾ����λ��(ͷ���λ��Ϊ0)
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h;//pָ��ͷ���
	while (p != NULL && p->data != n)//ͨ��ѭ���ҵ���i-i�����
	{
		p = p->next;//ָ����һ�����
		j++;//λ���ƶ�
		if (p == NULL)
			return -1;//����-1��ʾ�������޴�ֵ
	}
	return j;//���ؽ��λ��
}

int LocateElem(node* h, int i)//��λ���ҵ�������ĳһԪ�أ����ظ�λ�����е�����
{
	node* p;//p���ָʾ��ǰ���
	int j = 0;//ָʾ����λ��(ͷ���λ��Ϊ0)
	p = (node*)malloc(sizeof(node));//Ϊp��������ڴ�
	p = h;//pָ��ͷ���
	while (p != NULL && j < i)//ͨ��ѭ���ҵ���i�����
	{
		p = p->next;//ָ����һ�����
		j++;//λ���ƶ�
		if (p == NULL)
			return -65536;//����-65536��ʾ�������޴˽��
	}
	return p->data;//���ؽ�������
}

int main() 
{
	node* h;//����һ���������ͷ���
	int a = 0;//���Ҫ���������
	int i;//ѭ������
	h = InitList();//����InitiList��������һ��������
	for (i = 0; i < 10; i++)//��10�����ݼ��뵽��������
	{
		printf("Please input a data:");
		scanf_s("%d", &a);//������Ҫ���뵽�������е�����
		Insertnextnode(h, a);//������β�巨���ӽ��
		PrintList(h);//����������е�����
	}
	printf("\n");
	//ListDelete(h, 0);//�ӵ�������ɾ����i�����
	//PrintList(h);//����������е�����
	//ListInsert(h, 11, 11);//�ڵ������еĵ�i��������������
	//PrintList(h);//����������е�����
	//DestoryList(h);//����DestoryList�������ٵ�����
	//PrintList(h);//����������е�����
	//printf("%d\n", GetElem(h, 7));//������ֵΪ7�Ľ�㣬�����λ��
	//printf("%d\n", LocateElem(h, 11));//���ҵ�11�������ݣ����
	return 0;
}