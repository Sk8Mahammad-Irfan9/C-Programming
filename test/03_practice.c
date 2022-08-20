#include <stdio.h>
int main()
{
    int arr[50], num, i, j, temp;
    printf("\nEnter number of elements: ");
    scanf("%d", &num);
    printf("\nEnter elements: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i+1; j < num ; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe elements after sorting: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}