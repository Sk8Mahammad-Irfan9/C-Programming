#include <stdio.h>
int main()
{
    struct student
    {
        char name[15];
        int roll;
        float marks;
    };
    struct student s1;
    printf("\nEnter your name ");
    scanf("%s", s1.name);
    printf("\nEnter your roll no. ");
    scanf("%d", &s1.roll);
    printf("\nEnter marks ");
    scanf("%f", &s1.marks);
    printf("\nName is %s roll no. is %d and marks is %f", s1.name, s1.roll, s1.marks);
    return 0;
}