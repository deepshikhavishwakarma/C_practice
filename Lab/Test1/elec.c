// Program 3 ( Point 15 )
// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition: 

// -> For first 50 units Rs. 0.50/unit 

// -> For next 100 units Rs. 0.75/unit 

// -> For next 100 units Rs. 1.20/unit 

// -> For unit above 250 Rs. 1.50/unit 

// An additional surcharge of 20% is added to the bill. 

// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.  


// Input as : 

// Enter the electricity units consumed: 40

// Output as :

// Total electricity bill: Rs. 24.00
// Input as :

// Enter the electricity units consumed: 100

// Output as :

// Total electricity bill: Rs. 75.00
//-----------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter units consumed");
    scanf("%d",&unit);
    if(unit <= 50 ){
     bill =  unit*0.5*0.2;
     printf("Your Total Bill is %f\n", bill);
    }else{
        printf("No Bill");
    }
    return 0;
}
