#include<stdio.h>
int main()
{
    char s1[]="Sk mahammad irfan";
    char *ptr;
    ptr=s1;
    int len=0;
    while (*ptr)
    {
        len++;
        ptr++;
    }
    printf("\nString len is %d",len);
    return 0;
}