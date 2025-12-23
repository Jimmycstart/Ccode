#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:

	printf("Computer will be shutdown in 1 minute. If input i_am_stupid, then quit shutdown!\n Please input:>");
	scanf("%s", input);
	if (0 == strcmp(input, "i_am_stupid"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}