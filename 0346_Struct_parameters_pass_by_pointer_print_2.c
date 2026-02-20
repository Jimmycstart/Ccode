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
void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
void Print2(struct S* ps2)
{
	printf("%d %c %lf\n", ps2->a, ps2->c, ps2->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}