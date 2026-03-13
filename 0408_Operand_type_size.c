#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(arr));

	return 0;
}
