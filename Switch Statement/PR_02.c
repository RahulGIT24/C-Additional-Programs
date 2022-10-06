//* Calculator using Switch statement

#include <stdio.h>

int main()
{
    char expression;
    int num, num1;
    printf("Enter mathematical operation\n");
    scanf("%c", &expression);
    printf("Enter first number\n");
    scanf("%d", &num);
    printf("Enter second number\n");
    scanf("%d", &num1);

    switch (expression)
    {
    case '+':
        printf("The sum of %d and %d is %d", num, num1, num + num1);
        break;
    case '-':
        printf("The subtraction of %d and %d is %d", num, num1, num - num1);
        break;
    case '*':
        printf("The multiplication of %d and %d is %d", num, num1, num * num1);
        break;
    case '/':
        printf("The quotient of %d and %d is %d", num, num1, num / num1);
        break;
    case '%':
        printf("The remainder of %d and %d is %d", num, num1, num % num1);
        break;

    default:
        printf("Not a valid expression");
        break;
    }
    return 0;
}
