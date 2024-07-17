#include <stdio.h>
#include <string.h>
char isPalindrome(char n[10])
{
    int i, k = 0;
    int l = strlen(n);
    char b[10];
    while (l)
    {
        b[k++] = n[--l];
    }

    // for( i=l-1;i>=0;i--){      //using for loop
    //  b[k++]=n[i];
    // }
    // printf("%s",b);

    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == b[i])
        {
            printf("The string is a palindrome.");
            break;
        }
        else
        {
            printf("The string is not a palindrome.");
            break;
        }
    }
}
int main()
{
    char a[10];
    printf("Enter String: ");
    gets(a);
    isPalindrome(a);
    return 0;
}