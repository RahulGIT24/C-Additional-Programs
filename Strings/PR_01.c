//! String Plaindrome or not

#include <stdio.h>
#include <string.h>
void reverse(char str[], int n)
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
    char str[50];
    char str2[50];

    printf("Enter a string\n");
    gets(str);

    strcpy(str2, str);
    len = strlen(str);

    reverse(str, len);

    int compare = strcmp(str, str2);

    if (compare == 0)
    {
        printf("%s is palindrome", str2);
    }
    else
    {
        printf("%s is not palindrome", str2);
    }

    return 0;
}