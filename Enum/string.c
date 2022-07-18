#include <stdio.h>
#include <string.h>
 int main()
{
    char str1[20];
    char str2[20];
    int i;
    printf("Enter name: ");
    scanf("%s",str1);
    printf("Enter name: ");
    scanf("%s",str2);
    int b=strlen(str1);
    int c=strlen(str2);
    int sum=b+c;
    printf("length is %d",b);
    printf("\nlength is %d",c);
    printf("\ntotal is %d",sum);
    if(b>c)
    {
        printf("\nstring 1 is greater than string 2");
    }
    else
    {
        printf("\nstring 2 is greater than string 1");
    }
    return 0;
}