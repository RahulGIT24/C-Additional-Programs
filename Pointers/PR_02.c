// Swap two numbers using pointers.

#include <stdio.h>

int main()
{
    int num1, num2, *ptr1 = &num1, *ptr2 = &num2;
    printf("Enter 1st number: ");
    scanf("%d", ptr1);
    printf("Enter 2nd number: ");
    scanf("%d", ptr2);

    printf("Before Swapping\n");
    printf("X = %d\n", *ptr1);
    printf("Y = %d\n", *ptr2);

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After Swapping\n");
    printf("X = %d\n", *ptr1);
    printf("Y = %d\n", *ptr2);
    return 0;
}