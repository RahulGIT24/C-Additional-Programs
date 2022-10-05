//* Check whether entered value is character or not

#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    if (!isalpha(c))
    {
        printf("Not an alphabetic character");
    }
    else
    {
        printf("An alphabetic character");
    }

    return 0;
}