// Write a C program to convert all the character to upper case
// from a given index to end index. If the given index is not available then print
// Index is not available.
// Input as :
// Enter a String : I am a student
// Enter the starting index number : 4
// Enter the ending index number : 13
// Expected output :
// Resulting String is : I am A STUDENT

#include <stdio.h>
int main()
{
    int i1, i2, i, j;
    char a[50] = "I am A student";
    char c;
    for (j = 0; a[j] != '\0'; j++)
        ; // strlen
    printf("Length is %d\n", j);

    printf("Enter the starting index number: ");
    scanf("%d", &i1);
    printf("Enter the ending index number: ");
    scanf("%d", &i2);

    if (i1 < 0 || i2 > j)
    {
        printf("Index is not available");
    }
    else
    {
        for (i = i1; i <= i2; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] -= 32;
            }
        }
        printf("%s", a);
    }
    return 0;
}