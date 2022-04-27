#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main (void)
{
	int n=0;
	int count=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
			count++;
		
		else
		{
			char arr[4] = { NULL };
			sprintf(arr, "%d", i);
			
			if (arr[0] - arr[1] == arr[1] - arr[2]
				||
				arr[1] - arr[0] == arr[2] - arr[1])
				count++;
		}
	}
	printf("%d", count); 
	return 0;
}