//#include "stdio.h"
//
//#define N 10
//
//struct telephone//����ṹ����telephone
//{
//	char name[20];//����
//	char mobile[12];//�ֻ���
//	char phone[12];//������
//};
//
//int input(struct telephone* p)
//{
//	int i;//ѭ������
//	for (i = 0; i < N; i++)//����ͨѶ¼���ݣ�ÿ��ѭ����ʾ�����(i+1)���˵�����
//	{
//		printf("Name?Enter \"xxx\" to end");//ͨ������xxx��ʾ�������
//		gets(p[i].name);//����
//		if (strcmp(p[i].name, "xxx") == 0)//ͨ������xxx��ʾ�������
//			return i;//����ͨѶ¼�е�����
//		printf("Mobile?");//�绰��
//		gets(p[i].mobile);
//		printf("Telephone?");//������
//		gets(p[i].phone);
//	}
//	return i;//����ͨѶ¼�е�����
//}
//
//void display(struct telephone *p,int n)
//{
//	int i;//ѭ������
//	for (i = 0; i <n; i++) //�������ͨѶ¼�е�����
//		printf("%-20s %-12s %-12s\n", p[i].name,p[i].mobile, p[i].phone);
//}
//
//int main()
//{
//	struct telephone tx[N];//struct telephone������
//	int n;//���ڽ���ͨѶ¼�е�����
//	n = input(tx);//����input��������ͨѶ¼�������벢����ͨѶ¼����
//	if (n >= 0)//ͨѶ¼��Ϊ��
//		display(tx, n);//���ͨѶ¼�е�����
//	return 0;
//}