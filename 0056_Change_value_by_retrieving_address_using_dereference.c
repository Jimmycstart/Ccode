#include<stdio.h>
int main()
{
	char ch = 'a';
	char* pch = &ch;
	*pch = 'w';
	printf("ch = %c\n", ch);
	return 0;
}