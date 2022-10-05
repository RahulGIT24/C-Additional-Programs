//* Voting elegibility checker

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else
    {
        printf("!Sorry you are not eligible to vote!");
    }

    return 0;
}