#include<stdio.h>
int main()
{
    int a[20],i,num,j,temp;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    printf("\nEnter %d of integers:\n",num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < num; i++)
    {
        for ( j = i+1; j < num; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    printf("\nAfter sorting the elements are: \n");
    for ( i = 0; i < num; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}