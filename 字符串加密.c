//#include "stdio.h"
//
//#define N 10
//
//void crypt(char str[],int len,int n)//�����ַ�������ĸ�ƶ�nλ
//{
//	int i;//ѭ������
//	for (i = 0; i < len; i++)
//	{
//			if (str[i] <= 'Z' && str[i] >= 'A')//ABCD��WXYZABCD��,65='A'
//				str[i] = (str[i] - 65 + n) % 26 + 65;
//			if (str[i] <= 'z' && str[i] >= 'a')//abcd��wxyzabcd��,97='a'
//				str[i] = (str[i] - 97 + n) % 26 + 97;
//	}
//}
//
//int main()
//{
//	int n;//�����ַ�������ĸ�ƶ�nλ
//	int len = 0;//�ַ�������
//	char str[N] = { 0 };//�ַ����������ַ���
//	gets(str);//�����ַ���
//	str[N-1] = '\0';
//	len = strlen(str);//���ַ�����Ч����
//	printf("Moving distance:");//�����ַ�����Ҫ�ƶ��ľ���
//	scanf_s("%d", &n);
//	crypt(str, len, n);//���ú���crypt���ܳ���Ϊlen�ַ���str����ĸ�ƶ�nλ
//	printf("%s", str);//�������ܴ������ַ���
//	return 0;
//}