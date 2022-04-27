#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main(void)
{	
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		int point = 0;
		int stack = 1;
		char ox[80] = { NULL };
		scanf("%s", ox);
		for(int j =0;ox[j]!=NULL;j++)
		{
			if (ox[j] == 'O')
			{
				if (ox[j - 1] == 'O')
				{
					point += stack;
					stack++;
				}
				else
				{
					point += stack;
					stack++;
				}
			}
			else if (ox[j] == 'X')
				stack = 1;
		}
		printf("%d\n", point);

	}
	return 0;
}