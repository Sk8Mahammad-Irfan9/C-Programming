#include <stdio.h>
int main()
{
    int a[] = {23, 21, 98, 96, 97};
    int i, n = 5, data =20;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("\nFound");
        }
    }
    printf("\nNot found");



    return 0;
}