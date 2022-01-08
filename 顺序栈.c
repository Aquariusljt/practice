#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"

#define maxlen 5

typedef struct //定义结构类型栈(顺序栈)
{
	int data[maxlen];
	int top;
}slack;

slack* InitSeqSlack()//初始化顺序栈
{
	slack* s;
	s = malloc(maxlen * sizeof(int));
	int i = 0;
	for (i = 0; i < maxlen; i++)
		s->data[i] = 0;
	s->top = -1;
}

bool SeqPush(slack* s, int a)//顺序栈的元素入栈
{
	if (s->top == maxlen - 1)//栈满，入栈失败
	{
		printf("栈满,元素 %d 入栈失败!\n", a);
		return false;
	}
	s->top++;//新栈顶
	s->data[s->top] = a;//新元素进入栈顶
	return true;//入栈成功
}

bool SeqPop(slack* s, int *a)//顺序栈的元素出栈,给出出栈元素
{
	if (s->top == -1)//栈空，没有元素出栈
	{
		printf("空栈,没有元素出栈!\n");
		return false;
	}
	*a = s->data[s->top];//弹出栈顶元素
	s->data[s->top] = 0;//清除栈顶元素
	s->top--;//新栈顶
	return true;//出栈成功
}

void PrintSeqSlack(slack* s)//输出栈
{
	if (s->top == -1)
		printf("空栈!\n");
	int i = 0;
	for (i = 0; i < s->top + 1; i++)
		printf("%d <- ", s->data[i]);
	printf("\n");
}

int main()
{
	slack* s;//顺序栈的指针
	int i = 0;//循环变量
	int a = 0;//接收数据
	s = InitSeqSlack();//初始化栈
	for (i = 0; i < 10; i++)//元素入栈
	{
		printf("input data:");
		scanf_s("%d", &a);
		if (a == 0)//输入0表示停止输入
			break;
		SeqPush(s, a);//入栈
	}
	PrintSeqSlack(s);
	for (i = 1; s->top != -1; i++)//元素出栈直到栈为空
	{
		SeqPop(s, &a);//出栈
		printf("第%d个出栈元素: %d\n", i, a);
		PrintSeqSlack(s);
	}
	return 0;
}