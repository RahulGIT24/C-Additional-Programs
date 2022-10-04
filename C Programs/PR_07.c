//* Percentage of five subjects

#include <stdio.h>

int main()
{
    int subjects = 5;
    int marks[5];
    int MM = 500;
    int OM = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student in subject %d\n", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        OM += marks[i];
    }

    float percentage = 100 * (float)OM / MM;
    printf("Percentage obtained %.2f", percentage);
    return 0;
}