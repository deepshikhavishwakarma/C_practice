#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a and b ");
    scanf("%d%d", &a, &b);
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);
    return 0;
}