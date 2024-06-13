#include <stdio.h>

int main()
{
    int num;
    printf("Enter number");
    scanf("%d", &num);
    switch (num % 2 != 0)
    {
    case 0:
        puts("Even");
        break;
    case 1:
        puts("odd");
    }

    return 0;
}
