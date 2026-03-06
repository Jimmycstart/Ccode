#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Bubble_sort(int arr[], int sz)
{
	int i = 0;			//确定冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;		//假设这一趟要排序的数组已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;				//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);						//冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
