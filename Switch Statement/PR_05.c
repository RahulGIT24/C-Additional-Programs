//* Check whether a character is vowel or not

#include <stdio.h>

int main()
{
    char ask;
    printf("Enter a character\n", ask);
    scanf("%c", &ask);

    switch (ask)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Entered character is a vowel\n");
        break;

    default:
        printf("Entered character is a consonant\n");
        break;
    }
    return 0;
}