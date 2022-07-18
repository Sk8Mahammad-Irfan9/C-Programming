#include <stdio.h>
int main()
{
    int a, r;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("The reversed number is: ");
    while (a > 0)
    {
        r = a % 10;
        a = a / 10;
        printf("%d", r);
    }
    return 0;
}