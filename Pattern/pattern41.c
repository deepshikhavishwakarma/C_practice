
// A
// B A
// C B A
// D C B A
// E D C B A

#include <stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        ch = 64 + i;
        for (int j = 1; j <= i; j++)
        {

            printf("%2c", ch--);
        }
        printf("\n");
    }

    return 0;
}