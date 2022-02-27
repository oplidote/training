#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a[9] = { 0 };
    int max;
    int stage;
    max = a[0];

    for(int i = 0; i < 9; i++)
        scanf("%d", &a[i]);

    for (int j = 0; j < 9; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
            stage = j;
        }
    }
    printf("%d\n", max);
    printf("%d\n", stage+1);

}