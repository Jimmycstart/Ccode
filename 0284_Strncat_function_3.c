#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[30] = "hello\0xxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);
	printf("%s\n", arr1);
	return 0;
}