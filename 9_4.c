// 94.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int f(int n, int count) 
{
	if (count > 5)
		return 1;
	else if (count <= 5) {
		while (n % 5 == 1)
			return f(4 * n / 5, count + 1);
		while (n % 5 != 1)
			return 0;
	}
}

int main()
{
	int t, flag;
	for (t = 1;; t++) {
		flag = f(t,1);
		if (flag)
			break;
	}
	printf("%d", t);
	system("pause");
    return 0;
}

