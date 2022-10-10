// Delete last occurance of a character

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, index = -1, len;
    printf("Enter a string\n");
    gets(str);
    printf("Enter a character\n");
    scanf("%c", &ch);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        i = index;
        while (i < len)
        {
            str[i] = str[i + 1];
            i++;
        }
    }
    printf("%s", str);
    return 0;
}