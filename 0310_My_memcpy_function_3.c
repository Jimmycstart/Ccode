#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
struct S
{
	char name[20];
	int age;
};
my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	my_memcpy(arr + 2, arr, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
