// Read file contents and display them on the console

#include <stdio.h>

int main()
{
    FILE *ptr;
    char str[100];
    ptr = fopen("File1.txt", "r");
    fscanf(ptr, "%s", str);
    printf("%s", str);
    fclose(ptr);
    return 0;
}