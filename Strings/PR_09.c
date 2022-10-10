// Delete all occurances of a character from a given string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char removeTo;
    int i, j, len;

    printf("Enter a string\n");
    gets(str);
    printf("Enter a character to remove\n");
    scanf("%c", &removeTo);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == removeTo)
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
    printf("After deletion of %c, string will be %s", removeTo, str);
    return 0;
}
