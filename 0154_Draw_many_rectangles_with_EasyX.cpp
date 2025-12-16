#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
int main()
{
	int x = 0;
	int y = 0;
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	for (x = 40, y = 30; x <= 400, y <= 300; x += 10, y += 10)
	{
		rectangle(-x, y, x, -y);
	}
	return 0;
}