#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"

#define maxlen 5

typedef struct //����ṹ����ջ(˳��ջ)
{
	int data[maxlen];
	int top;
}slack;

slack* InitSeqSlack()//��ʼ��˳��ջ
{
	slack* s;
	s = malloc(maxlen * sizeof(int));
	int i = 0;
	for (i = 0; i < maxlen; i++)
		s->data[i] = 0;
	s->top = -1;
}

bool SeqPush(slack* s, int a)//˳��ջ��Ԫ����ջ
{
	if (s->top == maxlen - 1)//ջ������ջʧ��
	{
		printf("ջ��,Ԫ�� %d ��ջʧ��!\n", a);
		return false;
	}
	s->top++;//��ջ��
	s->data[s->top] = a;//��Ԫ�ؽ���ջ��
	return true;//��ջ�ɹ�
}

bool SeqPop(slack* s, int *a)//˳��ջ��Ԫ�س�ջ,������ջԪ��
{
	if (s->top == -1)//ջ�գ�û��Ԫ�س�ջ
	{
		printf("��ջ,û��Ԫ�س�ջ!\n");
		return false;
	}
	*a = s->data[s->top];//����ջ��Ԫ��
	s->data[s->top] = 0;//���ջ��Ԫ��
	s->top--;//��ջ��
	return true;//��ջ�ɹ�
}

void PrintSeqSlack(slack* s)//���ջ
{
	if (s->top == -1)
		printf("��ջ!\n");
	int i = 0;
	for (i = 0; i < s->top + 1; i++)
		printf("%d <- ", s->data[i]);
	printf("\n");
}

int main()
{
	slack* s;//˳��ջ��ָ��
	int i = 0;//ѭ������
	int a = 0;//��������
	s = InitSeqSlack();//��ʼ��ջ
	for (i = 0; i < 10; i++)//Ԫ����ջ
	{
		printf("input data:");
		scanf_s("%d", &a);
		if (a == 0)//����0��ʾֹͣ����
			break;
		SeqPush(s, a);//��ջ
	}
	PrintSeqSlack(s);
	for (i = 1; s->top != -1; i++)//Ԫ�س�ջֱ��ջΪ��
	{
		SeqPop(s, &a);//��ջ
		printf("��%d����ջԪ��: %d\n", i, a);
		PrintSeqSlack(s);
	}
	return 0;
}