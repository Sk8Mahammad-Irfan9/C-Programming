<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum = 0, add = 0, m = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    for (j = 0; j < 3; j++)
    {
        sum = sum + a[j][0];
        add = add + a[j][1];
        m = m + a[j][2];
    }
    printf("\n%d", sum);
    printf("\n%d", add);
    printf("\n%d", m);
    return 0;
=======
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum = 0, add = 0, m = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    for (j = 0; j < 3; j++)
    {
        sum = sum + a[j][0];
        add = add + a[j][1];
        m = m + a[j][2];
    }
    printf("\n%d", sum);
    printf("\n%d", add);
    printf("\n%d", m);
    return 0;
>>>>>>> 3bfb2a65b990cc8d8ead5a7f40e25ffbaa252e62
}