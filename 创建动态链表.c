#include "stdio.h"
#include "stdlib.h"

#define N 10

struct node//���
{
	int data;//������
	struct node* next;//ָ����
};

struct node* creatlist()//��������
{
	struct node* h, * p, * q;//ͷ�ڵ�h,�½��p,β���q;
	int a;//��Ҫ���������
	h = (struct node*)malloc(sizeof(struct node));//ͷ��������ڴ�
	p = q = h;//һ��ʼͷ��㣬�½�㣬β���ָ��ͬһ��
	scanf_s("%d", &a);//��������
	while (a)//��������ݲ�Ϊ0
	{
		p = (struct node*)malloc(sizeof(struct node));//Ϊ�½�������ڴ�
		p->data = a;//���������뵽�½��
		q->next = p;//β���ָ����ָ���½��p
		q = p;//�½���Ϊ�µ�β���
		scanf_s("%d", &a);//������һ������
	}
	p->next = NULL;//β����޺�̣�����Ҫָ���κ�λ��
	return h;//����ͷ���h�ĵ�ַ
}

void printlist(struct node* h)//�������(����ͷ����ַ)
{
	struct node* p;//����ָ�룬ָ��ǰ���
	p = h->next;//ָ��ָ��ͷ����ָ����
	while (p != NULL)//��ǰ��㲻��β���
	{
		printf("->%d ", p->data);//�����ǰ��������
		p = p->next;//ͨ����ǰ����ָ����ָ����һ�����
	}
	printf("\n");
	return;//�޷���ֵ
}

int main()
{
	struct node* head;//����һ������ͷ����ָ��
	head = creatlist();//����creatlist����������������ͷ���ĵ�ַ
	printlist(head);//����printflist,�������
	return 0;
}