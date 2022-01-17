// 154.cpp: 定义控制台应用程序的入口点。
//

#include <stdafx.h>
#include "stdlib.h"

int main(int argc, char *argv[])
{
	FILE  *in, *out;
	int i;
	if ((in = fopen(argv[1], "r")) == NULL) {
		puts("Can't read file .");
		exit(1);
	}
	if ((out = fopen(argv[2], "w")) == NULL) {
		puts("Can't write file .");
		exit(1);
	}
	while (!feof(in))
		fputc(fgetc(in), out);

	fclose(in);
	fclose(out);
	return 0;
}
