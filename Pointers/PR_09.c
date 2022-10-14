// Compare two strings using pointers.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    char *ptr = str, *ptr2 = str2;
    printf("Enter first string\n");
    scanf("%s", ptr);
    printf("Enter second string\n");
    scanf("%s", ptr2);

    int comp = strcmp(ptr2, ptr);
    printf("First string is %s\n", ptr);
    printf("Second string is %s\n", ptr2);

    if (comp == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}