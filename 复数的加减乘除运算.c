//#include "stdio.h"
//
//struct COMPLEX//����ṹ���͸���
//{
//	float real;//ʵ��
//	float imaginary;//�鲿
//};
//
//
//struct COMPLEX ADD(struct COMPLEX n1, struct COMPLEX n2)//�ӷ�
//{
//	struct COMPLEX n3;//���ڼ�¼����ĸ���
//	n3.real = n1.real + n2.real;//ʵ�����
//	n3.imaginary= n1.imaginary + n2.imaginary;//�鲿���
//	return n3;//���ظ���n3
//}
//
//struct COMPLEX SUBTRACT(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//���ڼ�¼����ĸ���
//	n3.real = n1.real - n2.real;//ʵ�����
//	n3.imaginary = n1.imaginary - n2.imaginary;//�鲿���
//	return n3;//���ظ���n3
//}
//
//struct COMPLEX MULTI(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//���ڼ�¼����ĸ���
//	n3.real = n1.real * n2.real - n1.imaginary * n2.imaginary;//ʵ����� - �鲿���,���ڣ�a+bi * c+di����ʵ��=a*c-b*d
//	n3.imaginary = n1.real * n2.imaginary + n1.imaginary * n2.real;//n1��ʵ�� * n2���鲿 + n1���鲿 * n2��ʵ��,���ڣ�a+bi * c+di�����鲿=a*d-b*c
//	return n3;//���ظ���n3
//}
//
//struct COMPLEX DIV(struct COMPLEX n1, struct COMPLEX n2)
//{
//	struct COMPLEX n3;//���ڼ�¼����ĸ���
//	n3.real = (n1.real * n2.real + n1.imaginary * n2.imaginary) / (n2.real * n2.real + n2.imaginary * n2.imaginary);//���ڣ�a+bi / c+di����ʵ��=(a*c+b*d)/(c*c+d*d)
//	n3.imaginary = (-n1.real * n2.imaginary + n1.imaginary * n2.real) / (n2.real * n2.real + n2.imaginary * n2.imaginary);//���ڣ�a+bi / c+di�����鲿=(-a*d+b*c)/(c*c+d*d)
//	return n3;//���ظ���n3
//}
//
//int main()
//{
//	struct COMPLEX n1 = { 0,0 };//������ʼ��0+0i
//	struct COMPLEX n2 = n1;
//	struct COMPLEX n3 = n1;
//	printf("Please input the real part of real 1\n");//����n1��ʵ��
//	scanf_s("%f", &n1.real);//����n1��ʵ��
//	printf("Please input the imaginary part of real 1\n");
//	scanf_s("%f", &n1.imaginary);//����n1���鲿
//	printf("Please input the real part of real 2\n");
//	scanf_s("%f", &n2.real);//����n2��ʵ��
//	printf("Please input the imaginary part of real 2\n");
//	scanf_s("%f", &n2.imaginary);//����n2���鲿
//	n3 = ADD(n1, n2);//����ADD�������и����ļӷ�����
//	printf("The real 1 plus real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = SUBTRACT(n1, n2);//����SUBTRACT�������и����ļ�������
//	printf("The real 1 minus real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = MULTI(n1, n2);//����MULTI�������и����ĳ˷�����
//	printf("The real 1 multiply real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	n3 = DIV(n1, n2);//����DIV�������и����ĳ�������
//	printf("The real 1 divide real 2 is ");
//	printf("%.1f + %.1fi\n", n3.real, n3.imaginary);
//	return 0;
//}