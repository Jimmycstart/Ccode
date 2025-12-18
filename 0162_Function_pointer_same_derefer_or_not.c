#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*pAdd)(int, int) = Add;
	int sum = pAdd(3, 2);
	printf("sum = %d\n", sum);
	return 0;
}