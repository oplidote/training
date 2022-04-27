#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n,t;
	int count = 1;
	scanf("%d", &n);
	t = n+0;

	n = ((n % 10) * 10) + (((n / 10) + (n % 10))%10);
	while (1)
	{	
		if (n == t)
		{
			break;
		}
		n= ((n % 10) * 10) + (((n / 10) + (n % 10))%10);
		count++;
	}
	printf("%d", count);
	return 0;
}