#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBlock(int x, int y)
{
	gotoxy(x, y);
	printf("@");
	gotoxy(x, y + 1);
	printf("@");
}

int main()
{
	int x = 10;
	for (int i = 0; i < 20; i++)
	{
		system("cls");
		drawBlock(x, 5);
		x++;
		Sleep(100);
	}
	return 0;
}