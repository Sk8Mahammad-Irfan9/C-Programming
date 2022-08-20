#include<stdio.h>
int main()
{
    int num,i,a[50],first,last,middle,search;
    printf("\nEnter number of elements: ");
    scanf("%d",&num);
    printf("\nEnter elements: ");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number to find: ");
    scanf("%d",&search);
    first=0;
    last=num-1;
    middle=(first+last)/2;
    while (first<=last)
    {
        if (a[middle]<search)
        {
            first=middle+1;
        }
        else if (a[middle]==search)
        {
            printf("The element %d is found at %d",search,middle+1);
            break;
        }
        else
        {
            last=middle-1;

        }
        middle=(first+last)/2; 
    }
    if(first>last)
    printf("Not Found!!!!");
    
    
    return 0;
}