//#include "stdio.h"
//
//#define N 10
//
//
//int strcmp(char str1[], char str2[])//�Ƚ��ַ���str1,str2�Ĵ�С
//{
//	int i;//ѭ������
//	char ch1, ch2;//�ֱ����str1��str2���ַ�
//	for (i = 0; str1[i] || str2[i]; i++)//�������ַ����е�Ԫ�ض���ȡ���ʱ����
//	{
//		ch1 = str1[i];//����str1���ַ�
//		ch2 = str2[i];//����str2���ַ�
//		if (ch1 != ch2)//��ch1��ch2��ͬʱ��ch1��ch2�Ĳ�ֵ�������ַ����Ĳ�ֵ
//			break;
//	}
//	return ch1-ch2;//�������ַ����Ĳ�ֵ
//}
//
//int main()
//{
//	int i, n;//ѭ���������ַ����Ĳ�ֵ
//	char str1[N], str2[N];//�ַ���1���ַ���2
//	printf("Please input the string1:");
//	gets(str1);//�����ַ���1
//	printf("Please input the string2:");
//	gets(str2);//�����ַ���2
//	n = strcmp(str1, str2);//����strcmp����(���б��Ƶ�)�Ƚ����ַ����Ĵ�С���������ֵ
//	printf("%d", n);//����ַ����Ĳ�ֵ
//	return 0;
//}