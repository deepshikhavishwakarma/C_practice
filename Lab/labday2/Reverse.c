#include <stdio.h>
int main()
{
    int n = 786;
    printf("Number = %d\n%d", n, n % 10);
    n = n / 10;

    printf("%d%d", n % 10, n / 10);

    return 0;
}