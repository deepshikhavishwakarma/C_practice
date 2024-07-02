#include <stdio.h>
int main()
{
    int a, b;
    char opt;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value  opt: ");
    scanf(" %c", &opt);
    switch (opt)
    {
    case '+':
    {
        printf("Addition is: %d", a + b);
        break;
    }
    case '-':
    {
        printf("Subtraction is: %d", a - b);
        break;
    }
    case '/':
    {
        printf("Division is: %d", a / b);
        break;
    }
    case '*':
    {
        printf("Multiplication is: %d", a * b);
    }
    }

    return 0;
}