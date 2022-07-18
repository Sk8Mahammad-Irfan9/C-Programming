#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter a number ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        for (j = num; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}