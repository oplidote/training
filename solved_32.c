#include <stdio.h>
int d(num)
{
	int a, b, c, d, e, f;
	a = num / 1000;
	b = ((num % 1000) - (num % 100)) / 100;
	c = ((num % 100) - (num % 10)) / 10;
	d = num % 10;
	f = num;
	e = f + a + b + c + d;
	return e;
}

int main(void)
{
	int a[10000];
	int b[10000];
	for (int j = 0,i=1; j < 9999;i++, j++)
	{
		a[j] = d(i);
		b[j] = i;
	}
	for (int k = 0; k < 9999; k++)
	{
		for (int l = 0; l < 9999; l++)
		{
			if (b[k] == a[l])
			{
				b[k] = 0;
			}
		}
	}
	for (int m = 0; m < 9999; m++)
	{
		if (b[m] != 0)
			printf("%d\n", b[m]);
	}

	return 0;
}