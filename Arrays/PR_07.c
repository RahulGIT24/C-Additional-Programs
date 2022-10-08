//* Sum of all elements of an array

#include <stdio.h>

int main()
{
    int arr[5] = {1, 3, 4, 5, 7};
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum is %d", sum);
    return 0;
}