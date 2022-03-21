#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,x,num;
	int arr[10000] = {0};
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if(x>num)
		arr[i] = num;
	}
	for(int i = 0; i <n;i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
	return 0;
}