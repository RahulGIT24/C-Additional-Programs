//  Search an element in an array using pointers.

#include <stdio.h>

int main()
{
    int search;
    int arr[5] = {112, 45, 67, 89, 23};
    int *ptr = arr;
    int *ptr2 = &search;
    printf("Enter the element you want to search\n");
    scanf("%d", ptr2);

    for (int i = 0; i < 5; i++)
    {
        if (*ptr == search)
        {
            printf("The element is present at %d index", i);
        }
        ptr++;
    }

    return 0;
}