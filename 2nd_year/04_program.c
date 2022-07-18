#include <stdio.h>
int main()
{
    int a[50], num, data, i, r, sq;
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
        sq = data * data;
        data = sq / 10;
        r = data % 10;
        a[r] = data;
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