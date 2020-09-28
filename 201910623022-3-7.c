#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float a, b,c;
	scanf("%f %f", &a,&b);
	b = b / 10;
	c = a * b;
	printf("%.2f%", c);
	return 0;
}