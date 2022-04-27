#include<stdio.h>

int main(void){
	int n;
	int i;
	int a;
	a = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a+= i;
	}
	printf("%d", a);

}