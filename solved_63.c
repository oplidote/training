#include<stdio.h>

int main(void){
	int x,y;
	scanf("%f", &x);
	scanf("%f", &y);
	if (-1000 <= x <= 1000 && x != 0, -1000 <= y <= 1000 && y != 0)
	{
		if (x > 0 && y > 0)
			printf("1");
		else if (x < 0 && y > 0)
			printf("2");
		else if (x < 0 && y < 0)
			printf("3");
		else if (x > 0 && y < 0)
			printf("4");
	}
}