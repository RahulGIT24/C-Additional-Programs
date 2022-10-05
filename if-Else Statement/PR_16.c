//* Calculate profit or loss

#include <stdio.h>

int main()
{
    int purchase, sale, profit, loss;
    printf("Enter the purchase amount\n");
    scanf("%d", &purchase);
    printf("Enter the sales amount\n");
    scanf("%d", &sale);
    profit = sale - purchase;
    loss = purchase - sale;

    if (sale > purchase)
    {
        printf("Profit of %dRs.", profit);
    }
    else
    {
        printf("Loss of %dRs.", loss);
    }

    return 0;
}