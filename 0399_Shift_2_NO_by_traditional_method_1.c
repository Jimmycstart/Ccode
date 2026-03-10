#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;				//¿ÕÆ¿

	printf("Before shift: a = %d b = %d\n", a, b);

	c = a;
	a = b;
	b = c;
	printf("After shift: a = %d b = %d\n", a, b);

	return 0;
}