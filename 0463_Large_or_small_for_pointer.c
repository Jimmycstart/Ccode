#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[N_VALUES]; vp > &values[0]; )
	{
		*--vp = 0;
	}
	return 0;
}
