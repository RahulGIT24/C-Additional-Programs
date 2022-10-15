// Create a file and write contents, save and close the file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("File1.txt", "w");
    char name[] = "Rahul";
    fprintf(ptr, "%s", name);
    fclose(ptr);
    return 0;
}