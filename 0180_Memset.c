#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "hello world!\n";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}