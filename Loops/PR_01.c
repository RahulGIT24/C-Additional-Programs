//* Reverse a given number

#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;
    printf("Enter some digits\n");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number is %d\n", reverse);
    return 0;
}