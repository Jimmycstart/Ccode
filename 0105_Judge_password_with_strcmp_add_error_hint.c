#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("Please enter password:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("Sign in success!\n");
			break;
		}
		else
		{
			printf("Wrong password!\n");
		}
	}
	if (i == 3)
		printf("Three times wrong password. Exit program.\n");
	return 0;
}