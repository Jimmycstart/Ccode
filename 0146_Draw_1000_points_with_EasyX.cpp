#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<stdio.h>
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	int x, y;
	for (int i = 0; i < 1000; i++)
	{
		x = rand() % (800 + 1) - 400;
		y = rand() % (600 + 1) - 300;
		putpixel(x, y, WHITE);
	}
	getchar();
	closegraph();
	return 0;
}