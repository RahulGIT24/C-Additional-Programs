//* Calculate Grade

#include <stdio.h>

int main()
{
    int percentage;
    printf("Enter your percentage");
    scanf("%d", &percentage);

    if (percentage > 100)
    {
        printf("Enter your percentage between 0 to 100\n");
    }
    else
    {
        switch (percentage / 10)
        {
        case 9:
            printf("You got A grade");
            break;
        case 8:
            printf("You got B grade");
            break;
        case 7:
            printf("You got C grade");
            break;
        case 6:
            printf("You got D grade");
            break;
        case 5:
            printf("You got E grade");
            break;

        default:
            printf("Your grade is F and you are failed");
            break;
        }
    }

    return 0;
}