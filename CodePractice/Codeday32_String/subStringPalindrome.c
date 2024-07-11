// Write a program to find and count all palindromic substrings in a given string.

// Input as :

// Enter a String : madam

// Output as :

// Palindromic substring : madam

// Palindromic substring : ada

// Total palindromic substrings are : 2

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, total = 0; // start=i,end=j
    char a[20];
    printf("Enter String: \n");
    gets(a);
    int len = strlen(a);

    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            int start = i;
            int end = j;
            int flag = 1;

            while (start <= end)
            {
                if (a[start] != a[end])
                {
                    flag = 0;
                    break;
                }
                start++;
                end--;
            }
            if (flag == 1)
            {
                total++;
                for (int k = i; k <= j; k++)
                {
                    printf("%c", a[k]);
                }
                printf("\n");
            }
        }
        printf("%d", total);
    }
    //  printf("%d ",total);
    return 0;
}