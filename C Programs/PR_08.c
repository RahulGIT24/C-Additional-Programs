//* Converting celcius into farhrenheit

#include <stdio.h>

float tempConvertor(float celcius)
{
    float frah = 32 + (celcius * 1.8);
    return frah;
}
int main()
{
    float celcius;
    printf("Enter the temperature in celcius\n");
    scanf("%f", &celcius);
    printf("Temperature in celcius %f\n", celcius);
    printf("Temperature in farhrenheit %.2f\n", tempConvertor(celcius));
    return 0;
}