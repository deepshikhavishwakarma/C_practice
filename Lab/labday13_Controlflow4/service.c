#include <stdio.h>

int main()
{

    int wheels, age, option, noofTyre, bill;
    char name[20];
    char bike[20];
    printf("Enter Type of vehicle(2,3,4 vehicle): ");
    scanf("%d", &wheels);
    if (wheels >= 2 && wheels <= 4)
    {
        printf("Enter age if vehicle: ");
        scanf("%d", &age);
        if (age > 8)
        {
            printf("Name of the Owener: ");
            scanf("%s", name);
            printf("Name of the bike: ");
            scanf("%s", bike);
            printf("Enter 1- Tyre Problem \nEnter 2 - Fuel problem\nEnter 3 - Engine issue\nEnter 4 - General services\n");
            printf("Enter your option\n");
            scanf("%d", &option);

            if (option == 1)
            {
                printf("how many tyres you are facing the issue ?");
                scanf("%d", &noofTyre);
                bill = noofTyre * 400;
                printf("Name of the Owener:  %s\nName of the bike:  %s\nIssue %dTyre Problem\n Bill: Rs. %d ", name, bike, noofTyre, bill);
            }
            else if (option == 2)
            {
                bill = 1500;
                printf("Name of the Owener %s\nName of the bike %s\nIssue : Fuel Problem\nBill Rs. %d ", name, bike, bill);
            }
            else if (option == 3)
            {
                bill = 5000;
                printf("Name of the Owener %s\nName of the bike %s\nIssue : engine issue\nBill Rs. %d ", name, bike, bill);
            }
            else if (option == 4)
            {
                bill = 1000;
                printf("Name of the Owener %s\nName of the bike %s\nIssue : general servicing \nBill Rs. %d ", name, bike, bill);
            }
            else
            {
                printf("There is no problem");
            }
        }
        else
        {
            printf("your vehicle servie will done after a while");
        }
    }
    else
    {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }

    return 0;
}