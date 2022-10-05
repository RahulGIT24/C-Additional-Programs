//* Check whether a character is lowercase, uppercase, special character, or digit

#include <stdio.h>
#include <ctype.h>
void checkType(char c)
{
    if (!isdigit(c))
    {
        if (!isalpha(c))
        {
            printf("It is a special character");
        }
        else
        {
            if (!isupper(c))
            {
                printf("Entered Character is lowercase");
            }
            else
            {
                printf("Entered Character is uppercase");
            }
        }
    }
    else
    {
        printf("Entered value is a digit\n");
    }
}
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    checkType(c);
    return 0;
}