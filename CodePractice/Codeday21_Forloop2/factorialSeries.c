#include <stdio.h>
int main()
{
    int n, fac, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n); // 5
    for (int i = 1; i <= n; i++)
    { 
        fac = 1;
        for (int j = 1; j <= i; j++)
        {
            fac = fac * j;
        }
        sum += fac;
    }
    printf("\nThe sum of the factorial series up to %d terms is:  %d", n, sum);

    return 0;
}