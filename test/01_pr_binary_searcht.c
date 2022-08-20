#include<stdio.h>
int main()
{
    int a[20],num,search,first,last,middle,i;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    printf("Enter %d of integers: \n",num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number to find: ");
    scanf("%d",&search);
    first=0;
    last=num-1;
    middle=(first+last)/2;
    while (first<=last)
    {
        if(a[middle]<search)
        {
            first= middle+1;

        }
        else if (a[middle]==search)
        {
            printf("\n%d is found at location at %d",search,middle+1);
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if (first>last)
    {
        printf("\nNOT FOUND!!");
    }
    

    return 0;
}