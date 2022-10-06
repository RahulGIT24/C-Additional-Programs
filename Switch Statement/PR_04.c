//* Find radius circumference and volume of cylinder

#include <stdio.h>
#include <math.h>
int main()
{
    float circumference, volume, radius, height = 23;
    char ask;
    printf("What would you like to calculate (Press (r) for radius (c) for circumference and (v) for volume)\n");
    scanf("%c", &ask);

    switch (ask)
    {
    case 'c':
        printf("Enter the radius of cylinder\n");
        scanf("%f", &radius);
        circumference = (radius * 2) * 3.14;
        printf("Radius of cylinder is %.1f\n", radius);
        printf("Circumference of cylinder is %.1f\n", circumference);
        break;
    case 'v':
        printf("Enter the radius of cylinder\n");
        scanf("%f", &radius);
        volume = (radius * radius * height) * 3.14;
        printf("Height of cylinder is %.1f\n", height);
        printf("Radius of cylinder is %.1f\n", radius);
        printf("Volume of cylinder is %.1f\n", volume);
        break;
    case 'r':
        printf("Enter the volume of cylinder\n");
        scanf("%f", &volume);
        radius = sqrt(volume / (height * 3.14));
        printf("Height of cylinder is %.1f\n", height);
        printf("Volume of cylinder is %.1f\n", volume);
        printf("Radius of cylinder is %.1f\n", radius);
        break;
    }
    return 0;
}