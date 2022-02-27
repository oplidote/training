#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	char sentence[1000001] = { 0 };
	int count = 0;
	scanf("%[^\n]", sentence);
	for (int i = 0; i < sentence; i++)
	{
		if (sentence[i] == 0)break;
			
		else if (sentence[i] !=' ')
		{
			if ((sentence[i+1] == ' ') || (sentence[i + 1] == NULL))
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
