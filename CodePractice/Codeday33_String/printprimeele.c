
// C Program to Display All Characters Present in the Prime Position of a String.

// Test Data :

// Input a string : today is wednesday

// Output as : da sdey

#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    printf("Enter String\n");
    gets(a); // today is wednesday

    int len = strlen(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%c", a[i]);
        }
    }

    return 0;
}