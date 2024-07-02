#include <stdio.h>
int main()
{
    int tea_price = 15;
    int Coff_price = 25;
    int biscuit_price = 10;
    int tea, coffee, biscuits, bill;
    printf("Welcome to Tasty Treats Cafe!\n We provide a delightful selection of beverages and snacks to satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you! Let's calculate your bill based on your preferences.\n");
    printf("How many cups of tea would you like to order? :  \n");
    scanf("%d", &tea);
    printf("How many cups of coffee would you like to order? : \n");
    scanf("%d", &coffee);
    printf("How many biscuits would you like to order? :\n");
    scanf("%d", &biscuits);
    printf("---------------------------------------\n");
    printf("%d cups of tea\n", tea);
    printf("%d cups of coffee\n", coffee);
    printf("%d biscuits\n", biscuits);
    bill = (tea * tea_price + Coff_price * coffee + biscuit_price * biscuits);
    printf("Total Bill Amount: Rs.%d\n", bill);
    printf("Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.");
    return 0;
}