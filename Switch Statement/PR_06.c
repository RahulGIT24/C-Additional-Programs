//* Print greatest between two numbers

#include <stdio.h>

int main()
{
    int num, num1;
    printf("Enter first number\n");
    scanf("%d", &num);
    printf("Enter second number\n");
    scanf("%d", &num1);

    switch (num > num1)
    {
    case 0:
        printf("Greatest number is %d", num1);
        break;
    case 1:
        printf("Greatest number is %d", num);
        break;
    }
    return 0;
}