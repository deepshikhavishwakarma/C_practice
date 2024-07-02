#include <stdio.h>

int main()
{
    int age;
    float height, ticket, Final_ticket;
    char vip_pass;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your vip_pass: ");
    scanf(" %c", &vip_pass);

    if (age > 0 && age <= 3)
    {
        ticket = 0;
        printf("your ticket is free %.2f\n", ticket);
    }
    else if (age <= 12)
    {
        ticket = 20;
        printf("your Base ticket is %.2f \n", ticket);
    }
    else if (age <= 64)
    {
        ticket = 100;
        printf("your Base ticket is %.2f\n", ticket);
    }
    else
    {
        ticket = 50;
        printf("your Base ticket is %.2f\n", ticket);
    }
    if (height > 180 || vip_pass == 'y' || vip_pass == 'Y')
    {
        Final_ticket = (ticket + 50) * 0.1;
        printf("Your final ticket price after applying all discounts and charges: %.2f", Final_ticket);
    }
    else if (height < 120 || vip_pass == 'y' || vip_pass == 'Y')
    {
        Final_ticket = (ticket * 0.5 * 0.1);
        printf("Your final ticket price after applying all discounts and charges: %.2f", Final_ticket);
    }
    else
    {
        printf("No discount");
    }

    return 0;
}