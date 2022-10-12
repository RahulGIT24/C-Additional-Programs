// Cube of any number using the function.

#include <stdio.h>
void cube(int num)
{
    int cube = num * num * num;
    printf("Cube of %d is %d", num, cube);
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    cube(num);
    return 0;
}