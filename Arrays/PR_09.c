//* Find the leargest and smallest number in an array
#include <stdio.h>

int main()
{
    int large, small, i, n, array[50];
    printf("How many elements of an array?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &array[i]);
        large = small = array[0];
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
        if (array[i] < small)
        {
            small = array[i];
        }
    }
    printf("Smallest element in this array %d\n", small);
    printf("Largest element in this array %d\n", large);
    return 0;
}