#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex
{
	MALE,
	FEMALE = 9,
	SECRET
};
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color c = BLUE;
	printf("%d %d %d\n", RED, YELLOW, BLUE);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}