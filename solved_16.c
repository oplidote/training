#include<stdio.h>

int main(void)
{
	int a = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*\n");
	}

	for (int k = 0; k < a; k++)
	{
		for (int l = 0; l < (a-k)-1; l++)
		{
			printf("*");
		}
		printf("\n");
	}


}