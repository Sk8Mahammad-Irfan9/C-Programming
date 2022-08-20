#include <stdio.h>
int main()
{
    int a[20], i, num, data, r;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        a[i] = -1;
    }
    for (i = 0; i < num; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &data);
        r = data % num;
        if (a[r] == -1)
        {
            a[r] = data;
        }
        else
        {
            for (i = r + 1; i < num; i++)
            {
                if (a[i] == -1)
                {
                    a[i] = data;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for ( i = 0; i < num; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}