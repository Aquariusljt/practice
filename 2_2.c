#include "stdio.h"
#include "math.h"
const float pi = 3.14159f;

void main()
{
	float r1, r2, aera1, aera2 = 0;//���Բ������Բ�İ뾶�����
	float a = 0;//�����α߳�
	printf("please input a:");//������ʾ
	scanf_s("%f", &a);//����߳�
	r1 = a / 2;
	r2 = (float)sqrt(2) * a / 2;
	aera1 = pi * r1 * r1;
	aera2 = pi * r2 * r2;
	printf("%f,%f", r1, r2);
	printf("����Բ���=%f,���Բ���=%f", aera1, aera2);//������
}