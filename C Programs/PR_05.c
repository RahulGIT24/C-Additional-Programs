//* Calculating simple interest

#include <stdio.h>

int main()
{
    int principle, rate;
    float time;
    float simple_interest;
    printf("Enter the principle amount\n");
    scanf("%d", &principle);
    printf("Enter the Rate of interest in percentage\n");
    scanf("%d", &rate);
    printf("Enter the time period\n");
    scanf("%f", &time);

    simple_interest = (float)principle * (float)rate / 100 * time;
    printf("Principle amount is %dRs.\n", principle);
    printf("Rate is %d%\n", rate);
    printf("Time is %.1f years\n", time);
    printf("Simple Interest is %.2f", simple_interest);
    return 0;
}