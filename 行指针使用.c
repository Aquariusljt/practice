//#include "stdio.h"
//
//#define M 3
//#define N 3
//
//int main()
//{
//	int arr[M][N] = { {1,3,3},{4,6,6},{7,9,9} };//�����ʼ��
//	float b[M] = { 0 };//�������arr��ÿһ�е�ƽ��ֵ
//	int (*p)[N] = arr;//��ָ��p
//	float sum;//��ͱ���
//	float aver;//ƽ��ֵ����
//	int i, j;//ѭ������
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (j = 0; j < N; j++)
//			sum += p[i][j];//����Ԫ�غ�
//		aver = sum / N;//����ƽ��ֵ
//		b[i] = aver;//��ƽ��ֵ��ŵ�����b��
//	}
//	for (i = 0; i < M; i++)//�������b
//		printf("%f ", b[i]);
//	return 0;
//}