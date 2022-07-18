#include<stdio.h>
int main()
{
    struct doc
    {
        int age;
        char city[20];
        char name[20];
    };
    struct employee
    {
        float salary;
        float time;
        struct doc d;
    };
    struct employee e1;
    printf("\nEnter name: ");
    scanf("%s",e1.d.name);
    printf("\nEnter age: ");
    scanf("%d",&e1.d.age);
    printf("\nEnter your city name: ");
    scanf("%s",e1.d.city);
    printf("\nYour salary is: ");
    scanf("%f",&e1.salary);
    printf("\nYour work time is: ");
    scanf("%f",&e1.time);
    printf("\nName is %s age is %d from %s and salary is %f worktime %f",e1.d.name,e1.d.age,e1.d.city,e1.salary,e1.time);
    
    
    return 0;
}