#include<stdio.h>

int main(void){
	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}