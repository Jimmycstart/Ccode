#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("Please enter a password:>");
	scanf("%s", password);
	printf("Please confirm (Y/N):>");
	ret = getchar;
	if (ret == 'Y')
		printf("Confirm success!\n");
	else
		printf("Abandon confirm!\n");
	return 0;
}