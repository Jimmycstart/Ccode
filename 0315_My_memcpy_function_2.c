#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t count)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	int i = count;
	while (i--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr3[] = { 1, 2, 3, 4, 5,6,7,8,9,10 };

	my_memcpy(arr3+2, arr3, 20);
	return 0;
}