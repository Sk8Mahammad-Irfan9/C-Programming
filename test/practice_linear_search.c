#include <stdio.h>
int main()
{
    int i, a[50], search, num;
    printf("Enter how many elements you might to enter: ");
    scanf("%d", &num);
    printf("\nEnter elements:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter a number to find: ");
    scanf("%d", &search);
    for (i = 0; i < num; i++)
    {
        if (a[i] == search)
        {
            printf("%d is found at location at %d", search, i + 1);
            break;
        }
    }
    return 0;
}