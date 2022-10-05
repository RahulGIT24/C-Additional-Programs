//* Check whether a number is palindrome or not

#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder, store;
    printf("Enter some digits\n");
    scanf("%d", &num);
    store = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (store == reverse)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is not Palindrome");
    }

    return 0;
}