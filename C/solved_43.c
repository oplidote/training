#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	char s1[101];
	char s2[26] = { 0 };
	int n = 100;
	int t = 0;
	scanf("%s", s1);

	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < sizeof(s1); j++)
		{
			if (s1[j] == NULL)
				break;

			else if (('a' + i) == s1[j])
			{
				for (int m = 0; m < sizeof(s2); m++)
				{
					if (s2[m] == s1[j])
					{
						t = 1;
						break;
					}
				}
				if (t == 0) 
				{
					printf("%d ", j);
					s2[i] = s1[j];
				}
				break;
			}
		}
		if (s2[i] == 0)
		{
			printf("-1 ");
		}
	}


	for (int k = 0; k < sizeof(s1); k++)
	{
		if (s1[k] == NULL)
			break;

		else if (s1[k] == 'z')
		{
			n = k;
			break;
		}
	}

	if (n != 100)
	{
		printf("%d ", n);
	}
	else
		printf("-1 ");


	return 0;
}