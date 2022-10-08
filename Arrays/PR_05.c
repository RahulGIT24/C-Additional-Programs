//* Count the total number of duplicate elements in an array.
#include <stdio.h>

int main()
{
    int size;
    int array[20];
    int i, j, k, duplicate = 0;
    printf("Define the number of elements in an array\n");
    scanf("%d", &size);
    printf("Enter the %d elements\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                duplicate++;
            }
        }
    }
    printf("Duplicate elements in the array are %d", duplicate);
    return 0;
}