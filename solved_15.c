#include<stdio.h>

int main(void)
{
	int a = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int m = 1; m < ((2 * a)-(2*i)); m++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int k = 1; k < a; k++)
	{
		for (int l = 0; l < (a-k)-1; l++)
		{
			printf(" ");
		}
		for (int n = 0; n < (2*k)+1; ++n)
		{
			printf("*");
		}
		printf("\n");
	}


}
