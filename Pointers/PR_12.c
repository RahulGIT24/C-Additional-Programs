// Sort array using pointers.

#include <stdio.h>

int main()
{
    int arr[5] = {1, 67, 34, 23, 45};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int a = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = a;
                ptr++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}