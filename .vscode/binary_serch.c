#include<stdio.h>
int main()
{
    int a[5],i,num;
    for(i=0;i<5;i++)
    {
        printf("Enter a number ");
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number to search in the array: ");
    scanf("%d",&num);
    for(i=0;i<5;i++)
    {
        if (a[i]==num)
        {
            printf("%d is same as %d",a[i],num);
            break;
        }
    }
    return 0;
}