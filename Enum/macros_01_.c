#include <stdio.h>
#define SUM a + b
int main()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("The answer ''%d'' is getting from MACROs", SUM);
    return 0;
}