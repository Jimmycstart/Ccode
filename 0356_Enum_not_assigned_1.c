#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex
{
	MALE = 2,
	FEMALE,
	SECRET = 8
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