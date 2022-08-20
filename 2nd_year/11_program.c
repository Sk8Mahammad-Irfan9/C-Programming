#include <stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
        int eng;
        int beng;
        int math;
        int comp;
        int science;
    };

    struct student s[5];
    int total[5], i;
    float perc[5];

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("\n Enter roll number : ");
        scanf(" %d", &s[i].roll);
        printf("\n eng : ");
        scanf(" %d", &s[i].eng);
        printf("\n beng : ");
        scanf(" %d", &s[i].beng);
        printf("\n math :");
        scanf("%d", &s[i].math);
        printf("\n comp : ");
        scanf("%d", &s[i].comp);
        printf("\n science : ");
        scanf("%d", &s[i].science);
        total[i] = (s[i].eng + s[i].beng + s[i].math + s[i].comp + s[i].science);
        printf("\nTotal for student[%d] is %d", i + 1, total[i]);
        perc[i]=(total[i] / 500) * 100;
        printf("\nPercentage of student [%d] is %f",i+1,perc[i]);
    }
    return 0;
}