#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ҳ�1��10��������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int max = arr[0]; //����Ϊʲô����ֱ��д0�أ�����12��
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