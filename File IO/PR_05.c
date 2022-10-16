// How to Copy contents from one file to another file.

#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    f1 = fopen("File4.txt", "r");
    f2 = fopen("File5.txt", "w");
    char c;
    while (1)
    {
        c = fgetc(f1);
        if (c == EOF)
        {
            break;
        }
        fprintf(f2, "%c", c);
    }
    printf("File copied successfully");
    return 0;
}