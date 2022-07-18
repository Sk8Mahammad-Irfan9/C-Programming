#include <stdio.h>
int main()
{
    int a[50], num, data, i, r, r1, r2;
    printf("\nHow many numbers: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        a[i] = -1;
    }
    for (i = 0; i < num; i++)
    {
        printf("\nEnter the data: ");
        scanf("%d", &data);
        r1 = data % 10;
        r2 = data % 10;
        r = r1 + r2;
        if (a[r] == -1)
        {
            a[r] = data;
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}