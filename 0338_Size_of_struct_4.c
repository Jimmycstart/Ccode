#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char c1;
	double d;
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}
