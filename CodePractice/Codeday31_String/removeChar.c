

//  remove given character from a String.

// Write a C program to remove given character from a String.

// Input as :

// Enter a String : Bookstore

// Enter the character you want to remove : o

// Expected Output :

// Resulting String is : Bkstre

#include <stdio.h>
int main()
{
    int i;
    char a[20] = "Bookstore";
    char c;
    printf("Enter the character you want to remove: ");
    scanf("%c", &c);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != c)
            printf("%c", a[i]);
    }

    return 0;
}