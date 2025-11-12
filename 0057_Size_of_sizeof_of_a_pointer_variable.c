#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pch = &ch;
	printf("%d\n", sizeof(pch));
	return 0;
}