#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if (j > sqrt(i))
	{
		count++;
		printf("%d", i);
	}
	printf("\n count = %d\n", count);
	return 0;
}