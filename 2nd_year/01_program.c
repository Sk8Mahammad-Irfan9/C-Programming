#include <stdio.h>
int main()
{
    int num, sum = 0;
    while (1)
    {
        printf("\n Enter a number: ");
        scanf("%d", &num);
        if (num != 999)
        {
            sum = sum + num;
        }
        else
        {
            break;
        }
    }
    printf("\nTotal answer is: %d", sum);

    return 0;
}