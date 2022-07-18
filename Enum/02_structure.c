#include <stdio.h>
int main()
{
    struct date
    {
        int dd;
        int mm;
        int yyyy;
    };
    struct employee
    {
        int id;
        char name[20];
        struct date doj;
    } emp1;
    printf("Enter name ");
    scanf("%s", emp1.name);
    printf("\nEnter id ");
    scanf("%d", &emp1.id);
    printf("Enter date of joining ");
    printf("\nEnter date,month,year");
    scanf("%d %d %d", &emp1.doj.dd, &emp1.doj.mm, &emp1.doj.yyyy);
    printf("The Employee information is...");
    printf("\nName is %s id is %d date of joining %d %d %d", emp1.name, emp1.id, emp1.doj.dd, emp1.doj.mm, emp1.doj.yyyy);

    return 0;
}