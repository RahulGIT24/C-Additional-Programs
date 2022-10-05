//* Check number is positive or not

#include <stdio.h>

int main()
{
    int num = -90;
    if (num < 0)
    {
        printf("%d is negative", num);
    }
    else
    {
        printf("%d is positive", num);
    }

    return 0;
}