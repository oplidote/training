#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int card = 0;
	int num = 0;
	int max = 0;
	scanf("%d %d", &card, &num);

	int*arr = malloc(sizeof(int) * card);
	for (int i = 0; i < card; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < card; i++)
	{
		for (int j = 0; j < card; j++)
		{
			if (arr[i] != arr[j])
			{
				for (int k = 0; k < card; k++)
				{
					if (arr[i] != arr[k] && arr[j] != arr[k])
					{
						if (arr[i] + arr[j] + arr[k] > max
							&& arr[i] + arr[j] + arr[k] <= num)
							max = arr[i] + arr[j] + arr[k];
						if (max == num)
							break;
					}
				}
			}
			if (max == num)
				break;
		}
		if (max == num)
			break;
	}
	free(arr);
	printf("%d", max);
	return 0;
}