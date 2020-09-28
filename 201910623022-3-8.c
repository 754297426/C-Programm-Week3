#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float a, b,c,d;
	scanf("%f %f %f %f", &a,&b,&c,&d);
	float Sum, Average;
	Sum = a + b + c + d;
	Average = Sum/ 4;
	printf("Smu=%.0f,Average=%.1f", Sum,Average);
	return 0;
}