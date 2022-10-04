//* Calculation of gross salary of an employee

#include <stdio.h>

int main()
{
    int salary, tax, grossSal, tax_charged;
    tax = 15;
    printf("Enter your net salary\n");
    scanf("%d", &salary);

    tax_charged = salary * tax / 100;
    grossSal = salary + tax_charged;
    printf("Your net salary is %d\n", salary);
    printf("Tax charged %d%\n", tax);
    printf("Your gross salary will be %d\n", grossSal);
    return 0;
}
