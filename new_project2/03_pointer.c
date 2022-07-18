#include<stdio.h>
int main()
{
    int a;
    int *ptr;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("You entered %d\n",a);
    ptr=&a;
    printf("Your entered no. address is %d",ptr);
    printf("\nYour entered no. address is %d",&a);
    printf("\nYour entered no. is %d",a);
    printf("\nYour entered no. is %d",*ptr);
    return 0;
}