#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter your number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}