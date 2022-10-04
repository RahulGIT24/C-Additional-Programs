//* Area of triangle

#include <stdio.h>

int main()
{
    int base, height;
    printf("Enter the base of triangle in cm\n");
    scanf("%d", &base);
    printf("Enter the height of triangle in cm\n");
    scanf("%d", &height);
    float area = 0.5 * base * height;
    printf("The base of triangle is %d\n", base);
    printf("The height of triangle is %d\n", height);
    printf("The aera of triangle is %.2f\n", area);
    return 0;
}