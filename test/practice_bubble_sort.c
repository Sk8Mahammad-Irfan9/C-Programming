#include <stdio.h>
int main()
{
    int a[50], first, last, middle, num, search, i;
    printf("Enter a number you want to entered: ");
    scanf("%d", &num);
    printf("\nEnter %d elements:\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number you want to search: ");
    scanf("%d", &search);
    first = 0;
    last = num - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (a[middle] < search)
        {
            first = middle + 1;
        }
        else if (a[middle] == search)
        {
            printf("\n%d found at location at %d", search, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("Element not found");
    }

    return 0;
}