#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[][5] = { "R202","C3po","R2A6"};
	int n;
	puts("Looking for R2 astromech droids¡­");
	for (n = 0; n < 3; n++)
		if (strncmp(str[n], "R2xx", 2) == 0)
		{
			printf("found %s\n", str[n]);
		}
	return 0;
}
