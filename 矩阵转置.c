//#include "stdio.h"
//
//#define N 4
//
//void trans(int** p,int n)//����Ķ���ָ�룬����ά��
//{
//	int t;//��������
//	int i, j;//ѭ������
//	for(i=0;i<n;i++)
//		for (j = i+1; j < n; j++)//����j����i�Ĳ���
//		{
//			t = p[i][j];
//			p[i][j] = p[j][i];
//			p[j][i] = t;
//		}
//}
//
//int main()
//{
//	int i, j;//ѭ������
//	int arr[N][N] = { 0 };//��ά����
//	int* pa[N];//ָ������
//	int** ppa;//����ָ��
//	for (i = 0; i < N; i++)//paָ���ά����arr������
//		pa[i] = arr[i];
//	ppa = pa;//ppaָ��ָ������pa
//	for (i = 0; i < N; i++)//�������Ԫ��
//		for (j = 0; j < N; j++)
//			scanf_s("%d", &arr[i][j]);
//	//for (i = 0; i < N; i++)//����
//	//{
//	//	for (j = 0; j < N; j++)
//	//		printf("%5d", ppa[i][j]);
//	//	printf("\n");
//	//}
//	trans(ppa, N);//���ú���transʵ��nά����ת��
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%5d", ppa[i][j]);
//		printf("\n");
//	}
//	return 0;
//}