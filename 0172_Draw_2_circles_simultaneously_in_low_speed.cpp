#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<thread>
#include<mutex>

std::mutex mtx;

#define PI 3.14

void drawCircle_low_speed(int x)
{
	mtx.lock();
	setlinecolor(RGB(rand() % 256, rand() % 256, rand() % 256));
	int i = 0;
	for (i = 1; i <= 360; i++)
	{
		arc(-x, x, x, -x, 0, PI * i / 180);
		Sleep(30);
	}
	mtx.unlock();
}
int main()
{
	initgraph(800, 800);
	setorigin(400, 300);
	setlinestyle(PS_SOLID, 8);
	int x1 = 100;
	int x2 = 200;
	std::thread t1(drawCircle_low_speed, x1);
	std::thread t2(drawCircle_low_speed, x2);
	t1.join();
	t2.join();
	getchar();
	closegraph();
	return 0;
}