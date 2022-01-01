#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i, j;
	char str[6];
	char password1[6] = { "5b242" };
	char password2[6] = { "16918" };
	printf("Please input the password(Tips:dormitory number,5 characters):");
	gets(str);
	for (i = 0; (strlen(str) != 5) && i < 10; i++)
	{
		printf("Your input is illegal!\n");
		if (10 - i - 1 < 1)
			break;
		printf("You have %d more chances to input!\n", 10 - i - 1);
		printf("Please input the password(Tips:dormitory number,5 characters) again:");
		gets(str);
	}
	if (10 - i - 1 < 1) 
	{
		return 0;
		system("pause");
	}
	for (j = 0; j < 6; j++)
		if (str[i] > 'A' && str[i] < 'Z')
			str[i] += 32;
	for (;i < 10; i++)
	{
		if (strcmp(str, password1) == 0 || strcmp(str, password2) == 0)
		{
			printf("Happy new year, my roomates.\n");
			break;
		}
		else if ((strlen(str) != 5) && i < 10) 
		{
			printf("Your input is illegal!\n");
			if (10 - i - 1 < 1) 
				break;
			printf("You have %d more chances to input!\n", 10 - i - 1);
			printf("Please input the password(Tips:dormitory number,5 characters) again:");
			gets(str);
		}
		else if (strcmp(str, password1) != 0 && strcmp(str, password2) != 0 && i < 10)
		{
			printf("Your input is wrong!\n");
			if (10 - i - 1 < 1)
				break;
			printf("You have %d more chances to input!\n", 10 - i - 1);
			printf("Please input the password(Tips:dormitory number,5 characters) again:");
			gets(str);
		}
	}
	system("pause");
	return 0;
}