#include<stdio.h>
struct Book
{
	char name[30];
	short price;
};
int main()
{
	struct Book b1 = { "C Language Programming",55 };
	printf("Name of book: %s\n", b1.name);
	printf("Price of book: %d\n", b1.price);
	b1.price = 65;
	printf("Price of book after modified: %d\n", b1.price);
	return 0;
}