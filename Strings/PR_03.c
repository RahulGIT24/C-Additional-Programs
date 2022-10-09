//* Convert uppercase to lowercase

#include <stdio.h>

int main()
{
    char upper[50], lower[50];
    int i;

    printf("Enter a uppercase string\n");
    gets(upper);
    while (upper[i] != '\0')
    {
        lower[i] = upper[i] + 32;
        i++;
    }
    printf("Lowercase %s", lower);
    return 0;
}