//   1   3   5   7   9
//   11  13  15  17  19
//   21  23  25  27  29
//   31  33  35  37  39
//   41  43  45  47  49

#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            printf("%4d", a);
            a = a + 2;
        }
        printf("\n");
    }

    return 0;
}