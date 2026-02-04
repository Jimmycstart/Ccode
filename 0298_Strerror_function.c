#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* str = strerror(1);
	printf("%s\n", str);
	return 0;
}