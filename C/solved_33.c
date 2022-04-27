#include<stdio.h>

int main(void)
{
	int a, b, c, d, e,B,D;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	if (a < b && a < c)
		B = a;
	else if (b < a && b < c)
		B = b;
	else B = c;
	if (d < e)
		D = d;
	else D = e;
	printf("%d", (B + D) - 50);
}