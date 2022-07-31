#include <stdio.h>
int main()
{
    int base, num, i = 0, j, r, a[20];
    printf("\nEnter base ");
    scanf("%d", &base);
    num = 44;
    while (num > 0)
    {
        r = num % base;
        a[i] = r;
        i++;
        num = num / base;
    }
    for (j = i - 1; j >= 0; j--)
    {
        if (a[j] == 10)
        {
            printf("A");
        }
        if (a[j] == 11)
        {
            printf("B");
        }
        if (a[j] == 12)
        {
            printf("C");
        }
        if (a[j] == 13)
        {
            printf("D");
        }
        if (a[j] == 14)
        {
            printf("E");
        }
        if (a[j] == 15)
        {
            printf("F");
        } 
        printf("%d", a[j]);
    }

    return 0;
}