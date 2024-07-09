// 5.Write a C program to sort the string data and print it.

// Input as :

// Enter a String : apple

// Output as :

// After Sorting the String is : aelpp

#include <stdio.h>

int main()
{
    char a[20] = "Apple", temp;
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%s", a);
    return 0;
}