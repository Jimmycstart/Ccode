#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[30] = { 0 };
	printf("Please enter a password:>");
	scanf("%s", password);
	getchar();
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("Please confirm (Y/N):>");
	ret = getchar();
	if (ret == 'Y')
		printf("Confirm success!");
	else
		printf("Confirm abandon!");
	return 0;
}