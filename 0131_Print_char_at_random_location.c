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
	printf("*");
	gotoxy(20, 8);
	printf("@");
	getchar();
	return 0;
}