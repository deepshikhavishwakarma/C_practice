#include <stdio.h>
void main()
{
    int a, b;
    char operater;

    printf("Enter 1st number ");
    scanf("%d", &a);
    printf("Enter 2st number ");
    scanf("%d", &b);
    printf("Enter operater (+,-,/,*): ");
    scanf(" %c", &operater); // if we will not use space then it will not take any operator
    ((operater == '+') && printf("addition = %d\n", a + b)) ||
        ((operater == '-') && printf("substraction = %d\n", a - b)) ||
        ((operater == '/') && printf("division = %d\n", a / b)) ||
        ((operater == '*') && printf("multiplication = %d\n", a * b));

    // return 0;
}