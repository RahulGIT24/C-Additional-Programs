// Find the length of the string using pointers.

#include <stdio.h>

int main()
{
    char str[100];
    int len;
    char *ptr = str;
    printf("Enter a string: ");
    gets(str);

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    printf("Length of string is %d", len);
    return 0;
}