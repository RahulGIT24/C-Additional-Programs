// Input and print array elements using a pointer

#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element of an array\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}