#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a and b  ");
    scanf("%d%d", &a, &b);
    printf("a += b: %d \n", a += b);
    printf("a -= b: %d \n", a -= b);
    printf("a *= b: %d \n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %= b: %d \n", a %= b);
    return 0;
}