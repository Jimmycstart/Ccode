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
	printf("\33[32m\u25A0\r\n");
	gotoxy(x, y + 1);
	printf("\33[31m\u2588\r\n");
	gotoxy(x, y + 2);
	printf("\33[33m\u25A1\r\n");
	gotoxy(x, y + 3);
	printf("\33[34m\u2593\r\n");
	gotoxy(x, y + 4);
	printf("\33[37m\u2593\r\n");
}

int main()
{
	int x = 10;
	for (int i = 0; i < 80; i++)
	{
		system("cls");
		drawBlock(x, 5);
		x++;
		Sleep(200);
	}
	return 0;
}