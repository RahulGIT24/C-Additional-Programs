//! Insert An Element Desired or Specific Position In An Array
#include <stdio.h>

int main()
{
    int array[100] = {0};
    int ask, pos, n = 10;
    printf("Enter the number\n");
    scanf("%d", &ask);
    printf("Where you want to insert %d?\n", ask);
    scanf("%d", &pos);

    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
    n++;
    for (int i = n - 1; i >= pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos - 1] = ask;

    printf("Updated Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }

    return 0;
}