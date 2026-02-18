#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
int main()
{
	struct S s;
	s.a = 100;
	s.c = 'w';
	s.d = 3.14;
	printf("%d\n", s.a);
	printf("%c\n", s.c);
	printf("%lf\n", s.d);
	return 0;
}
