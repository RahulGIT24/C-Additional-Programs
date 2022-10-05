//* Check wheter a triangle is isocele scalene or equilateral triangle

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter three sides of a triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3 && side1 == side3)
    {
        printf("It is an equilateral triangle");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("It is an isocele triangle");
    }
    else
    {
        printf("It is a scalene triangle");
    }
    return 0;
}