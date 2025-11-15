#include<stdio.h>
#include<string.h>
struct Book
{
	char name[30];
	short price;
};
int main()
{
	struct Book b1 = { "C Language Programming",55 };
	strcpy(b1.name, "C++ Language");
	printf("%s\n", b1.name);
	return 0;
}