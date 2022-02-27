#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char S[21] = { NULL };
	int R = 0;
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %s", &R, S);
		int j = 0;
		while (S[j] != NULL)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
			j++;
		}
		if ((i + 1) != t)
			printf("\n");
	}

	return 0;
}
