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
	printf("\33[31m\u25CF");
	gotoxy(11, 5);
	printf("\33[33m\u25CF");
	gotoxy(12, 5);
	printf("\33[32m\u25CF");

	getchar();
	return 0;
}