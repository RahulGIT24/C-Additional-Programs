//* Print all negative elements in an array.

#include <stdio.h>

int main()
{
    int arr[10] = {1, 5, 8, 10, -9, -23, 12, -12, 9, -1};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}