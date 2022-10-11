// Remove all duplicate characters from a given string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, k;
    printf("Enter a string\n");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }
    printf("String will be %s", str);
    return 0;
}