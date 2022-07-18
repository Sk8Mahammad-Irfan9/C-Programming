#include <stdio.h>
#define D 45
int main()
{
    int a, b, c;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    c = a + b + D;
    printf("\nTotal is %d", c);
    int e = 90 + D;
    printf("\nAfter Total is %d", e);
    for (int i = 1; i <= 10; i++)
        printf("\n  %dX%d=%d", i, D, i * D);
    return 0;
}