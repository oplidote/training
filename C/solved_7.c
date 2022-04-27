#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char a[1000001] = { NULL };
	int aph[26] = { 0 };
	int most = 0;
	int t = 1;
	int ans[10] = { 0 };
	scanf("%s", a);


	for (int i = 0; i < a; i++)
	{
		if (a[i] == NULL)
			break;
		else if (a[i] > 'Z')
		{
			a[i] = a[i] - 32;
		}
		aph[a[i] - 65]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (aph[i] > most)
		{
			most = aph[i];
			ans[0] = i;
		}
	}aph[ans[0]] = 0;
	for (int i = 0; i < 26; i++)
	{
		if (aph[i] == most)
		{
			printf("?");
			t = 0;
			break;
		}
	}
	if (t == 1)
		printf("%c", ans[0] + 65);
	return 0;
}