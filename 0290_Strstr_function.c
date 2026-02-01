#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* p1 = "abcdefghi";
	char* p2 = "defq";
	char* ret = strstr(p1, p2);
	if (ret == NULL)
	{
		printf("×Ó´®²»´æÔÚ\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}
