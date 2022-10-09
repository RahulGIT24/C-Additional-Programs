// *Search all occurrences of a character in a given string

#include <stdio.h>
#include <string.h>
int main()
{
    int occ = 0;
    char str[] = "Raauhull", c;
    printf("Enter a character\n");
    scanf("%c", &c);
    printf("%c is occuring at indexes:\n", c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            occ = i;
            printf("%d\n", occ);
        }
    }

    return 0;
}