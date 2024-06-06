#include <stdio.h>

int main()
{
    float unit;
    printf("Enter the electricity units consumed: ");
    scanf("%f", &unit);
    float amt;
    if (unit <= 50)
    {
        amt = ((unit * 0.5) + (unit * 0.5 * 0.2));
        printf("Total electricity bill: Rs. %.2f", amt);
    }
    else if (unit > 50 && unit <= 100)
    {
        amt = ((unit * 0.75) - (50 * .5)) + (unit * 0.75 * 0.2);
        printf("Total electricity bill: Rs. %.2f", amt);
    }
    else if (unit > 100 && unit <= 200)
    {
        amt = ((unit * 1.20) + (unit * 1.20 * 0.2));
        printf("Total electricity bill: Rs. %.2f", amt);
    }
    else
    {
        amt = ((unit * 1.50) + (unit * 1.50 * 0.2));
        printf("Total electricity bill: Rs. %.2f", amt);
    }
    return 0;
}