// Find diameter, circumference and area of a circle using functions.

#include <stdio.h>
void diameter(float radius)
{
    printf("Diameter will be %.2f", radius * 2);
}
void circumference(float radius)

{
    float circumference;
    circumference = 2 * 3.14 * radius;
    printf("The circumference will be %.2f", circumference);
}
void area(float radius)
{
    float area = 3.14 * radius * radius;
    printf("The area will be %.2f", area);
}

int main()
{
    char ask;
    printf("Press (d) to find diameter, (c) for circumference, (a) for area\n");
    scanf("%c", &ask);
    float radius;
    if (ask == 'd')
    {
        printf("Enter the radius of circle\n");
        scanf("%f", &radius);
        diameter(radius);
    }
    else if (ask == 'c')
    {
        printf("Enter the radius of circle\n");
        scanf("%f", &radius);
        circumference(radius);
    }
    else if (ask == 'a')
    {
        printf("Enter the radius of circle\n");
        scanf("%f", &radius);
        area(radius);
    }

    return 0;
}