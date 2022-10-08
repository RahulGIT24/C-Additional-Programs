//* Find the reverse of an array

#include <stdio.h>
void reverse(int array[], int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}
int main()
{
    int array[5] = {1, 6, 7, 8, 9};
    printf("Original array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    reverse(array, 5);
    printf("Reversed array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}