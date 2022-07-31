<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
=======
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%d", a[i][j]);
        }
    }

    return 0;
>>>>>>> 3bfb2a65b990cc8d8ead5a7f40e25ffbaa252e62
}