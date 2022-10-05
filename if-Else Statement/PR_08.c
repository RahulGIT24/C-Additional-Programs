//* Check whether a number is divisible by 5 and 11

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 11 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 11 and 5", num);
    }
    else
    {
        printf("%d is not divisible by 11 and 5", num);
    }

    return 0;
}