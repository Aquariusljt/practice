#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//����ṹ���ͽ��
{
	int data;//������
	struct LinkNode* next;//ָ����
}LinkNode;

LinkNode* InitSlack()//��ʼ��һ��ջ
{
	LinkNode* h;//����һ��ͷ���
	h = (LinkNode*)malloc(sizeof(LinkNode));//ͷ��������ڴ�
	h->next = NULL;//ͷ���ָ�����ÿ�
}

bool StackEmpty(LinkNode* h)//ջ���п�
{
	if (h->next == NULL)//ͷ���ָ��NULL��Ϊ��ջ
		return true;
	else 
		false;
}

void Push(LinkNode* h,int a)//Ԫ����ջ
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (h->next == NULL)//ջ�пգ���ջʱԪ����ջ������ͬ
	{
		h->next = p;//ͷ�������p
		p->data = a;//���ݽ���p��������
		p->next = NULL;//pָ�����ÿ�
		return;//���ص��ú���
	}
	p->next = h->next;//p�����ϵ�һ�����(ԭ������ջ���Ľ��)
	p->data = a;//���ݽ���p��������
	h->next = p;//ͷ��������¼���Ľ��p
	return;
}

bool Pop(LinkNode* h, int* a)//Ԫ�س�ջ
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	if (h->next == NULL)//ջ�пգ���ջʱû��Ԫ�س�ջ
		return false;//Ԫ�س�ջʧ��
	p = h->next;//pָ��ջ�����
	h->next = p->next;//ͷ��������ϵڶ������
	*a = p->data;//��ջ����������ȡ������
	free(p);//�ͷ�p����ڴ�
	return true;//��ջ�ɹ�
}

bool GetTop(LinkNode* h, int* a)//ȡջ��Ԫ�أ����Ƴ����
{
	LinkNode* p;
	if (h->next == NULL)//ջ�пգ���ջʱջ��û��Ԫ��
		return false;//ȡջ��Ԫ��ʧ��
	p = h->next;//pָ��ջ�����
	*a = p->data;//��ջ����������ȡ��Ԫ��
	return true;//ȡջ��Ԫ�سɹ�
}

void PrintSlack(LinkNode* h)//�����ջ�е�����Ԫ��
{
	LinkNode* p;//ָʾ��ǰ���
	p = h->next;//ָ���һ�����
	while (p != NULL)//�������ÿһ����������
	{
		printf("%d -> ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

int main()
{
	int i;//ѭ������
	int a = 0;//���ݱ���
	int arr[5] = { 0 };
	LinkNode* h;//����ͷ���
	h = InitSlack();//��ʼ��ջ
	for (i = 0; i < 5; i++)//ѭ��ʹԪ����ջ
	{
		printf("Please input the data:");
		scanf_s("%d", &a);//������Ҫ��ջ������
		Push(h, a);//��ջ
		PrintSlack(h);
	}
	for (i = 0; i < 5; i++)//ѭ��ʹԪ�س�ջ
	{
		if (GetTop(h, &a) == true)//��ȡջ��Ԫ��
			printf("ջ��Ԫ��: %d \n", a);//չʾ��ǰջ��Ԫ��
		else//ȡջ��Ԫ��ʧ��
		{
			printf("��ջ!\n");
			break;
		}
		Pop(h, &a);//Ԫ�س�ջ
		arr[i] = a;//��������ճ�ջԪ��
		PrintSlack(h);
	}
	if (GetTop(h, &a) == true)//��ȡջ��Ԫ��
		printf("ջ��Ԫ��: %d \n", a);//չʾ��ǰջ��Ԫ��
	else//ȡջ��Ԫ��ʧ��
		printf("��ջ!\n");
	for (i = 0; i < 5; i++)//չʾ���г�ջԪ��
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 0; i < 5; i++)//ѭ��ʹԪ����ջ
	{
		Push(h, arr[i]);//����Ԫ����ջ
		PrintSlack(h);
	}
	return 0;
}