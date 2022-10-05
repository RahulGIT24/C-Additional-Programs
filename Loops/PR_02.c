//* Sum of natural numbers

#include <stdio.h>

int main()
{
    int sum = 0, num, i = 0;
    printf("Enter the number of natural numbers\n");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    
    printf("The sum of first %d natural numbers is %d", num, sum);
    return 0;
}