#define  _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>；
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}
	else
	{
		printf("成年\n");
	}
	return 0;
}
//爱你 爱你