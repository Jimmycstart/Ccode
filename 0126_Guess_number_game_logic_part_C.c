#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("********************************\n");
	printf("******   1.play  0.exit   ******\n");
	printf("********************************\n");
}
void game()
{
	printf("Guess number\n");
}
int main()
{
	int input = 0;
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