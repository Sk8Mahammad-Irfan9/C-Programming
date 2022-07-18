#include<stdio.h>
int main()
{
    int r,i=0,j,a[10],num,numc,base;
    printf("Enter a decimal number ");
    scanf("%d",&num);
    printf("\nEnter base ");
    scanf("%d",&base);
    numc=num;
    while (numc>0)
    {
        r=numc%base;
        a[i]=r;
        i++;
        numc=numc/base;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
    return 0;
}