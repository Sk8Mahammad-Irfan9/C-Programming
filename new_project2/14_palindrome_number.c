#include <stdio.h>
int main()
{
    int n, r, c, s = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
        // printf("%d",s);
    }
    if (c == s)
    {
        printf("\n%d is palindrome number", c);
    }
    else
    {
        printf("\n%d is not a palindrome number", c);
        
    }

    return 0;
}