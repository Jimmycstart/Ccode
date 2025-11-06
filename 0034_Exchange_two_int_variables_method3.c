#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("Before exchanged: a = %d  b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After exchanged: a = %d  b = %d\n", a, b);
	return 0;
}