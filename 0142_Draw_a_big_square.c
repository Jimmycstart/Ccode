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
	printf("\33[31m\u2588\r\n");
	gotoxy(11, 5);
	printf("\u2588");
	gotoxy(12, 5);
	printf("\u2588");
	gotoxy(12, 6);
	printf("\u2588");
	gotoxy(12, 7);
	printf("\u2588");
	gotoxy(11, 7);
	printf("\u2588");
	gotoxy(10, 7);
	printf("\u2588");
	gotoxy(10, 6);
	printf("\u2588");
	gotoxy(11, 6);
	printf("\u2588");
	getchar();
	return 0;
}