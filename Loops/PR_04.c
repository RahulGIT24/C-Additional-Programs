//* Count number of digits in an integer

#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter the digits\n");
    scanf("%d", &num);

    do
    {
        num /= 10;
        ++count;
    } while (num != 0);

    // while (num != 0)
    // {
    //     count++;
    //     num /= 10;
    // }

    printf("It has %d integers", count);
    return 0;
}