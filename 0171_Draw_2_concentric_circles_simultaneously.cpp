#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<thread>
#include<mutex>

std::mutex mtx;

void drawCircle(int cx, int cy, int radius)
{
	mtx.lock();
	setlinecolor(RGB(rand() % 256, rand() % 256, rand() % 256));
	circle(cx, cy, radius);
	mtx.unlock();
}
int main()
{
	initgraph(640, 480);
	int cx1 = 320, cy1 = 240, radius1 = 100;
	int cx2 = 320, cy2 = 240, radius2 = 50;
	std::thread t1(drawCircle, cx1, cy1, radius1);
	std::thread t2(drawCircle, cx2, cy2, radius2);
	t1.join();
	t2.join();
	getchar();
	closegraph();
	return 0;
}