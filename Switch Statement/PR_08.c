//* Check whether a number is even or odd

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    switch (num % 2 == 0)
    {
    case 1:
        printf("Even number");
        break;
    case 0:
        printf("Odd number");
        break;
    }
    return 0;
}