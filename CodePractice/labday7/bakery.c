#include <stdio.h>
int main()
{
    int choco_price;
    int quantity;
    printf("Welcome to My Bakery Shop!\n");
    printf("-------------------------------\n");
    printf("Available Item is : Chocolate Cake\n");
    printf("Enter the quantity you want to purchase:");
    scanf("%d\n", &quantity);
    printf("Enter the price of Chocolate Cake:");
    scanf("%d\n", &choco_price);
    printf("------Invoice------\n");
    printf("Quantity: %d\n", quantity);
    printf("Price per item: Rs: %d\n", choco_price);
    printf("Total cost : Rs. %d\n", quantity * choco_price);
    printf("Thank you for shopping at My Bakery Shop! Have a nice day!");

    return 0;
}