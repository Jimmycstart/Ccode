#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[30] = "hello\0xxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}