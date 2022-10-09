//* Find the first occurrence of a character in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int occ = 0;
    char str[] = "Raahul", c;
    printf("Enter a character\n");
    scanf("%c", &c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            occ = i;
            break;
        }
    }
    printf("The first occurance of %c in %s is at index %d", c, str, occ);
    return 0;
}