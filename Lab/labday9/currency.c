#include <stdio.h>
int main()
{
    int amt, exc_rate;
    float target_curr;
    printf("Enter the amount in the source currency:\n");
    scanf("%d", &amt);
    printf("Enter the exchange rate (source to target):\n ");
    scanf("%d", &exc_rate);
    target_curr = (float)(amt * exc_rate);
    printf("Equivalent amount in the target currency: %.2f ", target_curr);
}