#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int len, i;
    printf("Enter your name: ");
    scanf("%s", name);
    len = strlen(name);
    printf("\nThe reverse string is: ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}