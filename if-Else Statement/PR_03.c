//* Character is vowel or consonant

#include <stdio.h>

int main()
{
    int lowercase, uppercase;
    char c = 'e';
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase)
    {
        printf("%c is vowel\n", c);
    }
    else
    {
        printf("%c is consonant\n", c);
    }

    return 0;
}