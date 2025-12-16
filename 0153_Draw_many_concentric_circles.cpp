#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	for (int r = 10; r <= 300; r += 10)
	{
		circle(0, 0, r);
	}
	getchar();
	closegraph();
	return 0;
}