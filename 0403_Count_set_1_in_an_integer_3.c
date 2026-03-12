#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("Number of set 1 in an integer is: %d\n", count);
	return 0;
}
