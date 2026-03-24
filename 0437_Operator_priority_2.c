#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() ¨C fun() * fun();
	printf("%d\n", answer);
	return 0;
}
