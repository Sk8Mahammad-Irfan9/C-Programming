#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int age;
    };
    struct student s1;
    struct student *ptr1;
    printf("\nEnter name: ");
    scanf("%s",s1.name);
    printf("\nEnter age: ");
    scanf("%d",&s1.age);
    ptr1=&s1;
    printf("\nName is %s and age is %d",ptr1->name,ptr1->age);
    return 0;
}