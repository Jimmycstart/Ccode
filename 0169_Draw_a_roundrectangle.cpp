#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	roundrect(-200, 100, 200, -100, 200, 100);
	getchar();
	closegraph();
	return 0;
}