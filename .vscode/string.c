// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[12] = "irfan";
//     char s2[10] = " hello";
//     strcat(s1, s2);
//     printf("%s", s1, s2);
//     return 0;
// }
#include<stdio.h>
int main()
{
    struct rect
    {
        int top;
        int left;
        int right;
        int bottom;
    };
    typedef struct rect RECT;
    typedef struct rect *PRECT;
    RECT r;
    PRECT pr;
    return 0;
}