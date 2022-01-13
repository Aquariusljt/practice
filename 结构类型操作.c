#include "stdio.h"

typedef struct//����ṹ����PS,��¼ѧ�ţ��������Ա�������Ϣ
{
	int id;//ѧ��
	char name[10];//����
	char sex[2];//�Ա�
}PS;

int delete(PS* p1, int m, PS* p2, int n)//��p1��ɾȥp2�д��ڵ����ݣ�����p1��Ԫ�ظ�����p1,p2�Ѿ���ѧ���������У�
{
	int i, j, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (p1[i].id == p2[j].id)
			{
				for (k = i; k < m - 1; k++)//����Ҫɾ����λ�ÿ�ʼ�Ӻ���ǰ�ƶ�����Ԫ��
				{
					p1[k].id = p1[k + 1].id;
					strcpy(p1[k].name, p1[k + 1].name);
					strcpy(p1[k].sex, p1[k + 1].sex);
				}
				m--;//ɾ��������Ԫ�ظ�������
			}
	return m;
}

int merge(PS* p1, int m, PS* p2, int n)//��p1�м���p2�е����ݣ�����p1��Ԫ�ظ�����p1,p2�Ѿ���ѧ����������,�ϲ����p1��Ȼ��Ҫ��ѧ���������У�
{
	int i, j, k;
	j = 0;
	for (i = 0; i < m; i++)
	{
		for (; j < n; j++)
		{
			if (p1[i].id < p2[j].id)//���p2�е�ǰ�����p1��ǰ�������뵽��Ԫ�������
			{
				for (k = m; k > i + 1; k--)//�Ƚ�p1��Ԫ�شӺ���ǰ��������ƶ���ֱ����Ҫ�����λ��Ϊֹ��
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i + 1].id = p2[j].id;
				strcpy(p1[i + 1].name, p2[j].name);
				strcpy(p1[i + 1].sex, p2[j].sex);
				m++;//p1��Ԫ������Ӧ��������Ԫ�صļ��������
				i++;
				j++;
				break;
			}
			else if (p1[i].id > p2[j].id)
			{
				for (k = m; k > i; k--) //��p1��Ԫ�شӺ���ǰ��������ƶ���ֱ����Ҫ�����λ��Ϊֹ��
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i].id = p2[j].id;//����Ӧ��λ�ò���p2�ĵ�ǰԪ��
				strcpy(p1[i].name, p2[j].name);
				strcpy(p1[i].sex, p2[j].sex);
				m++;//p1��Ԫ������Ӧ��������Ԫ�صļ��������
				i++;
				j++;
				break;
			}
		}
	}//���p2����ʣ��Ԫ����p2��ʣ��Ԫ�����μ��뵽p1��
	for (i = m; j < n; i++, j++)
	{
		p1[i].id = p2[j].id;//p2Ԫ�ؼ��뵽p1ĩβ
		strcpy(p1[i].name, p2[j].name);
		strcpy(p1[i].sex, p2[j].sex);
		m++;//p1��Ԫ������Ӧ��������Ԫ�صļ��������
	}
	return m;
}

void sort(PS* p, int n)//Ϊp���Ա�����ͬ�Ա�֮�䰴������������
{
	int i, j;
	int t;//���ڽ����ṹ����ΪPS������p�еĸ����Ա
	char tname[10];//���ڽ����ṹ����ΪPS������p�еĸ����Ա
	char tsex[2];//���ڽ����ṹ����ΪPS������p�еĸ����Ա
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - j - 1; i++)
		{
			if (strcmp(p[i].sex, p[i + 1].sex) > 0)//ð�ݷ����������Ƚ��Ա��ĺ��ƣ���Ԫ�ؽ��н�����
			{
				t = p[i].id;
				strcpy(tname, p[i].name);
				strcpy(tsex, p[i].sex);
				p[i].id = p[i + 1].id;
				strcpy(p[i].name, p[i + 1].name);
				strcpy(p[i].sex, p[i + 1].sex);
				p[i + 1].id = t;
				strcpy(p[i + 1].name, tname);
				strcpy(p[i + 1].sex, tsex);
			}
			else if (strcmp(p[i].sex, p[i + 1].sex) == 0 && strcmp(p[i].name, p[i + 1].name) > 0)//ð�ݷ����������Ƚ�ͬ�Ա����ִ�ĺ��ƣ���Ԫ�ؽ��н�����
			{
				t = p[i].id;
				strcpy(tname, p[i].name);
				strcpy(tsex, p[i].sex);
				p[i].id = p[i + 1].id;
				strcpy(p[i].name, p[i + 1].name);
				strcpy(p[i].sex, p[i + 1].sex);
				p[i + 1].id = t;
				strcpy(p[i + 1].name, tname);
				strcpy(p[i + 1].sex, tsex);
			}
		}
}

void display(PS* p, int n)//����ṹ����ΪPS������p����Ϣ
{
	int i;
	printf("ID \tNAME     \tSEX\n");//�����������Ϣ�ı���
	for (i = 0; i < n; i++)//Ȼ�����p�е���Ϣ
		printf("%3d\t%-9s\t%s\n", p[i].id, &p[i].name, &p[i].sex);
}

int main()
{
	int m, n;//�ֱ��¼p1,p2�е�Ԫ�ظ���
	PS p1[10] = { { 101, "tom","m" }, { 103,"mary","f" }, { 104,"mark","m" },
	{ 105,"julia","f" }, { 106, "sara","f" } };//�����ṹ����p1����ʼ��
	PS p2[10] = { {102, "mark","m"},{104,"mark","m"} };//�����ṹ����p2����ʼ��
	m = 5;//p1��Ԫ�ظ���
	n = 2;//p2��Ԫ�ظ���
	printf("a:\n");//�����һ������p1����Ϣ
	display(p1, m);
	printf("b:\n");//����ڶ�������p2����Ϣ
	display(p2, n);
	m = delete(p1, m, p2, n);//����delete��p1��ɾȥp2�д��ڵĲ���
	printf("a:\n");//�������delete������p1����Ϣ
	display(p1, m);
	n = merge(p2, n, p1, m);//����merge��p2�м���p1��Ԫ��
	printf("b:\n");//�������merge������p2����Ϣ
	display(p2, n);
	sort(p1, m);//����sort��p1�������򣨰����Ա�����ͬ�Ա�����������
	printf("a:\n");//�������sort������p1����Ϣ
	display(p1, m);
	return 0;
}