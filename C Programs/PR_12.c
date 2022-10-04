//* read the integer and print first three powers

#include <stdio.h>
#include <math.h>
int main()
{
    int num, a, b, c;
    printf("Enter a number\n");
    scanf("%d", &num);
    a = pow(num, 1);
    b = pow(num, 2);
    c = pow(num, 3);
    printf("Output is\n");
    printf("%d, %d, %d", a, b, c);
    return 0;
}