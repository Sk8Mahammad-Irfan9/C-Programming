#include<stdio.h>
int main()
{
    int i, j, n, k;
    printf("enter a number ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
        {
            printf("  ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}