#include <stdio.h>

//* Area and circumference of circle
int main()
{
    float pie = 3.14;
    float radius, area, circumference;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    area = pie * radius * radius;
    circumference = 2 * pie * radius;
    printf("The radius of circle is %.2f\n", radius);
    printf("The area of circle is %.2f\n", area);
    printf("The circumference of circle is %.2f\n", circumference);
    return 0;
}