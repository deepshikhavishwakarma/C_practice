#include <stdio.h>
int main()
{
    int amt, rate, tim;
    float si;
    printf("principal amount: ");
    scanf("%d", &amt);
    printf("Interest rate: ");
    scanf("%d", &rate);
    printf("Time in years: ");
    scanf("%d", &tim);
    si = (amt * rate * tim) / 100;
    printf("---------------------------\nSimple Interest is:");
    printf("%f", si);

    return 0;
}

// Simple Interest = (PA*rate*time)/100