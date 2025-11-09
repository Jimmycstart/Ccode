#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("Sum = %d\n", sum);
	return 0;
}