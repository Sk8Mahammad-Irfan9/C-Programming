#include <stdio.h>
int main()
{
    int num, count = 1, r, sum;
    while (count <= 1000)
    {
        num = count;
        sum = 0;

        while (num)
        {
            r = num % 10;
            sum = sum + (r * r * r);
            num = num / 10;
        }
        if (count == sum)
        {
            printf("\n%d", count);
        }
        count++;
    }
    return 0;
}