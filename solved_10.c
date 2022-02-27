#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main(void)
{	
	int a;
	double max = 0;
	double all = 0;
	double p = 0;
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < a; i++)
	{
		 all += (arr[i] / max) * 100;
	}
	p = all / a;
	printf("%.5lf\n", p);
	
	return 0;
}