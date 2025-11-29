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
		if (password == "123456")
		{
			printf("Sign in success!");
			break;
		}
	}
	if (i == 3)
		printf("Three times error, exit program.\n");
	return 0;
}
