#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Node
{
	int data;
	struct Node n;
};
int main()
{
	sizeof(struct Node);
	return 0;
}
