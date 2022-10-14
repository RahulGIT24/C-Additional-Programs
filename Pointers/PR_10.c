//  Find the reverse of a string using pointers.

#include <stdio.h>
#include <string.h>

char reverse(char *str, int n)
{
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
int main()
{
    int len;
    char str[100], *ptr = str;
    printf("Enter a string\n");
    gets(ptr);
    len = strlen(str);
    printf("String before reverse %s\n", ptr);
    reverse(ptr, len);
    printf("String after reverse %s\n", ptr);
    return 0;
}