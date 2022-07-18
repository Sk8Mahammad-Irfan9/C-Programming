#include <stdio.h>
int main()
{
    struct student 
    { 
        char name[20];
        int roll;
        int eng;
        int hindi;
        int math;
        int comp;
    };
    
     struct student s[5];
    int total[5],i,marks[5];
    float average[5];
     
     for(i=0;i<5;i++)
     { 
         printf("\nEnter name: ");
         scanf("%s",s[i].name);
        printf("\n eng : ");
        scanf(" %d",&s[i].eng);
        printf("\n hin:" );
        scanf(" %d",&s[i].hindi);
        printf("\n math :");
        scanf("%d",&s[i].math);
        printf("\n comp : ");
        scanf("%d",&s[i].comp);
        total[i]=(s[i].eng+s[i].hindi+s[i].math+s[i].comp);
        printf("\nTotal is %d",total[i]); 
     }
     for(i=0;i<5;i++)
     {
        average[i]=(s[i].eng+s[i].hindi+s[i].math+s[i].comp)/4;
        printf("Average is %d",average[i]);
     }
    return 0;
}