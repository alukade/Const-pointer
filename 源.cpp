#include<stdio.h>

int main()
{
	int num = 520;
	const int cnum = 880;
	int* const p = &num;//const修饰的是指针p，故因此为常量指针

	*p = 1024;//常量指针指向的值可以改变,而指针本身不可以被修改
	printf("*p:%d\n", *p);


	return 0;
}
