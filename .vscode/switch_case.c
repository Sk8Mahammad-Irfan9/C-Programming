#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter a ");
    scanf("%d",&a);
    printf("\nEnter b ");
    scanf("%d",&b);
    sum=a+b;
    switch (sum)
    {
        case 12 : printf("\nyou are right");
        break;
        case 28 : printf("\nhello world");
        break;
        case 18 : printf("\n tapabrata");
        break;
        case 10 : printf("\nHello tapabrata");
        break;
    }
    return 0;
}