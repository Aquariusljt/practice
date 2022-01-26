// 103.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int countvalue(int aa[])
{
	int i=0, j, k, cnt=0;
	int flag=1;
	for (j = 500; j <= 800; j++) {
		for (flag=1,k = 2; flag&&k < 30; k++) {
			if (j%k == 0)
				flag = 0;
		}
		if (flag) {
			aa[i] = j;
			i++;
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int t, aa[300], cnt;
	cnt = countvalue(aa);
	for (t = 0; t < cnt; t++) {
		printf("%d   ", aa[t]);
		if ((t + 1) % 10 == 0) {
			printf("\n");
		}
	}
	printf("\n%d", cnt);
	system("pause");
	return 0;
}

