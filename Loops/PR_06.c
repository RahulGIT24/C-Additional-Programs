//* Print Multiplication of a table

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, num * (i + 1));
    }

    return 0;
}