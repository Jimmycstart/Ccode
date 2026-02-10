#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memcpy(arr3 + 2, arr3, 20);
	return 0;
}