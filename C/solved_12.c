#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			printf("*");
			if (j == 0)
				printf("\n");
		}
	}
	return 0;
}