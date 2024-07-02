#include <stdio.h>

int main()
{
    int num, sq, temp, flag = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    while (temp > 0)
    {
        if (temp % 10 != sq % 10)
        {
            flag = 0;
            break;
        }
        temp /= 10;
        sq /= 10;
    }

    if (flag == 1)
    {
        printf("%d is an Automorphic number.\n", num);
    }
    else
    {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}