#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int my_strlen(char* str)
{
	int count = 0;//�Ѿ�����str�����Բ���������
	while (*str != '\0')//���������ָ��,�����õ�����
		                        //"\"��"/"Ҫ����
                                //����Ϊ�ַ������ͣ������õ�����
	{
		count++;
		str++;//�����ֲ���ָ��
		          //����++�������ͣ������ǲ��ǣ����ڻ����¶����ǲ��ǲ�������ָ������
	}
	return count;//���ظ�str
}
void reverse_arr(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	* str = *(str + len - 1);
	if (len >= 2)
	{
		my_strlen(str+1);

	}                                   //��Ϊ�ݹ���޶�
	*(str + len - 1) =  tmp;//��λ������˵õ��ģ���ǰ�����˱��滻����Ӧ�ĺ�����
}

int main()
{
	char arr[] = "abcde";//Ҫ��˫����
	 
	reverse_arr(arr);//������arr��abcde���׸���ַ

	printf("%s\n", arr);
	return 0;
}

