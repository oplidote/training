#include<stdio.h>

int main(void){
	int H,M;
	scanf("%d %d", &H,&M);
	if (0 <= H <= 24, 0 <= M <= 59)
	{
		if (M >= 45)
			printf("%d %d", H, M - 45);
		else if (M <= 45 && H > 0)
			printf("%d %d", H - 1, 60 + (M - 45));
		else if (M <= 45 && H == 0)
			printf("%d %d", 24 + (H - 1), 60 + (M - 45));
	}
}