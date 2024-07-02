#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of A and B : \n");
    scanf("%d %d", &a, &b);
    switch (a < b)
    {
    case 0:
        printf("a is max ");

        break;
    case 1:
        printf("b is max ");
    }

    return 0;
}