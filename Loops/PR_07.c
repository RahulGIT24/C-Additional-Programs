//* Sort float array in ascending and desecending order

#include <stdio.h>

int main()
{
    float array[5];
    float *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for index %d\n", i + 1);
        scanf("%f", ptr);
        ptr++;
    }

    //* For ascending order
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (array[j] > array[i])
    //         {
    //             float temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // printf("Ascending\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", array[i]);
    // }

    //* For descending order
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[j] < array[i])
            {
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Descending\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", array[i]);
    }

    return 0;
}