#include "stdio.h"

#define N 10

struct vote//����struct vote���ͱ������������Ϻ͵�Ʊ��������Ա
{
	char surname[10];//����
	int n;//��Ʊ��
};

int main()
{
	struct vote election[3] = { {"li",0},{"wang",0},{"zhang",0}};//3����ѡ��,��ʼ����ѡ�����ϣ���Ʊ��Ϊ0
	char str[10];//���ڽ���ͶƱ��ѡ��ĺ�ѡ������
	int i;
	for (i = 0; i < N; i++)//10��ͶƱ������ͶƱ
	{
		printf("Who you want to vote?\n");
		gets(str);//����ѡ��ĺ�ѡ�˵����ϣ���Ӧ��ѡ�˵ĵ�Ʊ��+1
		if (strcmp(str, "li") == 0)
			election[0].n += 1;
		else if (strcmp(str, "wang") == 0)
			election[1].n += 1;
		else if (strcmp(str, "zhang") == 0)
			election[2].n += 1;
	}
	for (i = 0; i < 3; i++)//���ͶƱ���
		printf("%s's ballot %d\n", election[i].surname, election[i].n);
	return 0;
}