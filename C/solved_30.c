#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main(void)
{	
	int num[10] = { 0 };
	int num1[10];
	int a,count=0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		num[i] = a % 42;
		num1[i] = -1;
	}
	for (int i = 0; i < 10; i++)
	{
		int k = 0;
		for (int j = 0; j < 10; j++)
		{
			if (num[i] == num1[j])

			{
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			num1[i] = num[i];
			num[i] = NULL;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}