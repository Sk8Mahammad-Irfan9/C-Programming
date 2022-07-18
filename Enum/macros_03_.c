#include<stdio.H>
#define AND &&
#define OR ||
#define NOT !
int main()
{
    int a,b;
    printf("Enter marks of subject 1: ");
    scanf("%d",&a);
    printf("Enter marks of subject 2: ");
    scanf("%d",&b);
    if(a>30 AND b>20)
    printf("\nYou pass!!");
    else
    printf("Fail");

    return 0;
}