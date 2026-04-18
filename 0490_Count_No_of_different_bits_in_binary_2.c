#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	return count_bit_one(tmp);
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}
