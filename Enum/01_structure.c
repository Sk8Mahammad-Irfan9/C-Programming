#include <stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
};
int main()
{
    struct employee emp;
    printf("Enter employee information?\n");
    printf("\nEnter name,city,pin,phone no.:");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    printf("Printing the employee information...\n");
    printf("Name:%s\nCity:%s\nPinCode:%d\nPhone:%s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
    return 0;
}