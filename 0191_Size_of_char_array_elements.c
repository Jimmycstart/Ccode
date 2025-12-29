#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//Ò»Î¬×Ö·ûÊý×é
	char arr[] = { 'a','b','c','d','e','f'};
	printf(" % d\n", sizeof(arr));
	printf(" % d\n", sizeof(arr + 0));
	printf(" % d\n", sizeof(*arr));
	printf(" % d\n", sizeof(arr[1]));
	printf(" % d\n", sizeof(&arr));
	printf(" % d\n", sizeof(&arr + 1));
	printf(" % d\n", sizeof(&arr[0] + 1));
	return 0;
}
