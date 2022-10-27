#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//找出1到10中最大的数
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int max = arr[0]; //这里为什么不能直接写0呢？看第12行
	for (i = 1; i <= 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}