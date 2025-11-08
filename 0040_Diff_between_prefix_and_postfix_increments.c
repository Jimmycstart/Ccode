#include<stdio.h>
int main()
{
	int a1 = 10;
	int b1 = a1++;
	printf("a1 = %d  b1 = %d", a1, b1);
	printf("\n");
	int a2 = 10;
	int b2 = ++a2;
	printf("a2 = %d  b2 = %d", a2, b2);
	return 0;
}