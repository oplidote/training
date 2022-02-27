#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t = 0;
	int trueword = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char groupword[100] = { NULL };
		scanf("%s", groupword);
		int len = strlen(groupword);
		int yes = 1;
		if (len > 2)
		{
			for (int j = 2; j < len; j++)
			{
				for (int k = j - 2; k >= 0; k--)
				{
					if (groupword[j] != groupword[j - 1] && groupword[j] == groupword[k])
					{
						yes = 0;
						break;
					}
				}
				if (yes == 0)
					break;
			}
		}


		if (yes == 1)
		{
			trueword += 1;
		}
	}
	printf("%d", trueword);
	return 0;
}