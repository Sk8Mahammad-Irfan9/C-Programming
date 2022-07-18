#include <stdio.h>
void main()
{
    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 200 == 0))
    {
        printf("\n%d is leap year", year);
    }
    else
    {
        printf("\n%d is not leap year", year);
    }
}