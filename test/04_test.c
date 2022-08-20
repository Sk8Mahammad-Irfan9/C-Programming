#include <stdio.h>
void main()
{
    int i, low, n, key, mid, high, a[10];
    // print the elemetns numbers range
    printf("Enter the elements:");
    scanf("%d", &n);
    // print the  elements
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Find the value of ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid]<key)
            low = mid + 1;
            
        else if (key > a[mid])
        {
            high = mid - 1;
        }
        else if (key == a[mid])
        {
            printf("found at position %d", mid);
            break;
        }
    }
}