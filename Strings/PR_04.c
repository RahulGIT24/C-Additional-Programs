//* Convert lowercase to uppercase

#include <stdio.h>

int main()
{
    char upper[50], lower[50];
    int i;

    printf("Enter a lowercase string\n");
    gets(lower);
    while (lower[i] != '\0')
    {
        upper[i] = lower[i] - 32;
        i++;
    }
    printf("Uppercase %s", upper);
    return 0;
}