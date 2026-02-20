#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	printf("%d\n", s.a);
	printf("%c\n", s.c);
	printf("%lf\n", s.d);
	return 0;
}