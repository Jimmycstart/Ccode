#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	int i = 0;
	for (i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}