#include "stdio.h"
#include "stdlib.h"

const int N = 10;


struct node//���
{
	int data;//������
	struct node* next;//ָ����
};

struct node* creatlist(int n)//��������,Ϊÿһ����㸳���ֵ(0~99)
{
	struct node* h, * p, * q;//ͷ�ڵ�h,�½��p,β���q;
	int i;//ѭ������
	h = (struct node*)malloc(sizeof(struct node));//ͷ��������ڴ�
	p = q = h;//һ��ʼͷ��㣬�½�㣬β���ָ��ͬһ��
	srand((unsigned)time(NULL));//�������������,�������ڲ�ͬλ���в�ͬ�ĺ��壡
	for (i = 0; i < n; i++)
	{
		p = (struct node*)malloc(sizeof(struct node));//Ϊ�½�������ڴ�
		p->data = rand()%100;//Ϊ�½���������һ�����ֵ
		q->next = p;//β���ָ����ָ���½��p
		q = p;//�½���Ϊ�µ�β���
	}
	p->next = NULL;//β����޺�̣�����Ҫָ���κ�λ��
	return h;//����ͷ���h�ĵ�ַ
}

void printlist(struct node* h)//�������(����ͷ����ַ)
{
	struct node* p;//����ָ�룬ָ��ǰ���
	p = h->next;//ָ��ָ��ͷ����ָ����
	while (p)//��ǰ��㲻��β���
	{
		printf("->%d ", p->data);//�����ǰ��������
		p = p->next;//ͨ����ǰ����ָ����ָ����һ�����
	}
	printf("\n");
	return;//�޷���ֵ
}

int fun(struct node* h)//��һ�������и����������Ϊż������ֵ�ۼ�
{
	int sum = 0;//��ͱ���
	struct node* p;//����ָ�룬ָ��ǰ���
	p = h->next;//ͨ��ͷ����ָ����ָ���һ�����
	while (p)//��ǰ��㲻��β���
	{
		if((p->data) % 2 == 0)//������Ϊż������ֵ�ۼ�
			sum += p->data;
		p = p->next;//ͨ����ǰ����ָ����ָ����һ�����
	}
	return sum;//����ͽ������
}

int main()
{
	struct node* head;//����һ������ͷ����ָ��
	int sum = 0;//���ڽ��������и�����������Ϊż����ֵ�ļӺ�
	head = creatlist(N);//����creatlist����������������ͷ���ĵ�ַ
	printlist(head);//����printflist,�������
	sum = fun(head);//������ͽ��(ż��ֵ���)
	printf("%d\n", sum);//��������и�����������Ϊż����ֵ�ļӺͽ��
	return 0;
}