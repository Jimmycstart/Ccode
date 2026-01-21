#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void left_move(char* arr, int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//Ðý×ªÒ»¸ö×Ö·û
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("% s\n", arr);
	return 0;
}
