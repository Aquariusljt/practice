#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//����ṹ���ͽ��
{
	int data;//������
	struct LinkNode* next;//ָ����
}LinkNode;

typedef struct LinkQueue//����ṹ���Ͷ���
{
	LinkNode* front;//ͷָ��
	LinkNode* rear;//βָ��
}LinkQueue;

LinkQueue* InitQueue()//��ʼ��һ������
{
	LinkNode* h;
	LinkQueue *q;//����һ������q
	h = (LinkNode*)malloc(sizeof(LinkNode));//ͷ��������ڴ�
	q = (LinkQueue*)malloc(sizeof(LinkQueue));//���������ڴ�
	h->next = NULL;//ͷ���ָ�����ÿ�
	q->front = h;//ͷָ��ָ��ͷ���
	q->rear = h;//βָ��ָ��β���
	return q;//����q
}

void enQueue(LinkQueue* q, int a)//Ԫ�������
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	q->rear->next = p;//β�������p
	p->data = a;//���ݽ���p��������
	p->next = NULL;//pָ�����ÿ�
	q->rear = p;//βָ��ָ��p
	return;//���ص��ú���
}

bool deQueue(LinkQueue* q, int *a)//Ԫ�س�����
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (q->front->next == NULL)//�����п�
		return false;//������ʧ��
	p= q->front->next;//pָ���һ�����(���ڶ�ͷ�Ľ��)
	*a = p->data;//ȡ��ͷ��������������
	q->front->next = p->next;//ͷ������ӵ��ڶ������(��ͷ����һ�����)
	free(p);//�ͷ�pռ�õ��ڴ�
	return true;//�����гɹ�
}

void PrintQueue(LinkQueue* q)//��ʾ����������Ԫ�ص��������
{
	LinkNode* p;
	p = q->front->next;
	while (p != NULL)
	{
		printf("%d <-- ", p->data);
		p = p->next;
	}
	printf("��λ�Դ�\n");
}

int main()
{
	int i;//ѭ������
	int a = 0;//���ݱ���
	int arr[5] = { 0 };
	LinkQueue* q;//��������
	q = InitQueue();//��ʼ������
	for (i = 0; i < 5; i++)//ѭ��ʹԪ�������
	{
		printf("Please input the data:");
		scanf_s("%d", &a);//������Ҫ��ջ������
		enQueue(q, a);//�����
		PrintQueue(q);
	}
	for (i = 0; i < 5; i++)//ѭ��ʹԪ�س�����
	{
		deQueue(q, &a);//������
		arr[i] = a;//�����е�Ԫ�ص�����
		PrintQueue(q);
	}
	return 0;
}