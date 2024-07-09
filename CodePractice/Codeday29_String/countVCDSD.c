// Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .

// Input as :

// Enter a String : Nareshit @123

// Output as :

// Vowel count is : 3

// Consonant count is : 5

// Digit count is : 3

// Special Character count is : 1

#include <stdio.h>

int main()
{
    char a[20] = "Deepshikha@123";
    int i, c, v, s, d;
    for (v = c = s = d = i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            d++;

        if ((a[i] >= 65 && a[i] <= 122) || (a[i] >= 97 && a[i] <= 122))
        {
            if (a[i] == 'a' || a[i] == 'A' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'u' || a[i] == 'U')
                v++;
            else
                c++;
        }
        else
            s++;
    }
    printf("Vowel count is : %d\nConsonant count is : %d\nDigit count is :%d\nSpecial Character count is : %d", v, c, d, s);

    return 0;
}