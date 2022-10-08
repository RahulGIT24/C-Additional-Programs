// *Remove Duplicates Items In An Array

#include <stdio.h>

int main()
{
    int size;
    int array[20];
    int i, j, k;
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
                for (k = j; k < size-1; k++)
                {
                    array[k] = array[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("Array elements after deletion of duplicate elements\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}