// Recursion to print first n natural number

#include <stdio.h>
void natural(int num)
{
    if (num == 1)
    {
        printf("1");
    }
    else if (num == 0)
    {
        printf("0");
    }
    else
    {
        natural(num - 1);
        printf("%d\n", num);
    }
}
int main()
{
    int num;
    printf("Enter from where you want to get natural numbers\n");
    scanf("%d", &num);
    printf("First %d natural numbers are", num);
    natural(num);
    return 0;
}