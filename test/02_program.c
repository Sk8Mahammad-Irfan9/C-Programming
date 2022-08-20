#include <stdio.h>
int main()
{
    int a[10], i, search, num;
    printf("\nEnter no. of array Elements you want to store= ");
    scanf("%d", &num);

    printf("\nEnter array Elements= ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number you want to search: ");
    scanf("%d", &search);

    for (i = 0; i < num; i++)
    {
        if (a[i] == search)
        {
            printf("Match Found");
            break;
        }
        else
        {
            printf("Not found");
            break;
        }
    }

    return 0;
}