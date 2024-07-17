// Contains only digits.
// Create a function to check if a string contains only digits.
// Sample Input
// Input:
// String: 12345
// Input:
// String: 45A7
// Sample Output
// Output:
// The string contains only digits
// Output:
// The string contains non-digit characters.

#include <stdio.h>
#include <string.h>
char isDigit(char n[10])
{
    int i, count = 0;
    for (i = 0; n[i] != '\0'; i++)
    {
        if ((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z'))
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("The string contains non-digit characters.");
    }
    else
    {
        printf("The string contains only digits");
    }
}
int main()
{
    char a[10];
    printf("Enter String: ");
    gets(a);
    isDigit(a);
    return 0;
}