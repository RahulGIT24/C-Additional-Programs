//* Input Week number and print weekday

#include <stdio.h>

int main()
{
    int weekno;
    printf("Enter week number\n");
    scanf("%d", &weekno);

    if (weekno == 1)
    {
        printf("Today is Monday!");
    }
    else if (weekno == 2)
    {
        printf("Today is Tuesday!");
    }
    else if (weekno == 3)
    {
        printf("Today is Wednesday!");
    }
    else if (weekno == 4)
    {
        printf("Today is Thursday!");
    }
    else if (weekno == 5)
    {
        printf("Today is Friday!");
    }
    else if (weekno == 6)
    {
        printf("Today is Saturday!");
    }
    else if (weekno == 7)
    {
        printf("Today is Sunday!");
    }
    else
    {
        printf("NO DAY!");
    }

    return 0;
}