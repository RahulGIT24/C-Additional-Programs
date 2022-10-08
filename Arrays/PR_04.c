//* Put even and odd elements of an array in two separate arrays.
#include <stdio.h>

int main()
{
    int arr[10], even_arr[10], odd_arr[10];
    int j = 0, k = 0, n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Given Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_arr[k] = arr[i];
            k++;
        }
        else
        {
            odd_arr[j] = arr[i];
            j++;
        }
    }
    printf("Even numbers were\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", even_arr[i]);
    }
    printf("odd numbers were\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d\n", odd_arr[i]);
    }

    return 0;
}