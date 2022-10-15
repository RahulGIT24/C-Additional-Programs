// Read numbers from a file and write even, odd numbers to separate file.

#include <stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    f1 = fopen("File2.txt", "r");
    f2 = fopen("Even.txt", "w");
    f3 = fopen("Odd Number.txt", "w");
    int num[100], i;
    for (i = 0; i < 6; i++)
    {
        fscanf(f1, "%d", &num[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (num[i] % 2 == 0)
        {
            fprintf(f2, "%d\n", num[i]);
        }
        else
        {
            fprintf(f3, "%d\n", num[i]);
        }
    }

    return 0;
}