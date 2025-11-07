#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int ret = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("The single dog is: %d\n", ret);
	return 0;
}