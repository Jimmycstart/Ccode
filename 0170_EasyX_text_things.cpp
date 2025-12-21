#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
#include<mmsystem.h>
#pragma comment (lib,"winmm.lib")
int main()
{
	initgraph(800, 600);
	settextstyle(72, 0, "Times New Roman");
	settextcolor(RED);
	outtextxy(100, 280, "Hello world!");
	settextcolor(GREEN);
	outtextxy(100, 200, "Hello world!");
	settextcolor(RGB(130,28,49));
	outtextxy(100, 360, "Hello world!");
	Sleep(3000);
	mciSendString("open 1812.mp3", 0, 0, 0);
	mciSendString("play 1812.mp3 repeat", 0, 0, 0);
	IMAGE bkimg;
	loadimage(&bkimg, "0.jpg");
	putimage(0, 0, &bkimg);
	getchar();
	closegraph();
	return 0;
}