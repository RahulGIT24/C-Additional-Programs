//* Input angles of a triangle and check whether triangle is valid or not

#include <stdio.h>

int main()
{
    float angle1, angle2, angle3;
    printf("Enter three angles of a triangle\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    float sum = angle1 + angle2 + angle3;

    if (sum == 180)
    {
        printf("Sum of three side is %.0f\n", sum);
        printf("The triangle is valid");
    }
    else
    {
        printf("Sum of three side is %.1f\n", sum);
        printf("The triangle is not valid");
    }

    return 0;
}