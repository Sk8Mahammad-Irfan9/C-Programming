#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    while (a<=10)
    {
        printf("\n%d",a);
        a++;
    }
    return 0;
}