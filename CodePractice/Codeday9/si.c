#include <stdio.h>
int main()
{
    float amt, rate, times;
    float si;
    printf("Enter the principal amount: ");
    scanf("%f", &amt);
    printf("Enter the rate of interest (in percentage):");
    scanf("%f", &rate);
    printf("Enter the time period (in years):");
    scanf("%f", &times);
    si = amt * times * rate / 100;
    printf("The simple interest for the given principal amount %.2f\n", amt);
    printf(" rate %.2f%% \n", rate);
    printf(" time %.2f years is %.2f\n", times, si);

    return 0;
}