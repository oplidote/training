#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // 숫자의 합 출력하기
{	
	int count = 0, b = 0, c = 0,buf = 0;
	scanf("%d", &count);

	char array[101];
	scanf("%s", array);
	for (int i = 0; i < count; i++)
	{
		buf = array[i]-'0';
		c += buf;
	}
	printf("%d", c);
	return 0;
}