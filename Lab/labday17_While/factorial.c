#include <stdio.h>
int main()
{
    int num;
    int fac = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num >= 1)
    {
        fac *= num;
        num--;
    }
    printf("%d", fac);
    return 0;
}