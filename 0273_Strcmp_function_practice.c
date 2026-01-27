#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "sqwer";
	int ret = strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}