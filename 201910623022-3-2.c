#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int m = 7, n = 4;
	float a = 38.4, b = 6.4, x;
	x = m / 2 + n * a / b + 1 / 2;
	printf("%f\n", x);
	return 0;
}
