#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch = '2';
	int ret = isdigit(ch);
	printf("%d\n", ret);
	return 0;
}