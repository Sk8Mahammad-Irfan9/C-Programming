#include <stdio.h>
int main()
{
    int a[20], i, num, j, temp, first, last, middle, search;
    printf("Enter number of variables: ");
    scanf("%d", &num);
    printf("Enter numbers:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe bubble sort elements are:");
    for (i = 0; i < num; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter a number to find: ");
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
            printf("\n%d Found at location %d", search, middle + 1);
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
        printf("\n%d Not Found!!",search);
    }

    return 0;
}