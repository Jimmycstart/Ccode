#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<stdio.h>
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	putpixel(0, 0, RED);
	putpixel(200, 200, YELLOW);
	putpixel(-200, 100, BLUE);
	putpixel(-200, -100, GREEN);
	putpixel(200, -100, MAGENTA);
	getchar();
	closegraph();
	return 0;
}