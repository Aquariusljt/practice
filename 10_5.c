// 105.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define ARRAY_NUM 10
int b_search(int x[], int low, int high, int key) 
{
	int mid;
	mid = (low + high) / 2;
	if (x[mid] == key)
		return mid;
	if (low >= high)
		return -1;
	else if (key < x[mid])
		return b_search(x, low, mid - 1, key);
	else
		return b_search(x, mid + 1, high, key);
}

int main()
{
	int x[ARRAY_NUM] = { 5,23,28,34,43,45,56,60,67,90 };
	int k, key;
	scanf_s("%d", &key);
	k = b_search(x, 0, ARRAY_NUM - 1, key);
	if (k != -1)
		printf("found!\n%d", k);
	else
		printf("Not found");
	system("pause");
    return 0;
}

