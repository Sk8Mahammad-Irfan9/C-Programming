#include<stdio.h>
#include<math.h>
int main()
{
    int temp,r,i;
    for(i=1;i<=100000;i++)
    {
        int res=0,count=0;
        temp=i;
        while (temp>0)
        {
            temp=temp/10;
            count++;
        }
        temp=i;
        while (temp>0)
        {
            r=temp%10;
            res=res+pow(r,count);
            temp=temp/10;
        }
        if(res==i)
        {
            printf("\n%d ",i);
        }
    }
    return 0;
}