// Return multiple values from a function using pointers.

#include <stdio.h>
void calc(int num1, int num2, int *add, int *sub)
{
    *add = num1 + num2;
    *sub = num1 - num2;
}
int main()
{
    int num1, num2, add, sub;
    printf("Enter 1st number\n");
    scanf("%d", &num1);
    printf("Enter 2nd number\n");
    scanf("%d", &num2);
    calc(num1, num2, &add, &sub);
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    return 0;
}