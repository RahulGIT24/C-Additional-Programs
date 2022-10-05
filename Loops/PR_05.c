//* Genetic Root of a number

#include <stdio.h>

int main()
{
    int num, remainder, sum;
    printf("Enter a digit\n");
    scanf("%d", &num);

    while (num >= 10)
    {
        for (sum = 0; num > 0; num = num / 10)
        {
            remainder = num % 10;
            sum = sum + remainder;
        }

        if (sum >= 10)
        {
            num = sum;
        }
        else
        {
            printf("Genetic root of number is %d", sum);
            break;
        }
    }
    return 0;
}