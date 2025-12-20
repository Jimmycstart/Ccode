#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<stdio.h>
#define PI 3.14
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	setlinestyle(PS_SOLID, 8);
	int i = 0;
	for (i = 1; i <= 360; i++)
	{
		arc(-250, 250, 250, -250, 0, PI * i / 180);
		Sleep(20);
	}
	setorigin(320, 240);
	setaspectratio(1, -1);
	setlinestyle(PS_SOLID, 6);
	int j = 0;
	for (j = 225; j <= 315; j++)
	{
		arc(-70, 70, 70, -70, j*PI/180, (j+1)*PI /180);
		Sleep(20);
	}
	setorigin(480, 240);
	setaspectratio(1, -1);
	setlinestyle(PS_SOLID, 6);
	int k = 0;
	for (k = 225; k <= 315; k++)
	{
		arc(-70, 70, 70, -70, k * PI / 180, (k + 1) * PI / 180);
		Sleep(20);
	}
	setorigin(400, 300);
	setaspectratio(1, -1);
	setlinestyle(PS_SOLID, 6);
	int m = 0;
	for (m = 45; m <= 135; m ++)
	{
		arc(-100, 100, 100, -100, m * PI / 180, (m + 1) * PI / 180);
		Sleep(20);
	}
	getchar();
	closegraph();
	return 0;
}