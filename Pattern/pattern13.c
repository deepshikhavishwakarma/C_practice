// 1 0 1 0 1
// 1 0 1 0 1
// 1 0 1 0 1
// 1 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= n; j++)           //This loop is correct but 2nd loop is shorter than the first loop.
        // {
        //     if (j % 2 == 0)
        //         printf("0");
        //     else
        //         printf("1");
        // }

        for (int j = 1; j <= n; j++)
        {
            
            printf("%3d",j%2);
           
        }
        printf("\n");
    }
    return 0;
}