//#include "stdio.h"
//
//#define N 5
//
//int main()
//{
//	int i, j;
//	int n = 0;
//	int arr1[N] = { 0 };
//	int arr2[N] = { 0 };
//	int arr3[2*N] = { 0 };
//	printf("Please input the number in arr1\n");
//	for (i = 0; i < N; i++)//����arr1
//		scanf_s("%d", &arr1[i]);
//	printf("Please input the number in arr2\n");
//	for (i = 0; i < N; i++)//����arr2
//		scanf_s("%d", &arr2[i]);
//	for (i = 0, j = 0; i < N && j < N; i++)
//	{
//		for (; j < N && i < N;) 
//			if (arr1[i] < arr2[j])//arr1Ԫ��С��arr2Ԫ�أ�arr1��Ԫ�ؽ���arr3��arr1�±�(i)+1��arr2�±�(j)����
//			{
//				arr3[n++] = arr1[i++];
//			}
//			else//arr2��ǰԪ��С��(�����)arr1Ԫ�أ�arr2��Ԫ�ؽ���arr3��arr2�±�(j)+1��arr1�±�(i)����
//				arr3[n++] = arr2[j++];
//		break;//���arr2Ԫ��ȫ������arr3������ֱ���˳���ѭ��
//	}
//	if (i == N && j != N)//������arr1ȫ������arr3ʱ��arr2ʣ��Ԫ�����ν���arr3��ʣ��λ��
//		for (; j < N; j++)
//			arr3[n++] = arr2[j];
//	if (j == N && i != N)//������arr2ȫ������arr3ʱ��arr1ʣ��Ԫ�����ν���arr3��ʣ��λ��
//		for (; i < N; i++)
//			arr3[n++] = arr1[i];
//	printf("The arr3 is:\n");
//	for (i = 0; i < 2*N; i++)//���arr3
//		printf("%3d", arr3[i]);
//	return 0;
//}