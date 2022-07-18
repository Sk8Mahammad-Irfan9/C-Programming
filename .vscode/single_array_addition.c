// Single array addition
#include <stdio.h>
int main()
{
    int a[5], b[5], i, sum;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("b[%d]", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = a[i] + b[i];
        printf("\n%d", sum);
    }

    return 0;
}