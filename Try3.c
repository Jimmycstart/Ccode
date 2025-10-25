
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int add = 0;
	add = Add(a, b);
	printf("%d\n", add);
	return 0;
}