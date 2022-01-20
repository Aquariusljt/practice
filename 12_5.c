// 125.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int prime(int n)
{
	int i;

	for (i = 2; i<n; i++)
		if (n%i == 0) 
			return 0;
	return 1;
}


int main(int argc,char* argv[])
{
	printf("%d\n", argc - 1);
	int i;
	for (i = 1;i<argc; i++) {
		if (prime(*(argv + i)))
			printf("%d\n", *argv + i);
	}
	for (i = 1;i<argc; i++) {
		if (prime(*(argv + i))==0)
			printf("%d\n", *argv + i);
	}
    return 0;
}

