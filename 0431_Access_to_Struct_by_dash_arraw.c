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
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	return 0;
}
