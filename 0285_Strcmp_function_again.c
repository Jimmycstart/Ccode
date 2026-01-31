#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret = strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}
