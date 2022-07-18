#include<stdio.h>
int main()
{
    FILE *fp;
    char a;
    fp=fopen("bca.txt","r");
    while ((a=getc(fp))!=EOF)
    {
        printf("%c",a);
    }
    fclose(fp);
    return 0;
}