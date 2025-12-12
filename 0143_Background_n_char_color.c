#include<stdio.h>
#include<windows.h>

int main()
{
	system("mode con cols=66 lines=22");
	system("color 04");
	printf("We are all the same!\n");
	system("color 02");
	printf("We are all the same!\n");
	return 0;
}