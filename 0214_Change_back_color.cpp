#define _CRT_SECURE_NO_WARNINGS 1
#include<graphics.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	initgraph(480, 640);
	srand((unsigned int)time(NULL));
	while (1)
	{
		setbkcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		cleardevice();
		Sleep(1000);
	}

	getchar();
	closegraph();
	return 0;
}