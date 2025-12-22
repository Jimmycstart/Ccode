#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

void menu()
{
	printf("*********************************\n");
	printf("*****  1. play    0. exit   *****\n");
	printf("*********************************\n");

}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 - 1;
	while (1)
	{
		printf("Please guess number:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("Guess large\n");
		}
		else if (guess < ret)
		{
			printf("Guess small\n");
		}
		else
		{
			printf("Congratulation!,Guess right\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please choose>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit game\n");
			break;
		default:
			printf("Wrong choose\n");
			break;
		}
	} while (input);
	return 0;
}