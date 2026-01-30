#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "bit";
	strncpy(arr1, arr2, 6);
	return 0;
}
