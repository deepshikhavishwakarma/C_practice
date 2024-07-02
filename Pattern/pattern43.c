// A B C D E
// A       E
// A       E
// A       E
// A B C D E

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int ch = 'A';
        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("%3c", ch);
            else
                printf("   ");
            ch++;
        }

        printf("\n");
    }

    return 0;
}