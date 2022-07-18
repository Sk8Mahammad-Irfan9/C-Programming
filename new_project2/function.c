#include <stdio.h>
int main()
{
    int num, s = 0, a[100], i, f = 0;
    printf("How many numbers you want to enter: ");
    scanf("%d", &num);
    printf("\nEnter the numbers:");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number you want to searched: ");
    scanf("%d", &s);
    for (i = 0; i < num; i++)
    {
        if (a[i] == s)
        {
            s = 1;
            break;
        }
    }
    if (s)
    {
        printf("\n the number is found %d", a[i]);
    }
    else
    {
        printf("\n Not found");
    }

    return 0;
}