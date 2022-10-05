//* Count the total number of notes in a given amount

#include <stdio.h>

int main()
{
    int notes, amount;
    amount = 2000;
    printf("Total amount %d\n", amount);
    printf("Enter the value of notes\n");
    scanf("%d", &notes);

    if (notes == 10 || notes == 20 || notes == 50 || notes == 100 || notes == 200 || notes == 500 || notes == 2000)
    {
        int noteReq = amount / notes;
        printf("%d requires %d number of %d notes", amount, noteReq, notes);
    }
    else
    {
        printf("There is no note of %d", notes);
    }

    return 0;
}