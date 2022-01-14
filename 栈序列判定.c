#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct LinkNode//定义结构类型——结点
{
	char data;
	struct LinkNode* next;
}LinkNode;

LinkNode* InitSlack()//栈的初始化
{
	LinkNode* h;
	h = (LinkNode*)malloc(sizeof(LinkNode));
	h->next = NULL;
	return h;
}

void Push(LinkNode* h,char ch)//元素入栈
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	p->next = h->next;
	h->next = p;
	p->data = ch;
	return;
}

bool Pop(LinkNode* h, char *ch)//弹出栈顶元素
{
	if (h->next == NULL)
		return false;
	LinkNode* p;
	p = h->next;
	*ch = p->data;
	h->next = p->next;
	free(p);
	return true;
}

bool PrintSlack(LinkNode* h)//输出栈中所有元素
{
	if (h->next == NULL)
	{
		printf("空栈!");
		return false;
	}
	LinkNode* p;
	for (p = h->next; p != NULL; p = p->next)
		printf("%c -> ", p->data);
	printf("NULL!\n");
	return true;
}

bool LegalOrder(char str[])//判断是否是合法的进栈出栈操作序列(I/O分别表示进栈和出栈操作，栈的初态和终态均为空)
{
	LinkNode* h;
	int i;
	char ch;
	h = InitSlack();
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'I')//如果当前元素是I则使I进入栈中
			Push(h, str[i]);
		else if (str[i] == 'O')//如果当前元素是O则从栈中弹出一个I,如果栈为空则说明该操作序列是不合法的(因为栈的初态应当为空)，返回false
			if (Pop(h, &ch) == false)
				return false;
	}
	if (h->next != NULL)//如果栈中还有剩余的I没有弹出则说明该操作序列是不合法的(因为栈的终态应当为空)，返回false
		return false;
	else
		return true;//如果没有I剩余说明该操作序列合法，返回true
}

bool BracketMatch(char str[])//判断表达式中的括号是否正确配对
{
	LinkNode* h;
	int i;
	char ch;
	h = InitSlack();
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '('|| str[i] == '['|| str[i] == '{')//如果当前元素是左括号则该左括号进入栈中
			Push(h, str[i]);
		else if (str[i] == ')')//如果当前元素是右括号则从栈中弹出一个左括号
		{
			if (Pop(h, &ch) == false)//如果是空栈则不能弹出左括号，匹配失败，返回false
				return false;
			if (ch == '(')//如果匹配成功则继续
				continue;
			else//如果匹配失败则返回false
				return false;
		}
		else if (str[i] == ']')//如果当前元素是右括号则从栈中弹出一个左括号
		{
			if (Pop(h, &ch) == false)//如果是空栈则不能弹出左括号，匹配失败，返回false
				return false;
			if (ch == '[')//如果匹配成功则继续
				continue;
			else//如果匹配失败则返回false
				return false;
		}
		else if (str[i] == '}')//如果当前元素是右括号则从栈中弹出一个左括号
		{
			if (Pop(h, &ch) == false)//如果是空栈则不能弹出左括号，匹配失败，返回false
				return false;
			if (ch == '{')//如果匹配成功则继续
				continue;
			else//如果匹配失败则返回false
				return false;
		}
	}
	if (h->next != NULL)//如果栈中还有剩余的左括号没有弹出，返回false
		return false;
	else
		return true;//如果没有剩余的左括号，返回true
}

int main()
{
	int i;
	char str[4][10] = {"IOIIOIOO","IOOIOIIO","IIIOIOIO","IIIOOIOO"};//进出栈操作序列(I表示进展操作，O表示出栈操作)
	char str2[4][30] = { "[(a+b)*c]-(d-e)/f+g","[(a+b)*c]-[(d-e)/(f+g)","[(a+b)*c]-(d-e]/f+g","[(a+b)*c]-{d-e/f+g" };//表达式
	for (i = 0; i < 4; i++)//检测进出栈操作序列是否合法
		if (LegalOrder(str[i]) == true)
			printf("the order %d is legal\n", i + 1);
		else
			printf("the order %d is illegal\n", i + 1);
	for (i = 0; i < 4; i++)//检测表达式中的括号是否正确匹配
		if (BracketMatch(str2[i]) == true)
			printf("the brackets in expression %d can match\n", i + 1);
		else
			printf("the brackets in expression %d cannot match\n", i + 1);
	return 0;
}
