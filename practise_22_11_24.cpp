#define  _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main()
{
	int a ,i= 0;

	printf("������һ�����֣�");
	scanf("%d", &a); //�����ﲻҪ���ʹ�ÿո�͡�\n��

	for (i = 1;i <=a;i++)
	{
		printf("*");
		if (i % 5 == 0)
			printf("\n");

	}
	return 0;
}
