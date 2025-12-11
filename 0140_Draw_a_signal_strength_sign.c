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

	getchar();
	return 0;
}