#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[5] = "abc";
	char arr2[] = "hello bit!";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
