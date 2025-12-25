#define _CRT_SECURE_NO_WARNINGS 1

#include<easyx.h>
#include<mmsystem.h>
#include<stdio.h>

#pragma comment (lib,"winmm.lib")

int main()
{
	initgraph(800, 450);
	char letter;
	int x, y;
	int speed = 2;
	IMAGE bkimg;
	loadimage(&bkimg, "0025.jpg");
	IMAGE appimg0, appimg1;
	mciSendString("open 203.mp3", 0, 0, 0);
	mciSendString("play 203.mp3", 0, 0, 0);

	ExMessage m;

	int score = 100;
	char scoreStr[10] = { 0 };
	setbkmode(0);
	while (true)
	{
		letter = rand() % 26 + 'A';
		putimage(0, 0, &bkimg);
		x = rand() % 781;
		for (int y = 0; y < 450; y += speed)
		{
			putimage(0, 0, &bkimg);
			putimage(x - 20, y - 20, &appimg0, SRCPAINT);
			putimage(x - 20, y - 20, &appimg1, SRCAND);
			settextcolor(WHITE);
			outtextxy(x, y, letter);
			sprintf(scoreStr, "Score: %d", score);
			settextcolor(BLACK);
			outtextxy(5, 5, scoreStr);
			peekmessage(&m, EX_MOUSE | EX_KEY);
			if (m.message == WM_KEYDOWN)
			{
				if (m.vkcode == letter)
				{
					score += 5;
					break;
				}
			}
			Sleep(10);
		}
	}
	return 0;
}