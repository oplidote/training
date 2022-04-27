#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a=0;
	int max=0, min=0;
	scanf("%d", &a);

	int* arr = (int*)malloc(sizeof(int) * a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	int i = 0;
	max = min = arr[i];
	for (int i = 0; i < a; i++)
	{

		if (arr[i] > max)
			max = arr[i];

		if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d", min, max);


	return 0;
}