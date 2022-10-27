#include<stdio.h>
//º∆À„1-1/2+1/3-.......-1/100
int main()
{
	double sum = 0;
	int i = 1;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("% lf\n", sum);
	return 0;
}