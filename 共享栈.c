#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

#define Max 10

typedef struct shareslack
{
	int data[Max];
	int top1, top2;
}shareslack;

shareslack* initslack1(shareslack* s)
{
	int i;
	for (i = 0; i < s->top2; i++)
		s->data[i] = 0;
	s->top1 = -1;
	return s;
}

shareslack* initslack2(shareslack* s)
{
	int i;
	for (i = Max - 1; i > s->top1; i--)
		s->data[i] = 0;
	s->top2 = Max;
	return s;
}

bool emptyslack(shareslack s,int i) //栈判空
{
	if (i == 1)//栈1判空
	{
		if (s.top1 == -1)
			return true;
		else
			return false;
	}
	else if (i == 2)//栈2判空
	{
		if (s.top2 == Max)
			return true;
		else
			return false;
	}
}

bool push(shareslack *s, int a, int x)
{
	if (s->top2 - s->top1 == 1)//栈已满，不能入栈
		return false;
	if (a == 1)//进入栈1
	{
		s->top1++;
		s->data[s->top1] = x;
		return true;
	}
	else if (a == 2)//进入栈2
	{
		s->top2--;
		s->data[s->top2] = x;
		return true;
	}
	else//非法入栈
		return false;
}

bool pop(shareslack* s, int a, int* x)
{
	if (a == 1)
	{
		if (emptyslack(*s, 1) == true)//栈1空，不能出栈
			return false;
		*x = s->data[s->top1];
		s->data[s->top1] = 0;
		s->top1--;
		return true;
	}
	else if (a == 2)
	{
		if (emptyslack(*s, 2) == true)//栈2空，不能出栈
			return false;
		*x = s->data[s->top2];
		s->data[s->top2] = 0;
		s->top2++;
		return true;
	}
	else//非法出栈
		return false;
}

printslack(shareslack s)
{
	int i;
	if (s.top1 != -1)
	{
		printf("NULL");
		for (i = s.top1; i > -1; i--)//从栈顶开始输出
		{
			printf(" <-- %d", s.data[i]);
		}
	}
	else
		printf("栈1为空栈");//空栈提示
	printf(" || ");
	if (s.top2 != Max)//从栈顶开始输出
	{

		for (i = s.top2; i < Max; i++)
		{
			printf("%d --> ", s.data[i]);
		}
		printf("NULL");
	}
	else
		printf("栈2为空栈");//空栈提示
	printf("\n");
	return;
}

int main()
{
	shareslack s;
	shareslack* ps = &s;
	int i, j;
	ps = initslack1(ps);
	ps = initslack2(ps);
	for (i = 0, j = Max - 1; ps->top2 - ps->top1 != 1; i++, j--)
	{
		push(ps, 1, 2 * i);
		printslack(*ps);
		push(ps, 2, j - i);
		printslack(*ps);
	}
	return 0;
}