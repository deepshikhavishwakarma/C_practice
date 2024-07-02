#include <stdio.h>

int main()
{
    int tea, coffee, cold_coffee, num, bill, paid, ret_amt;
    char exp;
    printf("------------------Deep Cafe-----------------\n");
    printf("Welcome to our Tea Stall Counter!\n Our menu\n");
    printf("Tea --------------------- Rs. 10\nCoffee ------------------ Rs. 20\nCold coffee ------------- Rs. 50\n");
a:
    printf("Choose by entering a number (1-4):");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("How many cups of refreshing tea?");
        scanf("%d", &tea);
        bill = tea * 10;
        printf("Total for %d Tea cup(s)and Total Bill Rs. %d\n", tea, bill);
        printf("Enter your payment amount: Rs.");
        scanf("%d", &paid);
        ret_amt = paid - bill;
        printf("Change: Rs. %d\n", ret_amt);

        printf("Choose to explore more or conclude your visit:\n");
        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &exp);
        if (exp == 'Y')
        {
            goto a;
        }
        else
        {
            printf("Thank you for visiting! We look forward to serving you again soon!\n");
        }

        //   goto a;
    }
    else if (num == 2)
    {
        printf("How many cups of aromatic coffee?");
        scanf("%d", &coffee);
        bill = coffee * 20;
        printf("Total for %d aromatic coffee(s)and Total Bill Rs.%d\n", coffee, bill);
        printf("Enter your payment amount: Rs.");
        scanf("%d", &paid);
        ret_amt = paid - bill;
        printf("Change: Rs. %d\n", ret_amt);
        printf("Choose to explore more or conclude your visit:\n");
        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &exp);
        if (exp == 'Y')
        {
            goto a;
        }
        else
        {
            printf("Thank you for visiting! We look forward to serving you again soon!\n");
        }
    }
    else if (num == 3)
    {
        printf("How many cups of chilled cold coffee?");
        scanf("%d", &cold_coffee);
        bill = cold_coffee * 50;
        printf("Total for %d cold coffee(s)and Total Bill Rs.%d\n", cold_coffee, bill);
        printf("Enter your payment amount: Rs.");
        scanf("%d", &paid);
        ret_amt = paid - bill;
        printf("Change: Rs. %d\n", ret_amt);
        printf("Choose to explore more or conclude your visit:\n");
        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &exp);
        if (exp == 'Y')
        {
            goto a;
        }
        else
        {
            printf("Thank you for visiting! We look forward to serving you again soon!\n");
        }
    }
    else
    {
        printf("Enter valid number");
    }

    return 0;
}