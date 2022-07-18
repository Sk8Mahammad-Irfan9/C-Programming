#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("\n\t%d X %d= %d", n, i, n * i);
    }
    return 0;
}