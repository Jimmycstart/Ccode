#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	return 0;
}