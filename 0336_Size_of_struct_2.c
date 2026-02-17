#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct s3
{
	double d;
	char c;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct s3));
	return 0;
}
