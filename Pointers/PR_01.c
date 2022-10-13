// Add two numbers using pointers.

#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr = &num1;
    int *ptr2 = &num2;
    printf("Enter 1st number: ");
    scanf("%d", ptr);
    printf("Enter 2nd number: ");
    scanf("%d", ptr2);
    printf("The sum of %d and %d is %d\n", *ptr, *ptr2, *ptr + *ptr2);
    return 0;
}