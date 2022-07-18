#include <stdio.h>
int main()
{
    int a[3][3], i, j,sum=0,add=0,plus=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<3;j++)
    {
        sum=sum+a[0][j];
        add=add+a[1][j];
        plus=plus+a[2][j];
    }
    printf("\n %d %d %d",sum,add,plus);
    return 0;
}