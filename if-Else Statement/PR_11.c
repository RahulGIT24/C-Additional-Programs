//* Input month number and print it's days

#include <stdio.h>

int main()
{
    int monthNum;
    printf("Enter month number\n");
    scanf("%d", &monthNum);

    if (monthNum == 1)
    {
        printf("January has 31 days.");
    }
    else if (monthNum == 2)
    {
        printf("February has 28 days.");
    }
    else if (monthNum == 3)
    {
        printf("March has 31 days.");
    }
    else if (monthNum == 4)
    {
        printf("April has 30 days.");
    }
    else if (monthNum == 5)
    {
        printf("May has 31 days.");
    }
    else if (monthNum == 6)
    {
        printf("June has 30 days.");
    }
    else if (monthNum == 7)
    {
        printf("July has 31 days.");
    }
    else if (monthNum == 8)
    {
        printf("August has 30 days.");
    }
    else if (monthNum == 9)
    {
        printf("September has 30 days.");
    }
    else if (monthNum == 10)
    {
        printf("October has 31 days.");
    }
    else if (monthNum == 11)
    {
        printf("November has 30 days.");
    }
    else if (monthNum == 12)
    {
        printf("December has 31 days.");
    }

    return 0;
}