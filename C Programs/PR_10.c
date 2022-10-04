//* Factorial of a given number

#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        int result = num * factorial(num - 1);
        return result;
    }
}
int main()
{
    int num = 7;
    int fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
    return 0;
}