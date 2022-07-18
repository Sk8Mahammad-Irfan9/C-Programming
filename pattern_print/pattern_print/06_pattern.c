#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}