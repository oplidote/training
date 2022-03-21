#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	
	int arr[3] = { 0 };
	int max = 0;
	int sec = 0;
	int t = 0;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (int i = 0; i < 3; i++)// 20 30 10
	{
		if (arr[i] > max)
		{
			max = arr[i];
			t = i;
		}
	}
	arr[t] = 0;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] > sec)
			sec = arr[i];
	}
	printf("%d", sec);
	return 0;
}