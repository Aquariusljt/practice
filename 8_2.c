// 82.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int fun(long n, long *hw) 
{
	long f, k,p=0,m=1;
	int t = 0, i;
	k = n;
	while(p!=m||t>10000)
	{
		for (f = 0; n > 0; n /= 10)
			f = f * 10 + n % 10;
		k = k + f;
		t++;
		m = k;
		for (p = 0; k > 0; k /= 10)
			p =p * 10 + k % 10;
	}
	*hw = m;
	if (t <= 10000)
		return t;
	else
		return -1;
}
int main()
{
	long a, b, *hw;
	int c;
	scanf_s("%ld", &a);
	c = fun(a, &hw);
	b = hw;
	printf("%ld %d", b, c);
	system("pause");
    return 0;
}

