#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 880;
	int* const p = &num;//const���ε���ָ��p�������Ϊ����ָ��

	*p = 1024;//����ָ��ָ���ֵ���Ըı�,��ָ�뱾�����Ա��޸�
	printf("*p:%d\n", *p);


	return 0;
}
