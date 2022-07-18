#include <stdio.h>
int main()
{
    int n, r = 0, arm = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    int c = n;
    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
    {
        printf("\n%d is an armstrong number", c);
    }
    else
    {
        printf("\n%d is not an armstrong number", c);
    }
    return 0;
}