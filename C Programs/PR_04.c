//* Converting person's name into abbrevation

#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter your name\n");
    scanf("%s", name);
    printf("Abbrevation of %s is %c%c%c.", name, name[0], name[1], name[2]);

    return 0;
}