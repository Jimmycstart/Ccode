#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe ");
			count++;
			if(count%10==0)
				printf("\n");
		}
	}
	
	return 0;
}