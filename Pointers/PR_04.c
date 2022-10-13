//  Reverse an array using pointers

#include <stdio.h>
void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
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
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}