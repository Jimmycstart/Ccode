#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 33;
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}