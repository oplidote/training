#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a,t=0;
	scanf("%d", &a);
	if (a == 1)
		printf("*");
	else
		for (int i = 0; i < a*2; i++)
	{
			for(int j = t;j<a+t;j++)
			{ 
				if (j % 2 == 0)
					printf("*");
				if (j % 2 != 0)
					printf(" ");

			}
			printf("\n");
			if (t == 0)
			{
				t = 1;
			}
			else
				t = 0;
	}


	return 0;
}