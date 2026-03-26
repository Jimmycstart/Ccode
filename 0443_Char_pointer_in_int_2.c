#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = &a;
	*pc = 0;
	return 0;
}
