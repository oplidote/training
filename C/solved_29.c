#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char word[100] = { NULL };
	int count = 0;
	int point = 0;
	scanf("%s", word);
	for (int i = 0; i < word; i++)
	{	
		if (word[i] == 0)
			break;
		else if (word[i] == 'c' && word[i + 1] == '=')
			point += 1;
		else if (word[i] == 'c' && word[i + 1] == '-')
			point += 1;
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
			point += 2;
		else if (word[i] == 'd' && word[i + 1] == '-')
			point += 1;
		else if (word[i] == 'l' && word[i + 1] == 'j')
			point += 1;
		else if (word[i] == 'n' && word[i + 1] == 'j')
			point += 1;
		else if (word[i] == 's' && word[i + 1] == '=')
			point += 1;
		else if (word[i-1] !='d' && word[i] == 'z' && word[i + 1] == '=')
			point += 1;

		count++;
	}
	printf("%d", count-point);
	return 0;
}