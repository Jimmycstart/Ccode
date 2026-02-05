#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch = '@';
	int ret = islower(ch);
	printf("%d\n", ret);
	return 0;
}
