#define _CRT_SECURE_NO_WARNINGS 1
#include<graphics.h>
#include<conio.h>
int main()
{
	initgraph(640, 480);
	setlinestyle(PS_SOLID, 10);
	rectangle(100, 100, 500, 400);
	_getch();
	return 0;
}