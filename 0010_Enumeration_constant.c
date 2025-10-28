#include<stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}