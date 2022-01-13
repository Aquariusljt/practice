#include "stdio.h"

typedef struct//定义结构类型PS,记录学号，姓名，性别三样信息
{
	int id;//学号
	char name[10];//姓名
	char sex[2];//性别
}PS;

int delete(PS* p1, int m, PS* p2, int n)//从p1中删去p2中存在的内容，返回p1的元素个数（p1,p2已经按学号升序排列）
{
	int i, j, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (p1[i].id == p2[j].id)
			{
				for (k = i; k < m - 1; k++)//从需要删除的位置开始从后往前移动数组元素
				{
					p1[k].id = p1[k + 1].id;
					strcpy(p1[k].name, p1[k + 1].name);
					strcpy(p1[k].sex, p1[k + 1].sex);
				}
				m--;//删除后数组元素个数减少
			}
	return m;
}

int merge(PS* p1, int m, PS* p2, int n)//在p1中加入p2中的内容，返回p1的元素个数（p1,p2已经按学号升序排列,合并后的p1仍然需要按学号升序排列）
{
	int i, j, k;
	j = 0;
	for (i = 0; i < m; i++)
	{
		for (; j < n; j++)
		{
			if (p1[i].id < p2[j].id)//如果p2中当前的项比p1当前项大则插入到该元素项后面
			{
				for (k = m; k > i + 1; k--)//先将p1的元素从后往前依次向后移动（直到需要插入的位置为止）
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i + 1].id = p2[j].id;
				strcpy(p1[i + 1].name, p2[j].name);
				strcpy(p1[i + 1].sex, p2[j].sex);
				m++;//p1的元素数量应当随着新元素的加入而增加
				i++;
				j++;
				break;
			}
			else if (p1[i].id > p2[j].id)
			{
				for (k = m; k > i; k--) //将p1的元素从后往前依次向后移动（直到需要插入的位置为止）
				{
					p1[k].id = p1[k - 1].id;
					strcpy(p1[k].name, p1[k - 1].name);
					strcpy(p1[k].sex, p1[k - 1].sex);
				}
				p1[i].id = p2[j].id;//在相应的位置插入p2的当前元素
				strcpy(p1[i].name, p2[j].name);
				strcpy(p1[i].sex, p2[j].sex);
				m++;//p1的元素数量应当随着新元素的加入而增加
				i++;
				j++;
				break;
			}
		}
	}//如果p2还有剩余元素则将p2中剩余元素依次加入到p1中
	for (i = m; j < n; i++, j++)
	{
		p1[i].id = p2[j].id;//p2元素加入到p1末尾
		strcpy(p1[i].name, p2[j].name);
		strcpy(p1[i].sex, p2[j].sex);
		m++;//p1的元素数量应当随着新元素的加入而增加
	}
	return m;
}

void sort(PS* p, int n)//为p按性别排序，同性别之间按姓名升序排序
{
	int i, j;
	int t;//用于交换结构类型为PS的数组p中的各项成员
	char tname[10];//用于交换结构类型为PS的数组p中的各项成员
	char tsex[2];//用于交换结构类型为PS的数组p中的各项成员
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - j - 1; i++)
		{
			if (strcmp(p[i].sex, p[i + 1].sex) > 0)//冒泡法排序，两两比较性别大的后移（两元素进行交换）
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
			else if (strcmp(p[i].sex, p[i + 1].sex) == 0 && strcmp(p[i].name, p[i + 1].name) > 0)//冒泡法排序，两两比较同性别名字大的后移（两元素进行交换）
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

void display(PS* p, int n)//输出结构类型为PS的数组p的信息
{
	int i;
	printf("ID \tNAME     \tSEX\n");//先输出各项信息的标题
	for (i = 0; i < n; i++)//然后输出p中的信息
		printf("%3d\t%-9s\t%s\n", p[i].id, &p[i].name, &p[i].sex);
}

int main()
{
	int m, n;//分别记录p1,p2中的元素个数
	PS p1[10] = { { 101, "tom","m" }, { 103,"mary","f" }, { 104,"mark","m" },
	{ 105,"julia","f" }, { 106, "sara","f" } };//声明结构数组p1并初始化
	PS p2[10] = { {102, "mark","m"},{104,"mark","m"} };//声明结构数组p2并初始化
	m = 5;//p1中元素个数
	n = 2;//p2中元素个数
	printf("a:\n");//输出第一个数组p1的信息
	display(p1, m);
	printf("b:\n");//输出第二个数组p2的信息
	display(p2, n);
	m = delete(p1, m, p2, n);//调用delete从p1中删去p2中存在的部分
	printf("a:\n");//输出调用delete后数组p1的信息
	display(p1, m);
	n = merge(p2, n, p1, m);//调用merge在p2中加入p1的元素
	printf("b:\n");//输出调用merge后数组p2的信息
	display(p2, n);
	sort(p1, m);//调用sort对p1进行排序（按照性别排序，同性别按照名字排序）
	printf("a:\n");//输出调用sort后数组p1的信息
	display(p1, m);
	return 0;
}