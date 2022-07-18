#include<stdio.h>
int main()
{
    struct student
    {
        int phy;
        int che;
        int math;
        int eng;
        int comp;

    };
    struct student s[3];
    int i,average[3],total;
    for(i=0;i<3;i++)
    {
        printf("\nEnter marks for student[%d]",i+1);
        printf("\nEnter phy: ");
        scanf("%d",&s[i].phy);
        printf("\nEnter che: ");
        scanf("%d",&s[i].che);
        printf("\nEnter math: ");
        scanf("%d",&s[i].math);
        printf("\nEnter eng: ");
        scanf("%d",&s[i].eng);
        printf("\nEnter comp: ");
        scanf("%d",&s[i].comp);
        total=(s[i].phy+s[i].che+s[i].math+s[i].eng+s[i].comp);
        printf("\nTotal for student(%d) is: %d",i+1,total);
        average[i]=(total)/5;
        printf("\nThe average for student(%d) is: %d\n",i+1,average[i]);
        if(average[i]>40)
        {
            printf("\nThe student(%d) is Passed!!",i+1);
        }
        else
        {
            printf("\nThe student(%d) is Fail!!",i+1);
        }

    }
    // for (i=0;i<3;i++)
    // {
    //     // average[i]=(total)/5;
    //     // printf("\nThe average for student(%d) is: %d\n",i+1,average);
    // }
    
    
    return 0;
}