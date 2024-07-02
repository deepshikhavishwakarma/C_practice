#include <stdio.h>

int main()
{

    int amount, remain, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount); // 1250
    if (amount != 0)
    {
        notes = amount / 500;                 // 2
        remain = amount % 500;                // 250
        printf("Rs. 500 notes: %d\n", notes); // 2
        notes = remain / 100;                 // 250/100=2
        remain = remain % 100;
        printf("Rs. 100 notes: %d\n", notes); // 2
        notes = remain / 50;                  // 250/100=2
        remain = remain % 50;
        printf("Rs. 50 notes: %d\n", notes); // 2
        notes = remain / 20;                 // 250/100=2
        remain = remain % 20;
        printf("Rs. 20 notes: %d\n", notes); // 2
        notes = remain / 10;                 // 250/100=2
        remain = remain % 10;
        printf("Rs. 10 coin: %d\n", notes); // 2
        notes = remain / 5;                 // 250/100=2
        remain = remain % 5;
        printf("Rs. 5 coin: %d\n", notes); // 2
        notes = remain / 2;                // 250/100=2
        remain = remain % 2;
        printf("Rs. 2 coin:%d\n", notes); // 2
        notes = remain / 1;               // 250/100=2
        remain = remain % 1;
        printf("Rs. 1 coin :%d\n", notes); // 2
    }
    else
    {
        printf("Please Enter correct amount");
    }

    return 0;
}