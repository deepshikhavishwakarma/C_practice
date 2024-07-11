// Write a C program to find out the sum of the numbers which is present in a given string.

// Input as :

// Enter a String : TS12ab345

// Output as :
// Sum Of the numbers is : 15

#include <stdio.h>
int main()
{
    char a[15];
    int i, sum = 0;
    printf("Enter String: \n");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            sum += (a[i] - 48);
        }
    }
    printf("%d ", sum);
    return 0;
}