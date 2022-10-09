//* Count occurrences of a character in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char str[] = "Raahul", c;
    printf("Enter a character\n");
    scanf("%c", &c);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("The occurance of %c in %s is %d", c, str, count);
    return 0;
}