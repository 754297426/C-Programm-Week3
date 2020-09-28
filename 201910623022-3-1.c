#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a=10;
	a+=a-+a*a;
	printf("a=%d\n",a);
	return 0;
}