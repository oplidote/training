#include <stdio.h>
int factorial(int num)
{
	if (num > 1)
		return num * factorial(num - 1);
	else if (num == 0)
		return 1;
    else if (num ==1)
        return 1;
}

int main()
{
	int t=0;
	scanf("%d", &t);
	printf("%d",factorial(t));
    return 0;
}