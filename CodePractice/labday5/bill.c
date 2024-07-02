#include <stdio.h>
int main()
{
    float bill;
    int people;
    int pay;
    printf("Total bill Amount is: ");
    scanf("%f", &bill);
    printf("Number of people are: ");
    scanf("%d", &people);
    pay = (int)bill / people;
    printf("---------------------------------------\n");
    printf("Amount each person needs to pay is %d ", pay);
    return 0;
}