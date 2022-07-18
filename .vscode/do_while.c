#include <stdio.h>
int main()
{
    int a;
    printf("Enter a ");
    scanf("%d", &a);
    do
    {
        printf("\n%d", a);
        a++;
    } while (a < 10);
    return 0;
}