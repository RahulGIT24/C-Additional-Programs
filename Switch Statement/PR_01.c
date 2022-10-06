//*Temperature Conversion Celsius To Fahrenheit And Vice Versa

#include <stdio.h>

int main()
{
    int frah, ask;
    int celcius;
    printf("Press 1 to calculate celcius to Fahrenheit and 2 to calculate Fahrenheit to celcius\n");
    scanf("%d", &ask);
    switch (ask)
    {
    case 1:
        printf("Enter temperature in Celcius\n");
        scanf("%d", &celcius);
        frah = (celcius * 1.8) + 32;
        printf("Temperature in celcius is %.1f", (float)frah);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit\n");
        scanf("%d", &frah);
        celcius = (frah - 32) * 0.5556;
        printf("Temperature in celcius is %.1f", (float)celcius);
        break;
    }
    return 0;
}