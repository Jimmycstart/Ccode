#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	if (1 == *(char*)&a)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}
	return 0;
}
