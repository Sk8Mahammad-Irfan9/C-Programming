#include <stdio.h>
int sum(int a, int b)
{
    return (a + b);
}
int main()
{
    int a, b, c;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    c = sum(a, b);
    printf("\nTotal is %d", c);
    return 0;
}