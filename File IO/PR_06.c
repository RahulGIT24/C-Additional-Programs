// Merge two files to the third file

#include <stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    f1 = fopen("File4.txt", "r");
    f2 = fopen("File5.txt", "r");
    f3 = fopen("File6.txt", "w");
    char c, c1;
    while (1)
    {
        c = getc(f1);
        if (c == EOF)
        {
            break;
        }
        fprintf(f3, "%c", c);
    }
    fprintf(f3, "\n");
    while (1)
    {
        c1 = getc(f2);
        if (c1 == EOF)
        {
            break;
        }
        fprintf(f3, "%c", c1);
    }
    printf("Merged Successfully");
    return 0;
}