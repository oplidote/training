#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char num[7] = { 0 };
	int a, b;
	scanf("%[^\n]", num);
	a = (num[0]-48) + ((num[1]-48) * 10) + ((num[2]-48) * 100);
	b = (num[4]-48) + ((num[5] - 48) * 10) + ((num[6] - 48) * 100);
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}