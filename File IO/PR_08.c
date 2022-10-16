//  Find the occurrence of a character in a text file.

#include <stdio.h>

int main()
{
    char c, c1;
    int occ;
    printf("Enter a character\n");
    scanf("%c", &c);

    FILE *f1;
    f1 = fopen("File6.txt", "r");
    while (1)
    {
        c1 = fgetc(f1);
        if (c1 == EOF)
        {
            break;
        }
        if (c == c1)
        {
            occ++;
        }
    }
    printf("Occurance of %c is %d", c, occ);
    return 0;
}