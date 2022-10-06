//* Check whether a number is positive negative or zero
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("Positive integer");
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("Negative integer");
            break;
        case 0:
            printf("Integer is zero");
            break;
        }
        break;
    }
    return 0;
}