// Delete first occurance of a character

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, j, len;
    printf("Enter a string\n");
    gets(str);
    printf("Enter a character\n");
    scanf("%c", &ch);
    len = strlen(str);

    while (i < len && str[i] != ch)
    {
        i++;
    }

    while (i < len)
    {
        str[i] = str[i + 1];
        i++;
    }
    printf("String after removing it's first %c is %s", ch, str);
    return 0;
}