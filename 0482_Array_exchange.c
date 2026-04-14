#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp[] = { 0 };
	arr1 = arr2;
	arr2 = arr1;
	return 0;
}
