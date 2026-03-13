#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 5;
	int c = 8;
	int a1 = 0;
	int a2 = 0;
	a1 = a + 2;
	a2 = a += 2;
	printf("a1 = %d\n", a1);
	printf("a2 = %d\n", a2);
	int b1 = 0;
	int b2 = 0;
	b1 = b >> 1;
	b2 = b >>= 1;
	printf("b1 = %d\n", b1);
	printf("b2 = %d\n", b2);
	int c1 = 0;
	int c2 = 0;
	c1 = c & 1;
	c2 = c &= 1;
	printf("c1 = %d\n", c1);
	printf("c2 = %d\n", c2);

	return 0;
}