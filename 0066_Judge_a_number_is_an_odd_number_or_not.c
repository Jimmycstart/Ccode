#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
			printf("\n");
		}
		i++;
	}
	return 0;
}