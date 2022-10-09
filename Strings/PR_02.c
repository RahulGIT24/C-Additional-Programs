//* Reverse a string

#include <stdio.h>
#include <string.h>
void reverse(char str[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main()
{
    char str[50];
    printf("Enter the string\n");
    gets(str);
    int len = strlen(str);
    printf("String before reverse %s\n", str);
    reverse(str, len);
    printf("String after reverse %s\n", str);
    return 0;
}