//#include "stdio.h"
//
//#define N 3
//
//float mean(int a[],int n)//��������(a[],����n��Ԫ�ص�)��ƽ��ֵ
//{
//	int i;//ѭ������
//	float aver = 0;//���ڼ���ƽ��ֵ
//	for (i = 0; i < n; i++)
//		aver += a[i];//Ԫ�����
//	aver /= n;//�ͳ���Ԫ�ظ����õ�ƽ��ֵ
//	return aver;//����ƽ��ֵ
//}
//
//int main()
//{
//	int n;//���ڼ�������Ԫ�ظ���
//	int i;//ѭ������
//	int arr[N] = { 0 };//�������飬ȫ����ʼ��Ϊ0
//	float aver = 0;//���ڽ�������Ԫ�ص�ƽ��ֵ
//	for (i = 0; i < N; i++)//����Ԫ��ѭ������
//		scanf_s("%d", &arr[i]);
//	n = (sizeof(arr) / sizeof(arr[0]));//��������Ԫ�ظ���
//	aver = mean(arr, n);//����mean����(��������Ԫ�ظ���)������ƽ��ֵ
//	printf("%f", aver);//��ʾƽ��ֵ
//	return 0;
//}