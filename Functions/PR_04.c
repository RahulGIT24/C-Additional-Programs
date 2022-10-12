// Check whether a number is even or odd using functions

#include <stdio.h>
void even_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    even_odd(num);
    return 0;
}