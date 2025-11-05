#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("Before exchange: a = %d  b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("After exchange: a = %d  b = %d\n", a, b);
	return 0;
}