#include "stdio.h"

#define N 10

int main()
{
	int i, j;//ѭ������
	int t = 0;//�жϱ���
	int index = -1;//��¼str2��str1�е���ʼλ��(�����±�)
	char str1[N];//�ַ���1
	char str2[N];//�ַ���2
	int len1 = 0;//��¼�ַ���1�ĳ���
	int len2 = 0;//��¼�ַ���2�ĳ���
	printf("Please input the str1:\n");
	gets(str1);//�����ַ���1
	printf("Please input the str2:\n");
	gets(str2);//�����ַ���2
	len1 = strlen(str1);//�ַ���1�ĳ���
	len2 = strlen(str2);//�ַ���2�ĳ���
	for (i = 0; i < (len1+1) - len2; i++)//���ַ���1��δ�����жϵĲ���(len1+1)С���ַ���2�ĳ���(len2)ʱ,str2��Ȼ����������str1��
	{
		if (str1[i] == str2[0])//���ַ���1��ĳ�ַ����ַ���2�����ַ���ͬʱ
		{
			index = i;//��Ǹ��ַ�λ��(�����±�)
			for (j = 1; j < len2; j++)//����str2�Ƿ񱻰�����str1��
			{
				if (str1[i + j] == str2[j])//��t=1��ʾ��ȷ
					t = 1;
				else//�������,��t=0����ʾ��������������ж�
				{
					t = 0;
					break;
				}
			}
		}
	}
	if (t == 0) //���t=0,˵��str2����str1�У���ǩ����Ϊ��ʼֵ-1
	{
		printf("str2 no in str1");
		index = -1;
	}
	if (t == 1 && (++index) > 0)//t=1���ұ�ǩindex��Ϊ-1˵��str2��str1��,��ʼλ��=����¼�������±�+1
		printf("%d", index);//�����ʼλ��
	return 0;
}