//#include "stdio.h"
//#include "stdlib.h"
//
//
//int main()
//{
//	int n = 0;//�ڴ��е�Ԫ�ظ�������������
//	int i;//ѭ������
//	int* p;//ָ����������ڴ�(�׵�ַ)��ָ��
//	int sum = 0, sqr = 0;//������ͺ���ƽ���ı���
//	printf("Please input the number of array:");//��Ҫ������ڴ���Ԫ�ظ���
//	scanf_s("%d", &n);
//	p = (int*)calloc(n, sizeof(int));//��̬�����ڴ棬�ڴ��С=Ԫ�ظ���*ÿ��Ԫ�صĴ�С(calloc�������ڴ��ͬʱ�Ὣ�ڴ����ݳ�ʼ��)
//	if (p == 0)//�����ڴ�ʧ��
//	{
//		printf("not able to allocate memory.\n");
//		exit(1);
//	}
//	for (i = 0; i < n; i++)//��������Ҫ�����ݵ��ڴ��е���Ӧλ��
//	{
//		printf("Please input the values of array[%d]:",i);
//		scanf_s("%d", p + i);
//	}
//	for (i = 0; i < n; i++)//�ڴ��е����ݼ���
//	{
//		sqr = (*(p + i)) * (*(p + i));//��Ԫ��ֵ��ƽ��
//		sum += sqr;//��ƽ����
//	}
//	printf("the array:");//��ʾ�ڴ��е�����
//	for (i = 0; i < n; i++)
//		printf("%5d", *(p + i));
//	free(p);//�ͷ��ڴ�
//	printf("\n");
//	printf("sum=%d", sum);//���������
//	return 0;
//}