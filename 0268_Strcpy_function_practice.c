#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
