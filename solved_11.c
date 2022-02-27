#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int num = 0;
	scanf("%d", &num);
	int locator = 0;
	for (int i = 0; i <= 1000000; i++)
	{	 //12345         0 + 
		locator = i + (i/100000 + ((i%100000 - i % 10000)/10000) + ((i % 10000 - i % 1000)/1000)
			+ ((i % 1000 - i % 100)/100) + ((i % 100 - i % 10)/10) +
			(i % 10));
		if (locator == num)
		{
			printf("%d", i);
			break;
		}
		else if (i >= num)
		{
			printf("0");
			break;
		}
	}
	return 0;
}