#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("Hell bit\n");
	goto again;
	printf("Ni hao\n");
again:
	printf("hehe\n");
	return 0;
}