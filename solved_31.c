#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int main(void)
{	
	int a, b, c;
	scanf("%d", &a);
	int stu[1000];
	for (int i = 0; i < a; i++)
	{	
		double nor = 0;
		double studentaverage = 0;
		double count = 0;
		scanf("%d", &b);
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &stu[j]);
			nor += stu[j];
		}
		for (int k = 0; k < b; k++)
		{
			if (nor / b < stu[k])
				count++;
		}
		studentaverage = count / b * 100;
		printf("%.3lf%%\n", studentaverage);
	}
	return 0;
}