// Maximum and minimum between two numbers using functions.

#include <stdio.h>
int min_max(int num1, int num2)
{
    if (num1 > num2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (min_max(num1, num2) == 0)
    {
        printf("%d is greatest\n", num1);
    }
    else if (min_max(num1, num2) == 1)
    {
        printf("%d is greatest\n", num2);
    }

    return 0;
}