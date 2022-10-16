// Count characters, words and lines in a text file.

#include <stdio.h>

int main()
{
    FILE *f1;
    f1 = fopen("File6.txt", "r");
    int words = 0, letters = 0, lines = 0;
    char c;
    while ((c = fgetc(f1)) != EOF)
    {
        letters++;
        if (c == '\n' || c == '\0')
        {
            lines++;
        }
        if (c == '\n' || c == '\0' || c == ' ' || c == '\t')
        {
            words++;
        }
    }

    printf("Characters in this file are %d\n", letters);
    printf("Lines in this file are %d\n", lines);
    printf("Words in this file are %d\n", words);
    return 0;
}