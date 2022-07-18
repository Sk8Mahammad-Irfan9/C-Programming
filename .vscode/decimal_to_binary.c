#include<Stdio.h>
int main()
{
    int r,a[10],num,i=0,numc,j;
    printf("Enter a decimal number ");
    scanf("%d",&num);
    numc=num;
    while(numc>0)
    {
        r=numc%2;
        a[i]=r;
        i++;
        numc=numc/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}