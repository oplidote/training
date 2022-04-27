#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int F(int num)
{
	if (num <= 1)
		return num;
	return F(num - 1) + F(num - 2);
}

int main(void)
{
	int a = 0;
	scanf("%d", &a);
	
	printf("%d", F(a));
	return 0;
}