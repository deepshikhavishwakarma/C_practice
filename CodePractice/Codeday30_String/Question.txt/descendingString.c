// Descending Order
// Write a c program to sort the String in Descending Order  ,after sorting print the result in string

// format?

// Input as :- "CoreJava"

// Before sorting the array

// CoreJava

// After sorting the array

// vroeaaJC

#include <stdio.h>
int main()
{
    int i, j;
    char a[20];
    printf("Enter String: ");
    scanf("%s", a);
    printf("Before sorting the array \n");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    printf("\nAfter sorting the array \n");
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%c", a[i]);
    }

    return 0;
}