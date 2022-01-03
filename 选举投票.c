#include "stdio.h"

#define N 10

struct vote//定义struct vote类型变量，包含姓氏和得票数两个成员
{
	char surname[10];//姓氏
	int n;//得票数
};

int main()
{
	struct vote election[3] = { {"li",0},{"wang",0},{"zhang",0}};//3个候选人,初始化候选人姓氏，得票数为0
	char str[10];//用于接收投票人选择的候选人姓氏
	int i;
	for (i = 0; i < N; i++)//10个投票人依次投票
	{
		printf("Who you want to vote?\n");
		gets(str);//输入选择的候选人的姓氏，对应候选人的得票数+1
		if (strcmp(str, "li") == 0)
			election[0].n += 1;
		else if (strcmp(str, "wang") == 0)
			election[1].n += 1;
		else if (strcmp(str, "zhang") == 0)
			election[2].n += 1;
	}
	for (i = 0; i < 3; i++)//输出投票结果
		printf("%s's ballot %d\n", election[i].surname, election[i].n);
	return 0;
}