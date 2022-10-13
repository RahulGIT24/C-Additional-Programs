// Find factorial of any number using recursion.

#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        int fact = num * factorial(num - 1);
        return fact;
    }
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
    return 0;
}
