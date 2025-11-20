#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	char passowrd[30] = { 0 };
	printf("Please enter a password:>");
	scanf("%s", passowrd);
	getchar();
	printf("Please confirm!(Y/N):>");
	ret = getchar;
	if (ret == 'Y')
		printf("Confirm success!");
	else
		printf("Confirm abandon!");
	return 0;
}