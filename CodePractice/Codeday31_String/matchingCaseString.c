// Write a C program to check the
// Input as :
// Enter a String : Nareshit@123
// Expected output :
// The given String is matching to our cases.
// Input as :
// Enter a String : nareshit
// Expected output :
// The given String is not matching to our cases.

#include <stdio.h>
int main()
{
    int upp, low, sp, digi, j;
    char a[50];
    printf("Enter Ur String ");
    gets(a);

    for (upp = low = sp = digi = j = 0; a[j] != '\0'; j++)
    { // strlen
        // printf("Length is %d\n", j);
        if (a[j] >= 'a' && a[j] <= 'z')
        {
            low++;
        }
        else if (a[j] >= 'A' && a[j] <= 'Z')
        {
            upp++;
        }
        else if (a[j] >= '0' && a[j] <= '9')
        {
            digi++;
        }
        else
        {
            sp++;
        }
    }
    if (low >= 1 && upp >= 1 && digi >= 1 && sp >= 1)
    {
        printf("The given String is matching to our cases.");
    }
    else
    {
        printf("The given String is not matching to our cases.");
    }
    return 0;
}