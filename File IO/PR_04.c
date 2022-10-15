// Append content to a file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("File3.txt", "a");
    char str[] = " Gupta";
    fprintf(ptr, "%s", str);
    fclose(ptr);
    return 0;
}