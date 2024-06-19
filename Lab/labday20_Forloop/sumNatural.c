#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The first %d natural number is :\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        count += i;
    }

    printf("\nThe Sum of Natural Numbers upto %d terms: %d", n, count);

    return 0;
}