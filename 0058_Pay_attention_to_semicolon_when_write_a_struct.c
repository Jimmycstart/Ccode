#include<stdio.h>
struct Book
{
	char name[30];
	short price;
};
int main()
{
	struct Book b1 = { "C Language Programmnig", 55 };
	printf("%s\n", b1.name);
	printf("%d\n", b1.price);
	return 0;
}