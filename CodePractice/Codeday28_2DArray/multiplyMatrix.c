// Write a program in C for a 2D array of size 3x3 and print the matrix. Test Data : Input elements in the matrix :

// element - [0],[0] : 1

// element - [0],[1] : 2

// element - [0],[2] : 3

// element - [1],[0] : 4

// element - [1],[1] : 5

// element - [1],[2] : 6

// element - [2],[0] : 7

// element - [2],[1] : 8

// element - [2],[2] : 9
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("How many numbers you want to store? \n");
    scanf("%d %d", &n1, &n2);
    // printf("Enter %d values for 2D array nr and nc : ", n1*n2);
    int a[n1][n2], b[n1][n2], c[n1][n2];
    printf("Enter %d values for 1st  matrix: ", n1 * n2);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter  %d values for 1st  matrix: ", n1 * n2);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication of Matrix is: \n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}