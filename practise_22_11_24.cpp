#define  _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main()
{
	int a ,i= 0;

	printf("请输入一个数字：");
	scanf("%d", &a); //在这里不要随便使用空格和“\n”

	for (i = 1;i <=a;i++)
	{
		printf("*");
		if (i % 5 == 0)
			printf("\n");

	}
	return 0;
}
