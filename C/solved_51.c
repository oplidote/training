#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		printf("%d\n", b + c);
	}
	return 0;
}