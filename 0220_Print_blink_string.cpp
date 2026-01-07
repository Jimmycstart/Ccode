#define _CRT_SECURE_NO_WARNINGS 1
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
	initgraph(840, 560);
	srand((unsigned int)time(NULL));
	while (!_kbhit())
	{
		settextcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		settextstyle(40, 40, L"Times New Roman");
		outtextxy(250, 200, L"图像经典");
		settextcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		outtextxy(250, 380, L"创意案例");
		settextcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		outtextxy(250, 290, L"初中地理");
		Sleep(1000);
	}
	return 0;
}