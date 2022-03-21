#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char call[15] = { NULL };
	int time = 0;
	scanf("%s", call);
	for (int i = 0; i < call; i++)
	{
		if (call[i] == NULL)
			break;
		else if (call[i] < 68)
			time += 3;
		else if (call[i] < 71)
			time += 4;
		else if (call[i] < 74)
			time += 5;
		else if (call[i] < 77)
			time += 6;
		else if (call[i] < 80)
			time += 7;
		else if (call[i] < 84)
			time += 8;
		else if (call[i] < 87)
			time += 9;
		else
			time += 10;
	}
	printf("%d", time);
	return 0;
}