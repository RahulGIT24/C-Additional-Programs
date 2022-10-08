//* Copy all elements from an array to another array.
#include <stdio.h>

int main()
{
    int arr[50], arr2[50], n, k = 0;
    printf("Enter the number of elements of array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[k] = arr[i];
        k++;
    }
    printf("Copied Array\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}