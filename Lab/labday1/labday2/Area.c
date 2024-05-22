#include <stdio.h>
int main()
{
    int cp = 3500;   // cost Price
    int sp = 0;      // selling Price
    int profit = 27; // profit Percent
    float vats = 12.7;
    float sc = 3.87; // service Charge
    sp = cp + ((cp / 100) * profit);
    printf("Selling Price is : %d\n", sp);
    printf("Profit is : %d\n", sp - cp);

    vats = (vats / 100) * sp;
    printf("Vats is : %f\n", vats);

    sc = (sc / 100) * sp;
    printf("Service Charge is : %f", sc);
    return 0;
}