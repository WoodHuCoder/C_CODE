#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int my_strlen(char* str)
{
	int count = 0;//已经有了str，所以不用再声明
	while (*str != '\0')//这里必须用指针,后面用单引号
		                        //"\"和"/"要分清
                                //这里为字符串类型，所以用单引号
	{
		count++;
		str++;//这里又不用指针
		          //后置++用在整型（到底是不是，现在还是懵懂，是不是不能用在指针里吗？
	}
	return count;//返回给str
}
void reverse_arr(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	* str = *(str + len - 1);
	if (len >= 2)
	{
		my_strlen(str+1);

	}                                   //此为递归的限度
	*(str + len - 1) =  tmp;//后几位的是因此得到的，即前面的因此被替换到对应的后面来
}

int main()
{
	char arr[] = "abcde";//要打双引号
	 
	reverse_arr(arr);//数组名arr是abcde的首个地址

	printf("%s\n", arr);
	return 0;
}

