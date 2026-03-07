#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	return 0;
}