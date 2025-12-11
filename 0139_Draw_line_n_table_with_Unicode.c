#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	system("cls");
	gotoxy(10, 5);
	printf("\u2581");
	gotoxy(11, 5);
	printf("\u2582");
	gotoxy(12, 5);
	printf("\u2583");
	gotoxy(13, 5);
	printf("\u2584");
	gotoxy(14, 5);
	printf("\u2585");
	gotoxy(15, 5);
	printf("\u2586");
	gotoxy(16, 5);
	printf("\u2587");
	gotoxy(20, 8);
	printf("\u2593");

	gotoxy(20, 10);
	printf("\u250c");
	gotoxy(21, 10);
	printf("\u2500");
	gotoxy(22, 10);
	printf("\u2500");
	gotoxy(23, 10);
	printf("\u2510");
	gotoxy(23, 11);
	printf("\u2502");
	gotoxy(23, 12);
	printf("\u2502");
	gotoxy(23, 13);
	printf("\u2518");
	gotoxy(22, 13);
	printf("\u2500");
	gotoxy(21, 13);
	printf("\u2500");
	gotoxy(20, 13);
	printf("\u2514");
	gotoxy(20, 12);
	printf("\u2502");
	gotoxy(20, 11);
	printf("\u2502");


	getchar();
	return 0;
}