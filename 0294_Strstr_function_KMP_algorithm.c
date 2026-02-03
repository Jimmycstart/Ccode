#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//计算前缀函数
void computePrefixFunction(char* pattern, int m, int* pi)
{
	pi[0] = 0;
	int k = 0;
	for (int i = 1; i < m; i++)
	{
		while (k > 0 && pattern[i] != pattern[k])
		{
			k = pi[k - 1];
		}
		if (pattern[i] == pattern[k])
		{
			k++;
		}
		pi[i] = k;
	}
}
//KMP匹配主函数
//返回值：匹配的起始位置数组(动态分配)，Len参数返回匹配次数
int* kmpSearch(char* text, char* pattern, int* matchCount)
{
	int n = strlen(text);
	int m = strlen(pattern);
	*matchCount = 0;

	//边界条件：模式串为空或文本串比模式串短
	if (m == 0 || n < m)
	{
		return NULL;
	}

	//1. 计算前缀函数
	int* pi = (int*)malloc(m * sizeof(int));
	computePrefixFunction(pattern, m, pi);

	//2. 存储匹配结果(最多可能有n-m+1个匹配)
	int* matches = (int*)malloc((n - m + 1) * sizeof(int));
	int i = 0;	//文本串指针
	int j = 0;  //模式串指针

	while (i < n)
	{
		if (text[i] == pattern[j])
		{
			i++;
			j++;
		}

		//找到一个匹配
		if (j == m)
		{
			matches[*matchCount] = i - j;
			(*matchCount)++;
			//回退j，继续查找下一个匹配
			j = pi[j - 1];
		}
		//不匹配的情况
		else if (i < n && text[i] != pattern[j])
		{
			if (j != 0)
			{
				//利用前缀函数回退j，不回溯i
				j = pi[j - 1];
			}
			else
			{
				//j=0不匹配，文本串前进
				i++;
			}
		}
	}
	free(pi);  //释放前缀函数数组

	//重新分配内存，只保留实际匹配结果(避免浪费空间)
	if (*matchCount > 0)
	{
		matches = (int*)realloc(matches, (*matchCount) * sizeof(int));
	}
	else
	{
		free(matches);  //无匹配时释放内存
		matches = NULL;
	}
	return matches;
}

//主函数测试
int main()
{
	//测试用例1：普通匹配
	char text1[] = "abababcababababc";
	char pattern1[] = "ababc";
	int count1;
	int* res1 = kmpSearch(text1, pattern1, &count1);
	printf("测试用例1：\n");
	printf("文本串：%s\n", text1);
	printf("模式串：%s\n", pattern1);
	if (count1 > 0)
	{
		printf("找到%d个匹配，起始位置：", count1);
		for (int i = 0; i < count1; i++)
		{
			printf("%d ", res1[i]);  //输出：2 10
		}
		printf("\n");
	}
	else
	{
		printf("未找到匹配\n");
	}
	free(res1);  //释放结果数组

	return 0;
}