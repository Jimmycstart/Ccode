#include<stdio.h>
int global = 20;
int main()
{
	int local = 10;
	printf("%d\n", local);
	printf("%d\n", global);
	return 0;
}