//#include "stdio.h"
//
//#define N 10
//
//int main()
//{
//	int i;//ѭ������
//	char ch;//�ַ��ͽ�������
//	int len;//�ַ������ȱ���
//	int n = N;
//	char str[N];//�ַ�������
//	printf("Please input the string,the length of string no more than %d:",n);
//	gets(str);
//	len = strlen(str);//��ȡ�ַ�������
//	for (i = 0; i < len/2; i++)//���ַ����������򽻻�(ֻ��Ҫ����һ�룬����ȫ�����ڲ��ı�˳��)
//	{
//		ch = str[i];
//		str[i] = str[len - i - 1];
//		str[len - i - 1] = ch;
//	}
//	for (i = 0; i < len; i++)//������������ַ���
//		printf("%c", str[i]);
//	return 0;
//}