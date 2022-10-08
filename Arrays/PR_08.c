//* Count the total number of negative positive and zeroe's in an array

#include <stdio.h>

int main()
{
    int negative = 0, positive = 0, zero = 0, i;
    int arr[10] = {1, 5, 0, 10, -9, -23, 12, -12, 0, -1};

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive Integers were %d\n", positive);
    printf("Negative Integers were %d\n", negative);
    printf("Zeroes were %d\n", zero);
    return 0;
}