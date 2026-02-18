#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma pack(1)
struct S
{
	char c1;
	double d;
};
#pragma pack()
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}