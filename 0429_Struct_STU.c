#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	struct Stu s1 = { "ZHANGSAN", 20, "2019010305"};
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	return 0;
}
