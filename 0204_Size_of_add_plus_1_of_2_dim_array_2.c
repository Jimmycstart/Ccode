#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0] + 1);
	printf("%p\n", a + 1);
	printf("%p\n", &a[0] + 1);
	return 0;
}