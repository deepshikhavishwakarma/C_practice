#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    (count == 2) ? puts("Prime no") : puts("Composite no.");

    return 0;
}