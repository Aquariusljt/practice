//#include "stdio.h"
//
//int main()
//{
//	int i, j, t;//ѭ������i��j����������t
//	int arr1[4][4] = { {35,73,65,50},{33,47,66,28},{42,19,25,60},{30,72,54,26} };//����arr1
//	printf("the original matrix is :\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}//���ԭ����
//	printf("the transfer matrix is :\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < i; j++)
//			t = arr1[i][j], arr1[i][j] = arr1[j][i], arr1[j][i] = t;
//	}//����ת��
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}//���ת�ú�ľ���
//  return 0;
//}