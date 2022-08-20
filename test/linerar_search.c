#include<stdio.h>
int main()
{
    int num,i,a[50],search;
    printf("\nEnter number of elements: ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number to find: ");
    scanf("%d",&search);
    for ( i = 0; i < num; i++)
    {
        if (a[i]==search)
        {
            printf("%d element found at location %d",search,i+1);
            break;
        }        
    }   
    
    return 0;
}