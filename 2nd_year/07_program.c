
#include <stdio.h>
int main()
{
    int i;
    int a[6] = {12, 3, 4, 6, 1, 8};
    int b[6] = {8, 1, 6, 4, 3, 12};
    int c[6];
    for (i = 0; i < 6; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
    return 0;
}