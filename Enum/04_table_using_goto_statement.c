// Reverse table
#include <stdio.h>
int main()
{
    int n, i = 10;
    printf("Enter a number: ");
    scanf("%d", &n);
here:
    printf("\n  %dX%d=%d", i, n, i * n);
    i--;
    if (i >= 1)
        goto here;
    return 0;
}