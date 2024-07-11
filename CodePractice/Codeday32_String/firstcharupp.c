
// Write a C program to convert each word first alphabet to Upper case// Input as :

// Enter a String : i am a student of nareshit

// Output as :

// Sum Of the numbers is : I Am A Student Of Nareshit
#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter String\n");
    gets(a);
    a[0] = a[0] - 32;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' && a[i + 1] != ' ')
        {
            a[i + 1] = a[i + 1] - 32;
        }
    }
    printf("%s", a);
    return 0;
}
