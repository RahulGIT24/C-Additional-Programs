//* Print the ASCII value of a character

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}