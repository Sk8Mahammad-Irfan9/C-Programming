// Storing data as the last number of element remainder hashing.
#include <stdio.h>
int main()
{
    int a[50], num, data, i, r;
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
        r = data % 10;
        if (a[r] == -1)
        {
            a[r] = data;
        }
    }

    for ( i = 0; i < num; i++)
    {
        printf("\n%d",a[i]);
    }
    
    return 0;
}