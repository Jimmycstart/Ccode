#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<mmsystem.h>

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

#pragma comment(lib,"winmm.lib")

int main()
{

	initgraph(640, 480);
	mciSendString("open 1812.mp3", 0, 0, 0);
	mciSendString("play 1812.mp3 repeat", 0, 0, 0);

	int i = 0;
	IMAGE img[4] = { 0 };
	char a[4];
	for (i = 0; i < 4; i++)
	{
		sprintf(a, "%d.jpg", i);
		loadimage(&img[i], a, getwidth(), getheight());
		putimage(0, 0, &img[i]);
	}
	while (1)
	{
		for (int j = 0; j < 4; j++)
		{
			putimage(0, 0, &img[j]);
			Sleep(700);
		}
	}

	getchar();
	closegraph();
	return 0;
}