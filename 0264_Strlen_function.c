#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int len1 = strlen("abcdef");
	int arr[] = { 'a','b','c','d','e','f'};
	int len2 = strlen(arr);
	printf("len1 = %d\n", len1);
	printf("len2 = %d\n", len2);
	return 0;
}
