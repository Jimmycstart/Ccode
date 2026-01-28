#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* p1 = "qbc";
	char* p2 = "abc";
	if (strcmp(p1, p2) > 0)
	{
		printf("p1>p2\n");
	}
	else if (strcmp(p1, p2) == 0)
	{
		printf("p1==p2\n");
	}
	else if (strcmp(p1, p2) < 0)
	{
		printf("p1<p2\n");
	}
	return 0;
}
