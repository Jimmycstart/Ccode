#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<stdio.h>
#define PI 3.14
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	int i = 0;
	for (i = 1; i <= 360; i++)
	{
		arc(-200, 200, 200, -200, 0, PI * i / 180);
		Sleep(30);
	}
	getchar();
	closegraph();
	return 0;
}