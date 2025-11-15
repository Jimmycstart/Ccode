#include<stdio.h>
struct Book
{
	char name[30];
	short price;
};
int main()
{
	struct Book b1 = { "C Language Programming",55 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}