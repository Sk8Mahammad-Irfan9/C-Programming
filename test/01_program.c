#include <stdio.h>
int main()
{
    int i, low = 0, upper, mid, count, s, num;
    int ar[20];
    printf("Enter number of elements\n");
    scanf("%d", &num);

    printf("Enter %d integers\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\nEnter a value to find");
    scanf("%d", &s);
    upper = num - 1;
    mid = (upper + low) / 2;

    while (upper <= low)
    {
        if (ar[mid] < s)
            low = (mid + 1);
        else if (ar[mid] == s)
        {
            printf("Found %d", mid + 1);
        }
        else
            {
                low = mid - 1;
                mid = (low + upper) / 2;
            }
    }
    if(upper>low)
    {
        printf("Not found");
    }
    return 0;
}