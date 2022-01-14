#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//����ṹ���͡������
{
	char data;
	struct LinkNode* next;
}LinkNode;

LinkNode* InitSlack()//ջ�ĳ�ʼ��
{
	LinkNode* h;
	h = (LinkNode*)malloc(sizeof(LinkNode));
	h->next = NULL;
	return h;
}

void Push(LinkNode* h,char ch)//Ԫ����ջ
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	p->next = h->next;
	h->next = p;
	p->data = ch;
	return;
}

bool Pop(LinkNode* h, char *ch)//����ջ��Ԫ��
{
	if (h->next == NULL)
		return false;
	LinkNode* p;
	p = h->next;
	*ch = p->data;
	h->next = p->next;
	free(p);
	return true;
}

bool PrintSlack(LinkNode* h)//���ջ������Ԫ��
{
	if (h->next == NULL)
	{
		printf("��ջ!");
		return false;
	}
	LinkNode* p;
	for (p = h->next; p != NULL; p = p->next)
		printf("%c -> ", p->data);
	printf("NULL!\n");
	return true;
}

bool LegalOrder(char str[])//�ж��Ƿ��ǺϷ��Ľ�ջ��ջ��������(I/O�ֱ��ʾ��ջ�ͳ�ջ������ջ�ĳ�̬����̬��Ϊ��)
{
	LinkNode* h;
	int i;
	char ch;
	h = InitSlack();
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'I')//�����ǰԪ����I��ʹI����ջ��
			Push(h, str[i]);
		else if (str[i] == 'O')//�����ǰԪ����O���ջ�е���һ��I,���ջΪ����˵���ò��������ǲ��Ϸ���(��Ϊջ�ĳ�̬Ӧ��Ϊ��)������false
			if (Pop(h, &ch) == false)
				return false;
	}
	if (h->next != NULL)//���ջ�л���ʣ���Iû�е�����˵���ò��������ǲ��Ϸ���(��Ϊջ����̬Ӧ��Ϊ��)������false
		return false;
	else
		return true;//���û��Iʣ��˵���ò������кϷ�������true
}

bool BracketMatch(char str[])//�жϱ��ʽ�е������Ƿ���ȷ���
{
	LinkNode* h;
	int i;
	char ch;
	h = InitSlack();
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '('|| str[i] == '['|| str[i] == '{')//�����ǰԪ������������������Ž���ջ��
			Push(h, str[i]);
		else if (str[i] == ')')//�����ǰԪ�������������ջ�е���һ��������
		{
			if (Pop(h, &ch) == false)//����ǿ�ջ���ܵ��������ţ�ƥ��ʧ�ܣ�����false
				return false;
			if (ch == '(')//���ƥ��ɹ������
				continue;
			else//���ƥ��ʧ���򷵻�false
				return false;
		}
		else if (str[i] == ']')//�����ǰԪ�������������ջ�е���һ��������
		{
			if (Pop(h, &ch) == false)//����ǿ�ջ���ܵ��������ţ�ƥ��ʧ�ܣ�����false
				return false;
			if (ch == '[')//���ƥ��ɹ������
				continue;
			else//���ƥ��ʧ���򷵻�false
				return false;
		}
		else if (str[i] == '}')//�����ǰԪ�������������ջ�е���һ��������
		{
			if (Pop(h, &ch) == false)//����ǿ�ջ���ܵ��������ţ�ƥ��ʧ�ܣ�����false
				return false;
			if (ch == '{')//���ƥ��ɹ������
				continue;
			else//���ƥ��ʧ���򷵻�false
				return false;
		}
	}
	if (h->next != NULL)//���ջ�л���ʣ���������û�е���������false
		return false;
	else
		return true;//���û��ʣ��������ţ�����true
}

int main()
{
	int i;
	char str[4][10] = {"IOIIOIOO","IOOIOIIO","IIIOIOIO","IIIOOIOO"};//����ջ��������(I��ʾ��չ������O��ʾ��ջ����)
	char str2[4][30] = { "[(a+b)*c]-(d-e)/f+g","[(a+b)*c]-[(d-e)/(f+g)","[(a+b)*c]-(d-e]/f+g","[(a+b)*c]-{d-e/f+g" };//���ʽ
	for (i = 0; i < 4; i++)//������ջ���������Ƿ�Ϸ�
		if (LegalOrder(str[i]) == true)
			printf("the order %d is legal\n", i + 1);
		else
			printf("the order %d is illegal\n", i + 1);
	for (i = 0; i < 4; i++)//�����ʽ�е������Ƿ���ȷƥ��
		if (BracketMatch(str2[i]) == true)
			printf("the brackets in expression %d can match\n", i + 1);
		else
			printf("the brackets in expression %d cannot match\n", i + 1);
	return 0;
}
