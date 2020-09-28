#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, j;
	i = 8, j = 10;
	printf("%d,%d,%d,%d\n", j, j, ++i, j++);
	return 0;
}