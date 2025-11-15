#include<stdio.h>
int main()
{
	int age = 100;
	if (age < 18)
		printf("Minor\n");
	else if (age >= 18 && age < 28)
		printf("Prime of life\n");
	else if (age >= 28 && age < 50)
		printf("Middle age\n");
	else if (age >= 50 && age < 90)
		printf("Old age\n");
	else if (age >= 90)
		printf("Old fart\n");
	return 0;
}