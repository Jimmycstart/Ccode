#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
