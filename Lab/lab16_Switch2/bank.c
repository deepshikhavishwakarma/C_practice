#include <stdio.h>
int main()
{
    float minBal, amt, balance;
    char code;
    printf("Starting with your Minimum balance: ");
    scanf("%f", &minBal);
    if (minBal > 2000)
    {
        printf("Enter transaction Code: ");
        scanf(" %c", &code);
        printf("Enter your Amount: ");
        scanf("%f", &amt);
        balance = minBal;
        switch (code)
        {
        case 'd':
        case 'D':
        {

            if (amt > 0)
            {
                balance = minBal + amt;
                printf("Your available balance is: %.2f :", balance);
            }
            else
            {
                printf("Enter valid amount.");
            }
            break;
        }
        case 'w':
        case 'W':
        {

            if (amt > 0 && amt < balance)
            {
                balance -= amt;
                printf("Your available balance is %.2f :", balance);
            }
            else
                printf("Enter valid amount.");
        }
        }
    }
    else
    {
        printf("Ammount Can't be stored");
    }
    return 0;
}