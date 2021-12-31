#include "stdio.h"

#define N 10

int main()
{
	int i, j;//循环变量
	int t = 0;//判断变量
	int index = -1;//记录str2在str1中的起始位置(数组下标)
	char str1[N];//字符串1
	char str2[N];//字符串2
	int len1 = 0;//记录字符串1的长度
	int len2 = 0;//记录字符串2的长度
	printf("Please input the str1:\n");
	gets(str1);//输入字符串1
	printf("Please input the str2:\n");
	gets(str2);//输入字符串2
	len1 = strlen(str1);//字符串1的长度
	len2 = strlen(str2);//字符串2的长度
	for (i = 0; i < (len1+1) - len2; i++)//当字符串1中未进行判断的部分(len1+1)小于字符串2的长度(len2)时,str2必然不被包含在str1中
	{
		if (str1[i] == str2[0])//当字符串1的某字符和字符串2的首字符相同时
		{
			index = i;//标记该字符位置(数组下标)
			for (j = 1; j < len2; j++)//检验str2是否被包含在str1中
			{
				if (str1[i + j] == str2[j])//用t=1表示正确
					t = 1;
				else//如果不是,用t=0来表示，无需继续进行判断
				{
					t = 0;
					break;
				}
			}
		}
	}
	if (t == 0) //如果t=0,说明str2不在str1中，标签重置为初始值-1
	{
		printf("str2 no in str1");
		index = -1;
	}
	if (t == 1 && (++index) > 0)//t=1并且标签index不为-1说明str2在str1中,起始位置=被记录的数组下标+1
		printf("%d", index);//输出起始位置
	return 0;
}