#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int h[50] = { 0 };
	int w[50] = { 0 };
	int rank = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &h[i], &w[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		for (int j = 0; j < n; j++)
		{
			if (h[i] < h[j] && w[i] < w[j])
				rank++;
		}

		printf("%d", rank);
		if (i != (n - 1))
			printf(" ");
	}
	return 0;
}