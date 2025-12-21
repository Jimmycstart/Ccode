#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<stdio.h>
#define PI 3.14
int main()
{
	initgraph(900, 800);
	setorigin(450, 320);
	setaspectratio(1, -1);
	setlinestyle(PS_SOLID, 4);
	int i = 0;
	int r = 0;
	for (r = 100; r <= 300; r += 50)
	{
		for (i = 1; i <= 360; i++)
		{
			arc(-r, r, r, -r, 0, PI * i / 180);
			Sleep(10);
		}
	}
	getchar();
	closegraph();
	return 0;
}