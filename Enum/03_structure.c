#include<stdio.h>
int main()
{
    struct a
    {
        int i;
        char ch[2];
    };
    struct a yoo;
    yoo.i=512;
    printf("\nkey.i=%d",yoo.i);
    printf("\nkey.ch[0]=%d",yoo.ch[0]);
    printf("\nkey.ch[1]=%d",yoo.ch[1]);

    
    return 0;
}