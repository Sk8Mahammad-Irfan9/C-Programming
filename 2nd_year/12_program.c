// Linear search

#include<stdio.h>

int main()
{
    int a[20],i,search,num;
    printf("How many elements: ");
    scanf("%d",&num);

    printf("Enter %d elements: ",num);
    for(i=0;i<num;++i)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&search);

    for(i=0;i<num;++i)
    {
        if(a[i]==search)
        {
            printf("Found");
            break;
        }        
    }
    return 0;
}