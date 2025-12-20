#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	void* p = &a;
	printf("%p\n", pa);
	printf("%p\n", p);
	char ch = 'w';
	p = &ch;
	printf("%p\n", p);
	return 0;
}