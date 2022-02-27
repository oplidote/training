#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main(void)
{	
	int arr[3] = { 0 };
	char num[10] = { NULL };
	char num1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int count[10] = { 0 };
	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	int t = arr[0]*arr[1]*arr[2];

	sprintf(num, "%d", t);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (num[i] == num1[j] + '0')
			{
				count[j] += 1;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	return 0;
}