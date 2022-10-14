// In short How to Copy one string to another using pointer.

#include <stdio.h>

int main()
{
    char str[100];
    char str2[100];
    int i;
    char *ptr = str;
    char *ptr2 = str2;
    printf("Enter any string\n");
    gets(str);
    for (i = 0; i < *ptr != '\0'; i++)
    {
        *ptr2 = *ptr;
        ptr++;
        ptr2++;
    }

    str2[i] != '\0';
    printf("Copied string is %s", str2);

    return 0;
}