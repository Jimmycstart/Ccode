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
	printf("\33[32m\33[5m\uF000\r\n");
	gotoxy(x, y + 1);
	printf("\33[31m\33[5m\u26F8\r\n");
	gotoxy(x, y + 2);
	printf("\33[33m\33[5m\u25A1\r\n");
	gotoxy(x, y + 3);
	printf("\33[34m\33[5m\u2593\r\n");
	gotoxy(x, y + 4);
	printf("\33[37m\33[5m\u2593\r\n");
}

int main()
{
	int x = 10;
	for (int i = 0; i < 20; i++)
	{
		system("cls");
		drawBlock(x, 5);
		x++;
		Sleep(1600);
	}
	printf("\33[37m\33[25m\u2593\r\n");
	return 0;
}