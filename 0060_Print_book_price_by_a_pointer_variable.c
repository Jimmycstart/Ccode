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
	printf("Name of book: %s\n", (*pb).name);
	printf("Price of book: %d\n", (*pb).price);
	return 0;
}