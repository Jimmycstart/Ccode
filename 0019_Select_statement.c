#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("Joining Fly Mountain. Do you want to work hard? If work hard choose 1. If not choose 0.->");
	scanf("%d", &input);
	if (input == 1)
		printf("High income and decent life.");
	else
		printf("Street bum.");
	return 0;
}