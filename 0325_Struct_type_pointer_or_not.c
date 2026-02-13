#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct
{
	int a;
	char c;
}sa;
struct
{
	int a;
	char c;
}*psa;
int main()
{
	psa = &sa;
	return 0;
}
